/*
 * XREFs of MiMakeProtoAddressValid @ 0x1400E20DC
 * Callers:
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiLockProtoPage @ 0x1400E1EC0 (MiLockProtoPage.c)
 *     MiCaptureProtectionFromProto @ 0x1400E1F9C (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rdi
  __int16 v3; // bx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v2);
      v3 = v9;
      if ( (v9 & 1) == 0 )
        goto LABEL_9;
      v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v9) >> 12) & 0xFFFFFFFFFLL;
    }
    while ( !MI_IS_PFN(v4) );
    if ( (v3 & 0x200) == 0 )
      break;
LABEL_9:
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  v5 = 48 * v4 - 0x58000000000LL;
  v6 = MiLockPageInline(v5);
  v7 = MI_READ_PTE_LOCK_FREE(v2);
  v9 = v7;
  if ( (v7 & 1) == 0 || (v7 & 0x200) != 0 || v4 != MI_GET_PAGE_FRAME_FROM_PTE(&v9) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    goto LABEL_9;
  }
  MiAddLockedPageCharge(48 * v4 - 0x58000000000LL, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  return 48 * v4 - 0x58000000000LL;
}
