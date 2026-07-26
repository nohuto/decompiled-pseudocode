/*
 * XREFs of ndisOidPreIovNicSwitchParameters @ 0x1C00DA950
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C000F894 (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovNicSwitchParameters(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  _BYTE *v4; // r12
  __int64 v5; // r14
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 *SwitchBySwitchId; // rdx
  int v11; // eax
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm1
  _BYTE *OidSourceHandle; // rax

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qq(0x16u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v1, v3);
  v7 = *(_DWORD *)(v3 + 4);
  if ( v7 == 12 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x224u )
    {
      *(_DWORD *)(v3 + 68) = 548;
LABEL_15:
      *(_DWORD *)(a1 + 40) = -1073676268;
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v3 + 52) < 0x224u )
    {
      *(_DWORD *)(v3 + 68) = 548;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    if ( v7 != 1 )
      goto LABEL_34;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x224u )
    {
      *(_DWORD *)(v3 + 56) = 548;
      goto LABEL_15;
    }
  }
LABEL_8:
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_35:
    v2 = 1;
    goto LABEL_36;
  }
  if ( !v1 )
    goto LABEL_36;
  v8 = *(_DWORD *)(v3 + 4);
  if ( v8 == 12 )
  {
    *(_DWORD *)(v3 + 60) = 0;
    *(_DWORD *)(v3 + 64) = 548;
  }
  else
  {
    if ( v8 != 1 )
      goto LABEL_19;
    *(_DWORD *)(v3 + 52) = 548;
  }
  v5 = *(_QWORD *)(v3 + 40);
LABEL_19:
  v9 = *(_QWORD *)(v1 + 4672);
  if ( !v9 || !*(_QWORD *)(v1 + 3616) || (*(_BYTE *)(v9 + 8) & 3) != 3 )
    goto LABEL_34;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v5 + 12));
  if ( !SwitchBySwitchId )
  {
LABEL_23:
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_35;
  }
  v11 = *(_DWORD *)(v3 + 4);
  if ( v11 == 12 )
  {
    v12 = *(_OWORD **)(v3 + 40);
    v13 = (_OWORD *)((char *)SwitchBySwitchId + 100);
    v14 = 4LL;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v15 = v13[7];
      v13 += 8;
      *(v12 - 1) = v15;
      --v14;
    }
    while ( v14 );
    *v12 = *v13;
    v12[1] = v13[1];
    *((_DWORD *)v12 + 8) = *((_DWORD *)v13 + 8);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(v3 + 60) = 548;
    goto LABEL_35;
  }
  if ( v11 != 1 )
    goto LABEL_36;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_34:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_35;
  }
  v4 = OidSourceHandle;
  if ( (*(_DWORD *)(v5 + 4) & 0x10000) == 0 || *(_WORD *)(v5 + 16) > 0x200u )
    goto LABEL_23;
LABEL_36:
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qqDD(0x17u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v1, v4, v2, *(_DWORD *)(a1 + 40));
  return v2;
}
