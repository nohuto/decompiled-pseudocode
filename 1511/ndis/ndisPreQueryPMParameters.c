/*
 * XREFs of ndisPreQueryPMParameters @ 0x1C00C3F20
 * Callers:
 *     ndisOidPrePMParameters @ 0x1C00AA2E0 (ndisOidPrePMParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     GetMiniportFromReqTracker @ 0x1C0097870 (GetMiniportFromReqTracker.c)
 */

char __fastcall ndisPreQueryPMParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 MiniportFromReqTracker; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0

  v1 = *(_QWORD *)(a1 + 32);
  MiniportFromReqTracker = GetMiniportFromReqTracker((__int64 *)a1);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = MiniportFromReqTracker;
  v7 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0x32u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, MiniportFromReqTracker, v1);
    v7 = byte_1C0083712;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(v1 + 4) == 2 )
    {
      v8 = v6 + 1120;
LABEL_15:
      v9 = *(_QWORD *)(v1 + 40);
      v10 = *(_OWORD *)v8;
      if ( *(_DWORD *)(v1 + 48) >= 0x14u )
      {
        *(_OWORD *)v9 = v10;
        *(_DWORD *)(v9 + 16) = *(_DWORD *)(v8 + 16);
        *(_DWORD *)v9 = 1311360;
        *(_DWORD *)(v1 + 52) = 20;
      }
      else
      {
        *(_OWORD *)v9 = v10;
        *(_DWORD *)v9 = 1048960;
        *(_DWORD *)(v1 + 52) = 16;
      }
      *(_DWORD *)(v1 + 56) = 0;
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v8 = v5 + 308;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(a1 + 8) && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
    {
      v8 = *(_QWORD *)(a1 + 8) + 872LL;
      goto LABEL_15;
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_19:
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qdD(0x33u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v6, *(_DWORD *)(a1 + 40), 1);
  return 1;
}
