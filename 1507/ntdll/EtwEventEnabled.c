/*
 * XREFs of EtwEventEnabled @ 0x18000CD00
 * Callers:
 *     EtwEventWriteEndScenario @ 0x18000CDE0 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800817B0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwEventEnabled(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  char v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al

  if ( !a2 )
    return 0;
  v3 = HIWORD(a1);
  if ( !HIWORD(a1) )
    return 0;
  v4 = 1;
  v5 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (v5 & 1) != 0 || (_WORD)v3 != *(_WORD *)(v5 + 96) )
    return 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !*(_BYTE *)(v5 + 124)
    || (v8 = *(_BYTE *)(v5 + 125), *(_BYTE *)(a2 + 4) > v8) && v8
    || ((*(_BYTE *)(v5 + 120) & 0x40) == 0 || v6)
    && ((v6 & *(_QWORD *)(v5 + 112)) == 0 || (v6 & *(_QWORD *)(v5 + 104)) != *(_QWORD *)(v5 + 104)) )
  {
    if ( !*(_BYTE *)(v5 + 244) )
      return 0;
    v9 = *(_BYTE *)(v5 + 245);
    if ( *(_BYTE *)(a2 + 4) > v9 )
    {
      if ( v9 )
        return 0;
    }
    if ( ((*(_BYTE *)(v5 + 240) & 0x40) == 0 || v6)
      && ((v6 & *(_QWORD *)(v5 + 232)) == 0 || (v6 & *(_QWORD *)(v5 + 224)) != *(_QWORD *)(v5 + 224)) )
    {
      return 0;
    }
  }
  return v4;
}
