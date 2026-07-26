/*
 * XREFs of ndisOidPreLinkState @ 0x1C0097760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

char __fastcall ndisOidPreLinkState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0xA6u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v4);
    v5 = byte_1C0083712;
  }
  if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v4 + 48) < 0x28u )
    {
      *(_DWORD *)(v4 + 56) = 40;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      LODWORD(v10) = 2621824;
      if ( *(_QWORD *)(a1 + 16) )
      {
        DWORD1(v10) = *(_DWORD *)(v3 + 380);
        v11 = *(_OWORD *)(v3 + 392);
        DWORD2(v10) = *(_DWORD *)(v3 + 384);
        LODWORD(v12) = *(_DWORD *)(v3 + 408);
        v6 = *(_DWORD *)(v3 + 412);
      }
      else
      {
        DWORD1(v10) = *(_DWORD *)(v1 + 480);
        v11 = *(_OWORD *)(v1 + 792);
        DWORD2(v10) = *(_DWORD *)(v1 + 488);
        LODWORD(v12) = *(_DWORD *)(v1 + 808);
        v6 = *(_DWORD *)(v1 + 468);
      }
      HIDWORD(v12) = v6;
      v7 = *(_QWORD *)(v4 + 40);
      *(_OWORD *)v7 = v10;
      *(_OWORD *)(v7 + 16) = v11;
      *(_QWORD *)(v7 + 32) = v12;
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(v4 + 52) = 40LL;
    }
  }
  if ( (unsigned __int8)v5 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xA7u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, 1, v9);
  }
  return 1;
}
