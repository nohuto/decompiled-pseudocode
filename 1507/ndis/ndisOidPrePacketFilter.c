/*
 * XREFs of ndisOidPrePacketFilter @ 0x1C00A0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetMiniportPacketFilter @ 0x1C00184A8 (ndisSetMiniportPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C0018A64 (ndisSetOpenPacketFilter.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 *     ndisSetRestorePacketFilter @ 0x1C00439A0 (ndisSetRestorePacketFilter.c)
 *     ndisQueryMiniportPacketFilter @ 0x1C00C84E8 (ndisQueryMiniportPacketFilter.c)
 *     ndisQueryOpenPacketFilter @ 0x1C00C85C4 (ndisQueryOpenPacketFilter.c)
 */

unsigned __int8 __fastcall ndisOidPrePacketFilter(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // si
  __int64 v5; // r14
  int v6; // eax
  int OpenPacketFilter; // eax
  __int64 v9; // rcx
  __int64 v10; // r8

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(0x61u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v5, v3);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_10;
    goto LABEL_16;
  }
  if ( !v6 )
  {
    if ( v5 )
    {
      OpenPacketFilter = ndisQueryOpenPacketFilter(v5, v3);
LABEL_19:
      *(_DWORD *)(a1 + 40) = OpenPacketFilter;
      v4 = 1;
      goto LABEL_10;
    }
    if ( !v1 )
      goto LABEL_5;
LABEL_16:
    OpenPacketFilter = ndisQueryMiniportPacketFilter(v1, v3);
    if ( OpenPacketFilter == 259 )
      goto LABEL_10;
    goto LABEL_19;
  }
LABEL_5:
  if ( v6 == 1 )
  {
    if ( !v5 || (v4 = ndisSetOpenPacketFilter(v5, v3, (unsigned int *)(a1 + 40)), v4 != 1) )
    {
      if ( *(_UNKNOWN **)(v3 + 104) == &ndisIntReqRestore )
      {
        v9 = *(_QWORD *)(a1 + 16);
        v10 = v1;
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 32);
        ndisSetRestorePacketFilter(v10, v3);
      }
      if ( v1 )
        v4 = ndisSetMiniportPacketFilter(v1, v3, (_DWORD *)(a1 + 40));
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqqL(0x62u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v5, v3, v4);
  return v4;
}
