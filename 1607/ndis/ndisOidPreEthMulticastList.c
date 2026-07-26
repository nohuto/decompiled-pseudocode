/*
 * XREFs of ndisOidPreEthMulticastList @ 0x1C00AE5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003C3D8 (WPP_SF_qqDD.c)
 *     WPP_SF_qqqq @ 0x1C0044798 (WPP_SF_qqqq.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00AE4F0 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00AE674 (ndisSetOpenEthMulticastList.c)
 *     ndisQueryMiniportEthMulticastList @ 0x1C00C6568 (ndisQueryMiniportEthMulticastList.c)
 *     ndisQueryOpenEthMulticastList @ 0x1C00C6638 (ndisQueryOpenEthMulticastList.c)
 *     ndisSetRestoreMulticastList @ 0x1C00C6C08 (ndisSetRestoreMulticastList.c)
 */

unsigned __int8 __fastcall ndisOidPreEthMulticastList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  unsigned __int8 v4; // si
  __int64 v5; // rbp
  int v6; // eax
  int OpenEthMulticastList; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqq(0x7Au, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v5, v3, v1, a1);
  v6 = *(_DWORD *)(v1 + 4);
  if ( v6 == 2 )
  {
    if ( *(_QWORD *)a1 )
      goto LABEL_18;
    if ( *(_QWORD *)(a1 + 16) )
      goto LABEL_10;
  }
  if ( !v6 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      OpenEthMulticastList = ndisQueryOpenEthMulticastList(v3);
      goto LABEL_20;
    }
    if ( !*(_QWORD *)a1 )
      goto LABEL_5;
LABEL_18:
    OpenEthMulticastList = ndisQueryMiniportEthMulticastList(v5, v1);
LABEL_20:
    *(_DWORD *)(a1 + 40) = OpenEthMulticastList;
    v4 = 1;
    goto LABEL_10;
  }
LABEL_5:
  if ( v6 == 1 )
  {
    if ( !v3 || (v4 = ndisSetOpenEthMulticastList(v3, v1, a1 + 40), v4 != 1) )
    {
      if ( *(_UNKNOWN **)(v1 + 104) == &ndisIntReqRestore )
      {
        v9 = *(_QWORD *)(a1 + 16);
        v10 = v5;
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 32);
        ndisSetRestoreMulticastList(v10, v1);
      }
      if ( v5 )
        v4 = ndisSetMiniportEthMulticastList(v5, v1, (int *)(a1 + 40));
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    LODWORD(v12) = *(_DWORD *)(a1 + 40);
    LODWORD(v11) = v4;
    WPP_SF_qqDD(0x7Bu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v5, v3, v11, v12);
  }
  return v4;
}
