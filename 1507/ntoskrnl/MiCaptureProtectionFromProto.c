/*
 * XREFs of MiCaptureProtectionFromProto @ 0x1400E0DD8
 * Callers:
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiMakeProtoAddressValid @ 0x1400E08B8 (MiMakeProtoAddressValid.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400E0B6C (MiCaptureProtectionFromLockedProto.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiCaptureProtectionFromProto(unsigned __int64 a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // r10
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 ProtoAddressValid; // rbx
  unsigned __int64 v10; // rdx
  unsigned int locked; // esi
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = a1 + 0x90482413000LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = v1;
    if ( v2 <= 0x7F8 && (unsigned int)MiPteHasShadow(a1, v1) && (v5 & 1) != 0 && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      v6 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v7 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v7 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
    }
    v13 = v5;
    if ( (v5 & 1) != 0 )
      break;
    if ( (unsigned int)MiInvalidPteConforms(v5, v5) )
      return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v13);
  }
  ProtoAddressValid = MiMakeProtoAddressValid(a1, v5);
  locked = MiCaptureProtectionFromLockedProto(a1, v10);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(ProtoAddressValid + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(__int64 *)(ProtoAddressValid + 24) < 0 );
  }
  MiRemoveLockedPageChargeAndDecRef(ProtoAddressValid);
  _InterlockedAnd64((volatile signed __int64 *)(ProtoAddressValid + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return locked;
}
