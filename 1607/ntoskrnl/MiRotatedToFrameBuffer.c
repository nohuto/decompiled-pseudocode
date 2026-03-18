/*
 * XREFs of MiRotatedToFrameBuffer @ 0x1400BDE00
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiGetPageProtection @ 0x1400BD710 (MiGetPageProtection.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiRevertValidPte @ 0x1400E17F0 (MiRevertValidPte.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF4E0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(__int64 a1)
{
  _BOOL8 result; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(&v7);
    if ( !MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL) )
      return 1;
    v5 = *(_QWORD *)(v4 + 8);
    if ( (v5 | 0x8000000000000000uLL) != v3
      || (v6 = MI_GET_PAGE_FRAME_FROM_PTE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) != v6) )
    {
      if ( (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0 || v5 < 0 )
        return 1;
    }
  }
  return result;
}
