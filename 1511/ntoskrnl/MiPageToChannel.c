/*
 * XREFs of MiPageToChannel @ 0x1400C05B0
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiDescribePageRun @ 0x140131A08 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x1401D1AA4 (MiInitializeDynamicPfns.c)
 *     MiInitializeNuma @ 0x140520784 (MiInitializeNuma.c)
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 *     MiInitializeUnusablePfn @ 0x14074676C (MiInitializeUnusablePfn.c)
 *     MxCreateFreePfns @ 0x140746A50 (MxCreateFreePfns.c)
 *     MiFreeBootPageTable @ 0x140747AC8 (MiFreeBootPageTable.c)
 *     MxCreatePfn @ 0x140747FEC (MxCreatePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_1402FE6E0 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_1402FE6E0 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_1402FE6E0 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_1402FE6E0 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_1402FE6E0 + 16LL * v2 + 12);
}
