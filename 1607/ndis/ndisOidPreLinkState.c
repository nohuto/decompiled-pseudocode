/*
 * XREFs of ndisOidPreLinkState @ 0x1C00AF270
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

char __fastcall ndisOidPreLinkState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r15
  __int64 v4; // rdi
  char v5; // r14
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v12; // [rsp+20h] [rbp-40h]
  _OWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(0xA6u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v4);
    v5 = byte_1C00895D2;
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
      memset(v13, 0, 0x28uLL);
      v6 = *(_QWORD *)(a1 + 16) == 0LL;
      LODWORD(v13[0]) = 2621824;
      if ( v6 )
      {
        DWORD1(v13[0]) = *(_DWORD *)(v1 + 480);
        v13[1] = *(_OWORD *)(v1 + 792);
        DWORD2(v13[0]) = *(_DWORD *)(v1 + 488);
        LODWORD(v13[2]) = *(_DWORD *)(v1 + 808);
        v7 = *(_DWORD *)(v1 + 468);
      }
      else
      {
        DWORD1(v13[0]) = *(_DWORD *)(v3 + 380);
        v13[1] = *(_OWORD *)(v3 + 392);
        DWORD2(v13[0]) = *(_DWORD *)(v3 + 384);
        LODWORD(v13[2]) = *(_DWORD *)(v3 + 408);
        v7 = *(_DWORD *)(v3 + 412);
      }
      DWORD1(v13[2]) = v7;
      v8 = *(_QWORD *)(v4 + 40);
      v9 = v13[1];
      *(_OWORD *)v8 = v13[0];
      v10 = *(_QWORD *)&v13[2];
      *(_OWORD *)(v8 + 16) = v9;
      *(_QWORD *)(v8 + 32) = v10;
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(v4 + 52) = 40LL;
    }
  }
  if ( (unsigned __int8)v5 >= 4u )
  {
    v12 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xA7u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, 1, v12);
  }
  return 1;
}
