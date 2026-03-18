/*
 * XREFs of MiCaptureProtectionFromProto @ 0x1400E1F9C
 * Callers:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400E2010 (MiCaptureProtectionFromLockedProto.c)
 *     MiMakeProtoAddressValid @ 0x1400E20DC (MiMakeProtoAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCaptureProtectionFromProto(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 v2; // rax
  __int64 ProtoAddressValid; // rdi
  unsigned int locked; // esi
  unsigned __int64 v6; // rbx

  v2 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
  if ( (v2 & 1) == 0 )
    return (v2 >> 5) & 0x1F;
  ProtoAddressValid = MiMakeProtoAddressValid(BugCheckParameter1);
  locked = MiCaptureProtectionFromLockedProto(BugCheckParameter1);
  v6 = (unsigned __int8)MiLockPageInline(ProtoAddressValid);
  MiRemoveLockedPageChargeAndDecRef(ProtoAddressValid);
  _InterlockedAnd64((volatile signed __int64 *)(ProtoAddressValid + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  return locked;
}
