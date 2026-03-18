/*
 * XREFs of MiClearPfnImageVerified @ 0x1400B5370
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(__int64 a1, unsigned __int8 a2)
{
  char result; // al
  unsigned __int8 v5; // di
  unsigned __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF

  result = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( result == 3 )
  {
    if ( ((a2 >> 2) & 1) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(a1);
    if ( (a2 & 8) != 0
      && (unsigned int)MiGetPagePrivilege(a1, 1, v6)
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
