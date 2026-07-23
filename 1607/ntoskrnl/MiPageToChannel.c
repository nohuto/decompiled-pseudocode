/*
 * XREFs of MiPageToChannel @ 0x14001B5C0
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiDescribePageRun @ 0x14013B830 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14013B8F0 (MiInitializeUnusablePfns.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 *     MxCreatePfn @ 0x140797D78 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1407B28EC (MiFreeBootPageTable.c)
 *     MiInitializeSystemChannelOrdering @ 0x1407D1208 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_140326A10 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_140326A10 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_140326A10 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_140326A10 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_140326A10 + 16LL * v2 + 12);
}
