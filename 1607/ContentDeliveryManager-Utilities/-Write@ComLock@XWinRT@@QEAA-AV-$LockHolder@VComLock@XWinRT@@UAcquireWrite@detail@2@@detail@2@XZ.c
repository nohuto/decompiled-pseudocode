/*
 * XREFs of ?Write@ComLock@XWinRT@@QEAA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x180006E8C
 * Callers:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?MoveNext@SplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180050D10 (-MoveNext@SplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent.c)
 *     ?get_HasCurrent@SplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180050E00 (-get_HasCurrent@SplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedC.c)
 *     ?get_Current@SplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@456@@Z @ 0x180050E80 (-get_Current@SplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedCont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::ComLock::Write(__int64 a1, __int64 a2)
{
  bool v2; // zf

  v2 = *(_DWORD *)a1 == 1;
  *(_QWORD *)a2 = a1;
  if ( v2 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
      *(_DWORD *)(a1 + 8) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  }
  *(_DWORD *)(a2 + 8) = 0;
  return a2;
}
