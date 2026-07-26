/*
 * XREFs of ndisOidPrePMRemoveWOLPattern @ 0x1C00C3790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisFindPatternEntry @ 0x1C0093608 (ndisFindPatternEntry.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00C3124 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C00C4054 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00C5CB0 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 */

char __fastcall ndisOidPrePMRemoveWOLPattern(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int8 v10; // r8
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  int v14; // r10d
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  int *v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  int v21; // eax
  int v22; // eax
  char v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)a1;
  v24 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x57u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v8, v4);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = 6;
  LOBYTE(a4) = 20;
  if ( v9
    && (v11 = *(_QWORD *)(v9 + 24), v12 = *(_BYTE *)(v11 + 56), v12 <= 6u)
    && (v12 != 6 || *(_BYTE *)(v11 + 57) < 0x14u)
    || (v13 = *(_QWORD *)(a1 + 8), v14 = 0x4000, v13)
    && (*(_DWORD *)(v4 + 88) & 0x4000) == 0
    && (v15 = *(_QWORD *)(v13 + 16), v16 = *(_BYTE *)(v15 + 100), v16 <= 6u)
    && (v16 != 6 || *(_BYTE *)(v15 + 101) < 0x14u)
    || *(_DWORD *)(v4 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_8:
    v5 = 1;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v4 + 48) < 4u )
  {
    *(_DWORD *)(v4 + 56) = 4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_8;
  *(_DWORD *)(v4 + 56) = 0;
  v17 = *(int **)(v4 + 40);
  v18 = *v17;
  *(_DWORD *)(v4 + 152) = *v17;
  if ( *(_QWORD *)(a1 + 24) && !ndisFindPatternEntry((__int64 **)(v6 + 504), v18)
    || (v19 = *(_QWORD *)(a1 + 8)) != 0
    && (*(_DWORD *)(v4 + 88) & v14) == 0
    && !ndisFindPatternEntry((__int64 **)(v19 + 856), v18) )
  {
    *(_DWORD *)(a1 + 40) = -1073676261;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    v20 = *(_BYTE *)(v8 + 32);
    if ( v20 > v10 || v20 == v10 && *(_BYTE *)(v8 + 33) >= (unsigned __int8)a4 )
    {
      v22 = ndisMiniportPreRemoveWOLPattern(v8, v4);
      v5 = v24;
      *(_DWORD *)(a1 + 40) = v22;
    }
    else
    {
      v21 = ndisXlateRemoveWolPatternToPacketPatternOid(v8, v4, &v24, a4);
      v5 = v24;
      *(_DWORD *)(a1 + 40) = v21;
      if ( v5 != 1 )
      {
        *(_DWORD *)(a1 + 40) = 0;
        v5 = ndisPreRemoveMiniportWakeUpPattern(v8, v4);
      }
    }
  }
LABEL_31:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(0x58u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v5;
}
