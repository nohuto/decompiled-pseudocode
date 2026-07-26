/*
 * XREFs of ndisOidPreRSSParameters @ 0x1C00B0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetMiniportRSSParameters @ 0x1C001EF98 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C001F0A8 (ndisSetOpenRSSParameters.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0043208 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0043360 (ndisQueryOpenRSSParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreRSSParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  unsigned __int8 v4; // si
  _QWORD *v5; // r14
  __int64 v7; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD **)(a1 + 24);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(0x9Au, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v5, v3);
  if ( *(_DWORD *)(v3 + 4) == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_8;
    *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSParameters(v1, v3);
    v4 = 1;
  }
  if ( !*(_DWORD *)(v3 + 4) )
  {
    if ( v5 )
    {
      *(_DWORD *)(a1 + 40) = ndisQueryOpenRSSParameters((__int64)v5, v3);
      v4 = 1;
      goto LABEL_8;
    }
    if ( v1 )
    {
      *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSParameters(v1, v3);
      v4 = 1;
    }
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( !v5 || (v4 = ndisSetOpenRSSParameters(v5, v3, (int *)(a1 + 40)), v4 != 1) )
    {
      if ( v1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 4LL) & 4) == 0 )
        {
          if ( (*(_DWORD *)(v1 + 80) & 0x800) != 0 )
            *(_QWORD *)(v3 + 144) = __rdtsc();
          else
            *(_QWORD *)(v3 + 144) = 0LL;
        }
        v4 = ndisSetMiniportRSSParameters(v1, v3, (int *)(a1 + 40));
      }
    }
  }
LABEL_8:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    LODWORD(v7) = v4;
    WPP_SF_qqDD(0x9Bu, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v5, v7, *(_DWORD *)(a1 + 40));
  }
  return v4;
}
