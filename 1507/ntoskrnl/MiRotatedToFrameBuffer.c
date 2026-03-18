/*
 * XREFs of MiRotatedToFrameBuffer @ 0x140080948
 * Callers:
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020EB90 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 *a1)
{
  unsigned __int64 PteShadow; // rcx
  unsigned __int64 v3; // r11
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a1;
  v3 = 2040LL;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  v10 = PteShadow;
  if ( (PteShadow & 1) == 0 )
    return 0LL;
  if ( (unsigned __int64)&STACK[0x90482413030] <= v3 )
    PteShadow = MiReadPteShadow(&v10, PteShadow);
  if ( !(unsigned int)MI_IS_PFN((PteShadow >> 12) & 0xFFFFFFFFFLL) )
    return 1LL;
  v8 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = *v8;
  if ( (unsigned __int64)(v8 + 0x12090482600LL) <= v7 )
    v9 = MiReadPteShadow(v8, *v8);
  return ((*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) != v5
       || ((*(_QWORD *)(v6 + 40) ^ (v9 >> 12)) & 0xFFFFFFFFFLL) != 0)
      && ((*(_QWORD *)(v6 + 40) & 0x200000000000000LL) == 0 || (*(_QWORD *)(v6 + 8) & 0x8000000000000000uLL) != 0);
}
