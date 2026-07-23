/*
 * XREFs of MiVaToPfn @ 0x140081B60
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiGetPhysicalAddress @ 0x140024BB0 (MiGetPhysicalAddress.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MmInSwapProcess @ 0x140090CC4 (MmInSwapProcess.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiScrubNonPagedPool @ 0x140659F44 (MiScrubNonPagedPool.c)
 *     MiInitializeShadowPageTable @ 0x14065BA6C (MiInitializeShadowPageTable.c)
 *     MiCheckLargePageOk @ 0x1407B5CD4 (MiCheckLargePageOk.c)
 *     MxConsumeLargePageSlush @ 0x1407D0D5C (MxConsumeLargePageSlush.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiVaToPfn(unsigned __int64 a1)
{
  int v1; // r9d
  __int64 v2; // rax
  int v3; // r9d
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+30h] [rbp-28h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v1 = 4;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v2 = MI_READ_PTE_LOCK_FREE(*(&v12 + (unsigned int)(v1 - 1)));
    v11 = v2;
  }
  while ( v1 && (v2 & 0x80u) == 0LL );
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v11) >> 12) & 0xFFFFFFFFFLL;
  if ( v3 )
  {
    v6 = 1LL;
    v7 = v4 >> 12;
    do
    {
      v8 = v7;
      v7 >>= 9;
      v9 = v6 * (v8 & 0x1FF);
      v6 <<= 9;
      v5 += v9;
      --v3;
    }
    while ( v3 );
  }
  return v5;
}
