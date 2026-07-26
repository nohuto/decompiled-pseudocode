/*
 * XREFs of ndisOidPrePMWOLPatternList @ 0x1C00C3950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0046B10 (ndisQueryWakeUpPatternList.c)
 *     ndisQueryWolPatternList @ 0x1C00C4428 (ndisQueryWolPatternList.c)
 */

char __fastcall ndisOidPrePMWOLPatternList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  char v7; // bl
  _DWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int v15; // ecx
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  int WakeUpPatternList; // eax

  v4 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  v8 = *(_DWORD **)(a1 + 32);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqq(0x59u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v4, v6, v8);
  v9 = *(_QWORD *)(a1 + 24);
  LOBYTE(a4) = 6;
  if ( v9
    && (v10 = *(_QWORD *)(v9 + 24), v11 = *(_BYTE *)(v10 + 56), v11 <= 6u)
    && (v11 != 6 || *(_BYTE *)(v10 + 57) < 0x14u)
    || (v12 = *(_QWORD *)(a1 + 8)) != 0
    && (v8[22] & 0x4000) == 0
    && (v13 = *(_QWORD *)(v12 + 16), v14 = *(_BYTE *)(v13 + 100), v14 <= 6u)
    && (v14 != 6 || *(_BYTE *)(v13 + 101) < 0x14u)
    || (v15 = v8[1], (v15 & 0xFFFFFFFD) != 0) )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_30:
    v7 = 1;
    goto LABEL_31;
  }
  if ( v9 && !v15 )
  {
    v16 = *(_QWORD *)(v6 + 504);
    goto LABEL_28;
  }
  if ( v12 && (v8[22] & 0x4000) == 0 && !v15 )
  {
    v16 = *(_QWORD *)(v12 + 856);
    goto LABEL_28;
  }
  if ( !*(_QWORD *)(a1 + 16) && *(_QWORD *)a1 )
  {
    v17 = *(_BYTE *)(v4 + 32);
    if ( v17 <= 6u && (v17 != 6 || *(_BYTE *)(v4 + 33) < 0x14u) )
    {
      v8[8] = -50265851;
      WakeUpPatternList = ndisQueryWakeUpPatternList(0LL, v4, (__int64)v8);
LABEL_29:
      *(_DWORD *)(a1 + 40) = WakeUpPatternList;
      goto LABEL_30;
    }
    v16 = *(_QWORD *)(v4 + 968);
LABEL_28:
    WakeUpPatternList = ndisQueryWolPatternList(v16, v8, v12, a4);
    goto LABEL_29;
  }
LABEL_31:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqqL(0x5Au, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, v4, v6, v8, *(_DWORD *)(a1 + 40));
  return v7;
}
