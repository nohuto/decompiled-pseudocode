/*
 * XREFs of MiClearPfnImageVerified @ 0x14001DCB8
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiDeleteClusterSection @ 0x140021D60 (MiDeleteClusterSection.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiProbeLeafFrame @ 0x14002FDC0 (MiProbeLeafFrame.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     MiFreeLargePageMemory @ 0x140090970 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x1400922A0 (MiDeleteClusterPage.c)
 *     MiCopyPage @ 0x1400E3260 (MiCopyPage.c)
 *     MiReferencePageForModifiedWrite @ 0x140101FB8 (MiReferencePageForModifiedWrite.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiDeletePerSessionProtos @ 0x1401F4ECC (MiDeletePerSessionProtos.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1400E3730 (MiGetPagePrivilege.c)
 *     KeSetPagePrivilege @ 0x140146DA4 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

char __fastcall MiClearPfnImageVerified(__int64 a1, unsigned __int8 a2)
{
  char result; // al
  unsigned __int8 v5; // di
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  result = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( result == 3 )
  {
    if ( ((a2 >> 2) & 1) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(a1);
    if ( (a2 & 8) != 0
      && (unsigned int)MiGetPagePrivilege(a1, 1LL, v6)
      && (int)KeSetPagePrivilege((a1 + 0x58000000000LL) / 48, v6, (a2 & 0x10) != 0 ? 32 : 16) < 0 )
    {
      KeBugCheckEx(0x1Au, 0x5150BuLL, (a1 + 0x58000000000LL) / 48, 0LL, 0LL);
    }
    result = -1;
    *(_QWORD *)(a1 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v5;
      __writecr8(v5);
    }
  }
  return result;
}
