/*
 * XREFs of ndisOidPrePMAddWOLPattern @ 0x1C009A060
 * Callers:
 *     <none>
 * Callees:
 *     ndisSourcePreAddWoLPattern @ 0x1C0099C14 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0099CFC (ndisMiniportPreAddWoLPattern.c)
 *     ndisIsValidWoLPattern @ 0x1C009A1AC (ndisIsValidWoLPattern.c)
 *     ndisGetWoLPatternSize @ 0x1C009A2B0 (ndisGetWoLPatternSize.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00CB6A8 (ndisSetAddWakeUpPattern.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00CC60C (ndisXlateAddWolPatternToPacketPatternOid.c)
 */

char __fastcall ndisOidPrePMAddWOLPattern(__int64 a1)
{
  __int64 v1; // r14
  char v2; // di
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int WoLPatternSize; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  int v20; // eax
  int v21; // eax
  int v22; // eax
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 1;
  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 32);
  v23 = 1;
  if ( v1 )
  {
    v13 = *(_QWORD *)(v1 + 24);
    v14 = *(_BYTE *)(v13 + 56);
    if ( v14 <= 6u && (v14 != 6 || *(_BYTE *)(v13 + 57) < 0x14u) )
      goto LABEL_22;
  }
  if ( *(_DWORD *)(v5 + 4) != 1 )
    goto LABEL_22;
  if ( (*(_DWORD *)(v5 + 88) & 0xC0000) != 0 )
    return 0;
  v6 = *(_QWORD *)(v5 + 40);
  *(_DWORD *)(v5 + 56) = 0;
  WoLPatternSize = ndisGetWoLPatternSize(v6);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v5 + 48) < WoLPatternSize )
  {
    *(_DWORD *)(v5 + 56) = WoLPatternSize;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( !(unsigned __int8)ndisIsValidWoLPattern(v8, *(unsigned int *)(v5 + 48)) )
    {
      *(_DWORD *)(a1 + 40) = -1073676267;
      return v2;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v15 = *(_QWORD *)(v1 + 24);
      v16 = *(_BYTE *)(v15 + 56);
      if ( v16 <= 6u && (v16 != 6 || *(_BYTE *)(v15 + 57) < 0x14u) )
        goto LABEL_22;
      v17 = ndisSourcePreAddWoLPattern(v1, 0LL, (_QWORD *)v5, &v23);
      v2 = v23;
      *(_DWORD *)(a1 + 40) = v17;
      if ( v2 )
        return v2;
    }
    v9 = *(_QWORD *)(a1 + 8);
    if ( !v9 || (*(_DWORD *)(v5 + 88) & 0x4000) != 0 )
    {
LABEL_11:
      if ( !*(_QWORD *)a1 )
        return 0;
      v11 = *(_BYTE *)(v3 + 32);
      if ( v11 > 6u || v11 == 6 && *(_BYTE *)(v3 + 33) >= 0x14u )
      {
        v12 = ndisMiniportPreAddWoLPattern(v3, v5, &v23);
        v2 = v23;
        *(_DWORD *)(a1 + 40) = v12;
        if ( v2 )
          return v2;
        return 0;
      }
      v21 = ndisXlateAddWolPatternToPacketPatternOid(v5, &v23);
      v2 = v23;
      *(_DWORD *)(a1 + 40) = v21;
      if ( v2 != 1 )
      {
        v22 = ndisSetAddWakeUpPattern(v3, v5, &v23);
        v2 = v23;
        *(_DWORD *)(a1 + 40) = v22;
        if ( v2 != 1 )
          return 0;
      }
      return v2;
    }
    v18 = *(_QWORD *)(v9 + 16);
    v19 = *(_BYTE *)(v18 + 100);
    if ( v19 > 6u || v19 == 6 && *(_BYTE *)(v18 + 101) >= 0x14u )
    {
      v20 = ndisSourcePreAddWoLPattern(0LL, v9, (_QWORD *)v5, &v23);
      v2 = v23;
      *(_DWORD *)(a1 + 40) = v20;
      if ( v2 )
        return v2;
      goto LABEL_11;
    }
LABEL_22:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
