/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x1400E0B6C
 * Callers:
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiCaptureProtectionFromProto @ 0x1400E0DD8 (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  BOOL v9; // eax
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v15; // esi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 result; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 0x90482413000LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)a1;
    if ( v3 <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      a2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( a2 )
      {
        v5 = *(_QWORD *)(a2 + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v5 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v5 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
    }
    v20 = v4;
    if ( (v4 & 1) == 0 )
      break;
    v6 = v4;
    if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v7 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v20 >> 3) & 0x1FF));
        if ( (v8 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v8 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
    }
    v9 = MI_IS_PFN((v6 >> 12) & 0xFFFFFFFFFLL);
    v12 = 0x90482413000LL;
    if ( v9 )
    {
      v13 = 48 * v10 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v15 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
          v12 = 0x8000000000000000uLL;
        }
        while ( *(__int64 *)(v13 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
        v11 = 0x7FFFFFFFFFFFFFFFLL;
      }
      a2 = *(_QWORD *)a1;
      if ( v3 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v12, a2)
        && (a2 & 1) != 0
        && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
      {
        v16 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            a2 |= 0x20uLL;
          if ( (v17 & 0x42) != 0 )
            a2 |= 0x42uLL;
        }
      }
      if ( v4 == a2 )
      {
        result = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v13 + 16);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v19);
        __writecr8(CurrentIrql);
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v11);
      __writecr8(CurrentIrql);
    }
  }
  return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v20);
}
