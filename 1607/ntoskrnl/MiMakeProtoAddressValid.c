/*
 * XREFs of MiMakeProtoAddressValid @ 0x1400B573C
 * Callers:
 *     MiLockProtoPage @ 0x1400B6A2C (MiLockProtoPage.c)
 *     MiCaptureProtectionFromProto @ 0x1401F000C (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeProtoAddressValid(unsigned __int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int16 v4; // r9
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v2);
      if ( (v9 & 1) == 0 )
        goto LABEL_9;
      v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v9) >> 12) & 0xFFFFFFFFFLL;
    }
    while ( !MiIsPfnInline(v3) );
    if ( (v4 & 0x200) == 0 )
      break;
LABEL_9:
    MmAccessFault(2uLL, a1, 0, 0LL);
  }
  v5 = 48 * v3 - 0x58000000000LL;
  v6 = MiLockPageInline(v5);
  v7 = MI_READ_PTE_LOCK_FREE(v2);
  v9 = v7;
  if ( (v7 & 1) == 0 || (v7 & 0x200) != 0 || v3 != MI_GET_PAGE_FRAME_FROM_PTE(&v9) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    goto LABEL_9;
  }
  MiAddLockedPageCharge(48 * v3 - 0x58000000000LL, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  return 48 * v3 - 0x58000000000LL;
}
