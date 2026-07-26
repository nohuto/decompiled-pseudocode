/*
 * XREFs of ndisOidPreRemovePMProtocolOffload @ 0x1C0093490
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisFindPatternEntry @ 0x1C0093608 (ndisFindPatternEntry.c)
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
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  __int64 OidSourceHandle; // rax
  int v18; // r9d
  __int64 *v19; // rcx
  __int64 v20; // r10
  __int64 *v21; // rdx
  bool v22; // zf
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  char v26; // al
  __int64 v27; // rdx
  unsigned __int8 v28; // al

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  v6 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0x68u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v5, v1);
    v6 = byte_1C0083712;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7
    && (v15 = *(_QWORD *)(v7 + 24), v16 = *(_BYTE *)(v15 + 56), v16 <= 6u)
    && (v16 != 6 || *(_BYTE *)(v15 + 57) < 0x14u)
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
    goto LABEL_38;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_38;
  v11 = *(unsigned int **)(v1 + 40);
  *(_DWORD *)(v1 + 56) = 0;
  v12 = *v11;
  if ( *(_QWORD *)(a1 + 24) && !ndisFindPatternEntry(v3 + 512, v12) )
    goto LABEL_22;
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 )
  {
    if ( (v9 & *(_DWORD *)(v1 + 88)) == 0 && !ndisFindPatternEntry(v13 + 864, v12) )
      goto LABEL_22;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_14;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v19 = *(__int64 **)(v5 + 976);
  v20 = OidSourceHandle;
  if ( !v19 )
    goto LABEL_22;
  do
  {
    v21 = v19;
    if ( *((_DWORD *)v19 + 49) == v18 )
      break;
    v19 = (__int64 *)*v19;
    v21 = 0LL;
  }
  while ( v19 );
  if ( !v21 )
    goto LABEL_22;
  v22 = v21 + 1 == 0LL;
  v23 = v21 + 1;
  v24 = v23;
  if ( v22 )
    goto LABEL_22;
  do
  {
    v25 = v24 - 1;
    if ( v24[2] == v20 )
      break;
    v24 = (_QWORD *)*v24;
    v25 = 0LL;
  }
  while ( v24 );
  if ( !v25 )
  {
LABEL_22:
    *(_DWORD *)(a1 + 40) = -1073676261;
LABEL_38:
    v4 = v10;
    goto LABEL_14;
  }
  v26 = 0;
  if ( *v23 )
    v26 = v10;
  v4 = v26;
LABEL_14:
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qD(0x69u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v4;
}
