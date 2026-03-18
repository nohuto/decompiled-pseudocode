/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C0099510
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C0099080 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C009946C (BmlCompareSourceModesWithConstraint.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  bool v7; // si
  __int64 v8; // rcx
  int v9; // ecx
  int v11; // ecx
  __int64 v12; // rax

  v5 = 104LL * a2;
  v6 = *(_QWORD *)(v5 + a1 + 16);
  v7 = (*(_DWORD *)v6 & 0x100) == 0;
  if ( !a3 )
    return 0;
  v8 = a3[18];
  if ( *(_BYTE *)(v6 + 116) )
  {
    if ( (unsigned int)(v8 - 3) > 1 )
      return 0;
  }
  else if ( (_DWORD)v8 != 1 )
  {
    return 0;
  }
  if ( (((_DWORD)v8 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v8 == 2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v5, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !v7 || (v9 = a3[24], v9 >= 20) && (v9 <= 23 || v9 == 32 || v9 == 41) )
  {
    if ( (*(_DWORD *)v6 & 0x100) == 0 )
      return 1;
    v11 = *(_DWORD *)(v6 + 104);
    if ( (!v11 || a3[24] == v11)
      && ((*(_DWORD *)(v6 + 4) & 0x100) == 0
       || a3[19] == *(_DWORD *)(v6 + 84) && a3[20] == *(_DWORD *)(v6 + 88) && a3[24] == v11) )
    {
      return 1;
    }
  }
  return 0;
}
