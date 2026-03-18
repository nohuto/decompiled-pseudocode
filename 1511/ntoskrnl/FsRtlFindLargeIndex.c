/*
 * XREFs of FsRtlFindLargeIndex @ 0x1400D78E8
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x1400D6D10 (FsRtlTruncateBaseMcb.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x1400D6DF4 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1400D7290 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x1401AC8CC (FsRtlSplitBaseMcb.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlFindLargeIndex(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // edi
  int v4; // r11d
  int v5; // r9d
  int v6; // eax

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v5 = v3 - 1;
  if ( v3 - 1 < 0 )
  {
LABEL_7:
    *a3 = v3;
    return 0;
  }
  while ( 1 )
  {
    v6 = (v5 + v4) / 2;
    if ( v6 && a2 < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v6 - 8) )
    {
      v5 = v6 - 1;
      goto LABEL_6;
    }
    if ( a2 <= *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v6) - 1 )
      break;
    v4 = v6 + 1;
LABEL_6:
    if ( v4 > v5 )
      goto LABEL_7;
  }
  *a3 = v6;
  return 1;
}
