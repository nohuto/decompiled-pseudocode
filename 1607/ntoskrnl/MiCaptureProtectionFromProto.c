/*
 * XREFs of MiCaptureProtectionFromProto @ 0x1401F000C
 * Callers:
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeProtoAddressValid @ 0x1400B573C (MiMakeProtoAddressValid.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400BBA68 (MiCaptureProtectionFromLockedProto.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiCaptureProtectionFromProto(unsigned __int64 a1)
{
  unsigned __int64 i; // rbx
  unsigned __int64 ProtoAddressValid; // rdi
  unsigned int locked; // esi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  for ( i = a1; ; a1 = i )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v9 & 1) != 0 )
    {
      ProtoAddressValid = MiMakeProtoAddressValid(i);
      locked = MiCaptureProtectionFromLockedProto(i);
      v4 = (unsigned __int8)MiLockPageInline(ProtoAddressValid);
      MiRemoveLockedPageChargeAndDecRef(ProtoAddressValid, v5, v6, v7);
      _InterlockedAnd64((volatile signed __int64 *)(ProtoAddressValid + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      return locked;
    }
    if ( (unsigned int)MiInvalidPteConforms(v9) )
      break;
  }
  return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v9);
}
