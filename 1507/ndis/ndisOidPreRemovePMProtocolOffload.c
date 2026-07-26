/*
 * XREFs of ndisOidPreRemovePMProtocolOffload @ 0x1C0099860
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisFindPatternEntry @ 0x1C009A504 (ndisFindPatternEntry.c)
 */

char __fastcall ndisOidPreRemovePMProtocolOffload(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  char v4; // bl
  __int64 v5; // rbp
  char v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r10d
  char v10; // r8
  unsigned int *v11; // rax
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 OidSourceHandle; // rax
  int v16; // r9d
  __int64 *v17; // rcx
  __int64 v18; // r10
  __int64 *v19; // rdx
  bool v20; // zf
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  unsigned __int8 v26; // al
  __int64 v27; // rdx
  unsigned __int8 v28; // al

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  v6 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(0x68u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v5, v1);
    v6 = byte_1C0085312;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7
    && (v25 = *(_QWORD *)(v7 + 24), v26 = *(_BYTE *)(v25 + 56), v26 <= 6u)
    && (v26 != 6 || *(_BYTE *)(v25 + 57) < 0x14u)
    || (v8 = *(_QWORD *)(a1 + 8), v9 = 0x4000, v8)
    && (*(_DWORD *)(v1 + 88) & 0x4000) == 0
    && (v27 = *(_QWORD *)(v8 + 16), v28 = *(_BYTE *)(v27 + 100), v28 <= 6u)
    && (v28 != 6 || *(_BYTE *)(v27 + 101) < 0x14u) )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v4 = 1;
    goto LABEL_14;
  }
  v10 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_40;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_40;
  v11 = *(unsigned int **)(v1 + 40);
  *(_DWORD *)(v1 + 56) = 0;
  v12 = *v11;
  if ( *(_QWORD *)(a1 + 24) && !ndisFindPatternEntry(v3 + 512, v12) )
    goto LABEL_31;
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 )
  {
    if ( (v9 & *(_DWORD *)(v1 + 88)) == 0 && !ndisFindPatternEntry(v13 + 864, v12) )
      goto LABEL_31;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_14;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v17 = *(__int64 **)(v5 + 976);
  v18 = OidSourceHandle;
  if ( !v17 )
    goto LABEL_31;
  do
  {
    v19 = v17;
    if ( *((_DWORD *)v17 + 49) == v16 )
      break;
    v17 = (__int64 *)*v17;
    v19 = 0LL;
  }
  while ( v17 );
  if ( !v19 )
    goto LABEL_31;
  v20 = v19 + 1 == 0LL;
  v21 = v19 + 1;
  v22 = v21;
  if ( v20 )
    goto LABEL_31;
  do
  {
    v23 = v22 - 1;
    if ( v22[2] == v18 )
      break;
    v22 = (_QWORD *)*v22;
    v23 = 0LL;
  }
  while ( v22 );
  if ( !v23 )
  {
LABEL_31:
    *(_DWORD *)(a1 + 40) = -1073676261;
LABEL_40:
    v4 = v10;
    goto LABEL_14;
  }
  v24 = 0;
  if ( *v21 )
    v24 = v10;
  v4 = v24;
LABEL_14:
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qD(0x69u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v4;
}
