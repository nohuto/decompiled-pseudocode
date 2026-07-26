/*
 * XREFs of ndisOidPreWakeUpPatternList @ 0x1C00C3C70
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueryWakeUpPatternList @ 0x1C0046B10 (ndisQueryWakeUpPatternList.c)
 *     ndisQueryWolPatternList @ 0x1C00C4428 (ndisQueryWolPatternList.c)
 */

char __fastcall ndisOidPreWakeUpPatternList(__int64 a1)
{
  char v2; // dl
  __int64 v3; // rcx
  __int64 v4; // r9
  _DWORD *v5; // r8
  __int64 v6; // r10
  unsigned __int8 v7; // al
  int v8; // eax
  int WolPatternList; // eax
  unsigned __int8 v10; // al

  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD **)(a1 + 32);
  if ( v4 && ((v6 = *(_QWORD *)(v4 + 24), v7 = *(_BYTE *)(v6 + 56), v7 > 6u) || v7 == 6 && *(_BYTE *)(v6 + 57) >= 0x14u)
    || *(_QWORD *)(a1 + 8) && (v5[22] & 0x4000) == 0
    || (v8 = v5[1], (v8 & 0xFFFFFFFD) != 0) )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return 1;
  }
  if ( v4 && !v8 )
    goto LABEL_11;
  if ( !*(_QWORD *)(a1 + 16) && v3 )
  {
    v10 = *(_BYTE *)(v3 + 32);
    if ( v10 > 6u || v10 == 6 && *(_BYTE *)(v3 + 33) >= 0x14u )
    {
      v5[8] = -50265844;
      WolPatternList = ndisQueryWolPatternList(*(_QWORD *)(v3 + 968), v5, v5, v4);
      goto LABEL_18;
    }
LABEL_11:
    WolPatternList = ndisQueryWakeUpPatternList(*(_QWORD *)(a1 + 24), v3, (__int64)v5);
LABEL_18:
    *(_DWORD *)(a1 + 40) = WolPatternList;
    return 1;
  }
  return v2;
}
