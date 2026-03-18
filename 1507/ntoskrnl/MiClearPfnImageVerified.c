/*
 * XREFs of MiClearPfnImageVerified @ 0x1400E6680
 * Callers:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1401FF2DC (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(__int64 a1, unsigned __int8 a2)
{
  char result; // al
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  int v7; // eax
  unsigned __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

  result = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( result == 3 )
  {
    if ( ((a2 >> 2) & 1) != 0 )
    {
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    if ( (a2 & 8) != 0 )
    {
      if ( (unsigned int)MiGetPagePrivilege(a1, 1, v8) )
      {
        v7 = KeSetPagePrivilege((a1 + 0x58000000000LL) / 48, v8, (a2 & 0x10) != 0 ? 32 : 16);
        if ( v7 < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (a1 + 0x58000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = -1;
    *(_QWORD *)(a1 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( CurrentIrql != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
