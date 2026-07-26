/*
 * XREFs of ndisOidPostOffloadEncapsulation @ 0x1C001E9E0
 * Callers:
 *     ndisOidPostTaskOffload @ 0x1C0041FB0 (ndisOidPostTaskOffload.c)
 * Callees:
 *     ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001EA9C (-ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001EB48 (-ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

void __fastcall ndisOidPostOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_DWORD *)a1 + 10);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(197LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v3, v4);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( *(_QWORD *)a1 )
      ndisOidPostMiniportSetEncapsulation(a1);
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      v1 = *(_QWORD *)(v5 + 16);
      if ( !*((_DWORD *)a1 + 10) )
      {
        v6 = *(_QWORD *)(v1 + 4152);
        if ( v6 )
        {
          *(_OWORD *)(v6 + 756) = *(_OWORD *)(v6 + 784);
          *(_QWORD *)(v6 + 772) = *(_QWORD *)(v6 + 800);
          *(_DWORD *)(v6 + 780) = *(_DWORD *)(v6 + 808);
        }
      }
      ndisOidPostOpenSetEncapsulation(a1);
    }
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(198LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v3, v4);
}
