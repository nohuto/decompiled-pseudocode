/*
 * XREFs of MiPageToChannel @ 0x1400FFFF0
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiDescribePageRun @ 0x14015F634 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x140212A54 (MiInitializeDynamicPfns.c)
 *     MiInitializeNuma @ 0x140597144 (MiInitializeNuma.c)
 *     MiSwitchToPfns @ 0x1407C4AD4 (MiSwitchToPfns.c)
 *     MiInitializeUnusablePfn @ 0x1407C4D2C (MiInitializeUnusablePfn.c)
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 *     MiFreeBootPageTable @ 0x1407C67D8 (MiFreeBootPageTable.c)
 *     MxCreatePfn @ 0x1407C70B4 (MxCreatePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_14034EB90 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_14034EB90 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_14034EB90 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_14034EB90 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_14034EB90 + 16LL * v2 + 12);
}
