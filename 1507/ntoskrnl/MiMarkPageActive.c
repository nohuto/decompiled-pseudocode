/*
 * XREFs of MiMarkPageActive @ 0x14006A8A0
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiMapNewSession @ 0x14057A744 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x1406A13F8 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x1406A7E80 (MiInitializeShadowPageTable.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiMarkPageActive(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
