/*
 * XREFs of ndisOidPreOffloadHwCaps @ 0x1C00B0EA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C001F4CC (ndisCopyNdisOffload.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadHwCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // r14
  unsigned __int8 v5; // bl
  int v7; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(0xD8u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v3);
    v4 = byte_1C0085312;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_6;
  v5 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_8;
  if ( *(_QWORD *)(v1 + 4152) )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x70u )
    {
      *(_DWORD *)(v3 + 56) = 112;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      ndisCopyNdisOffload(*(_QWORD *)(v3 + 40), *(_QWORD *)(v1 + 4152) + 548LL, *(_DWORD *)(v3 + 48), (int *)(v3 + 52));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  else
  {
LABEL_6:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  v5 = 1;
LABEL_8:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v7 = v5;
    WPP_SF_qdD(0xD9u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, *(_DWORD *)(a1 + 40), v7);
  }
  return v5;
}
