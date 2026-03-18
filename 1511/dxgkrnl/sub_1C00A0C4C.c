/*
 * XREFs of sub_1C00A0C4C @ 0x1C00A0C4C
 * Callers:
 *     sub_1C00A099C @ 0x1C00A099C (sub_1C00A099C.c)
 *     sub_1C00A0A40 @ 0x1C00A0A40 (sub_1C00A0A40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C00A0C4C(__int64 a1, unsigned __int16 a2, unsigned int *a3)
{
  __int64 v4; // rdi
  bool v5; // si
  __int64 v6; // rcx
  int v7; // ecx
  int v9; // ecx
  __int64 v10; // rax

  v4 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v5 = (*(_DWORD *)v4 & 0x100) == 0;
  if ( !a3 )
    return 0;
  v6 = a3[18];
  if ( *(_BYTE *)(v4 + 116) )
  {
    if ( (unsigned int)(v6 - 3) <= 1 )
      goto LABEL_4;
    return 0;
  }
  if ( (_DWORD)v6 != 1 )
    return 0;
LABEL_4:
  if ( (((_DWORD)v6 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v6 == 2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v5 )
  {
    v9 = a3[24];
    if ( v9 < 20 || v9 > 23 && v9 != 32 && v9 != 41 )
      return 0;
  }
  if ( (*(_DWORD *)v4 & 0x100) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 104);
    if ( v7 )
    {
      if ( a3[24] != v7 )
        return 0;
    }
    if ( (*(_DWORD *)(v4 + 4) & 0x100) != 0
      && (a3[19] != *(_DWORD *)(v4 + 84) || a3[20] != *(_DWORD *)(v4 + 88) || a3[24] != v7) )
    {
      return 0;
    }
  }
  return 1;
}
