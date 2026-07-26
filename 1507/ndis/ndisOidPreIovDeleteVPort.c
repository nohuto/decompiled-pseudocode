/*
 * XREFs of ndisOidPreIovDeleteVPort @ 0x1C00DA520
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0065540 (ndisIovFindVPortByVPortId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovDeleteVPort(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r11
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  _BYTE *OidSourceHandle; // rax
  unsigned int v8; // edx
  __int64 *VPortByVPortId; // rax
  __int64 v10; // r10
  int v12; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0085321;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
  {
    WPP_SF_qq(0x30u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v3, v1);
    v4 = byte_1C0085321;
  }
  v5 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_19;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_20;
  if ( !*(_QWORD *)a1 )
  {
LABEL_8:
    v5 = 0;
    goto LABEL_20;
  }
  v6 = *(_QWORD *)(v3 + 4672);
  if ( !v6
    || !*(_QWORD *)(v3 + 3616)
    || (*(_BYTE *)(v6 + 8) & 3) != 3
    || (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1)) == 0LL
    || *OidSourceHandle != 18
    || (v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL)) == 0 )
  {
LABEL_19:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_20;
  }
  VPortByVPortId = ndisIovFindVPortByVPortId(v3, v8);
  if ( VPortByVPortId && VPortByVPortId[10] == v10 )
  {
    *(_QWORD *)(v1 + 152) = VPortByVPortId;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_20:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v12 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x31u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v3, v5, v12);
  }
  return v5;
}
