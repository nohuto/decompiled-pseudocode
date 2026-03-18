/*
 * XREFs of MiRotatedToFrameBuffer @ 0x14001EE20
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  _BOOL8 result; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(a1);
  result = 0;
  if ( (v6 & 1) != 0 )
  {
    v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v6) >> 12) & 0xFFFFFFFFFLL;
    v4 = 48 * v3 - 0x58000000000LL;
    if ( !(unsigned int)MI_IS_PFN(v3) )
      return 1;
    v5 = *(_QWORD *)(v4 + 8);
    if ( ((v5 | 0x8000000000000000uLL) != a1
       || (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) != MI_GET_PAGE_FRAME_FROM_PTE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL))
      && ((*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0 || v5 < 0) )
    {
      return 1;
    }
  }
  return result;
}
