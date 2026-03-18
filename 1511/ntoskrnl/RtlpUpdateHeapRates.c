/*
 * XREFs of RtlpUpdateHeapRates @ 0x1401F98DC
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1400D2FA0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1400D4B74 (RtlpFindAndCommitPages.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapRates(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        ++a1[147];
    }
    else
    {
      ++a1[146];
    }
  }
  else
  {
    ++a1[144];
    ++a1[145];
  }
}
