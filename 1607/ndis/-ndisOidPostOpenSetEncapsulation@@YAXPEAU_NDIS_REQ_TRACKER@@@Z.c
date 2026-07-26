/*
 * XREFs of ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0024A4C
 * Callers:
 *     ndisOidPostOffloadEncapsulation @ 0x1C0024990 (ndisOidPostOffloadEncapsulation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 */

void __fastcall ndisOidPostOpenSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  char v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qqq(197LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, *(_QWORD *)(v3 + 16), v1, v3);
    v4 = byte_1C00895D2;
  }
  v5 = *(_QWORD *)(v3 + 792);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 64) )
    {
      if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v1 + 52) == *(_DWORD *)(v1 + 48) )
        *(_DWORD *)(v1 + 52) = *(_DWORD *)(v5 + 80);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)(v5 + 64);
      v6 = *(_QWORD *)(v5 + 72);
      *(_DWORD *)(v5 + 64) = 0;
      *(_QWORD *)(v1 + 40) = v6;
      LODWORD(v6) = *(_DWORD *)(v5 + 80);
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_DWORD *)(v1 + 48) = v6;
      *(_DWORD *)(v5 + 80) = 0;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v5 = *(_OWORD *)v7;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)(v7 + 16);
      *(_DWORD *)(v5 + 24) = *(_DWORD *)(v7 + 24);
      *(_BYTE *)(v5 + 28) = 1;
    }
  }
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qq(198LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, v1);
}
