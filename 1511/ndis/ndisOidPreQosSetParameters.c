/*
 * XREFs of ndisOidPreQosSetParameters @ 0x1C00C0CC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ndisValidateQosParameters @ 0x1C0045088 (ndisValidateQosParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreQosSetParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  char v5; // r14
  int v6; // eax
  unsigned int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0x80u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, v1);
    v5 = byte_1C0083712;
  }
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_21;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x34u )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x34u )
    {
      *(_DWORD *)(v1 + 68) = 52;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 52;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_10;
  if ( v3 )
  {
    v6 = ndisValidateQosParameters(v3, 1, *(_DWORD **)(v1 + 40), *(_DWORD *)(v1 + 48), &v10);
    *(_DWORD *)(a1 + 40) = v6;
    if ( v6 )
    {
      if ( v6 == -1073676268 )
        *(_DWORD *)(v1 + 68) = v10;
LABEL_10:
      v4 = 1;
      goto LABEL_21;
    }
    v7 = v10;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) >= v7 )
    {
      if ( *(_DWORD *)(v1 + 52) < v7 )
      {
        *(_DWORD *)(v1 + 68) = v7;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 68) = v7;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( *(_DWORD *)(a1 + 40) )
      goto LABEL_10;
    *(_DWORD *)(v1 + 60) = 0;
    *(_DWORD *)(v1 + 64) = v7;
  }
LABEL_21:
  if ( (unsigned __int8)v5 >= 4u )
  {
    LODWORD(v9) = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x81u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, v4, v9);
  }
  return v4;
}
