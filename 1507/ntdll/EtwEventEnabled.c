/*
 * XREFs of EtwEventEnabled @ 0x18000CD00
 * Callers:
 *     EtwEventWriteEndScenario @ 0x18000CDE0 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800817B0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwEventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v3; // rax
  BOOLEAN v4; // r9
  REGHANDLE v5; // rcx
  unsigned __int64 Keyword; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al

  if ( !EventDescriptor )
    return 0;
  v3 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    return 0;
  v4 = 1;
  v5 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (v5 & 1) != 0 || (_WORD)v3 != *(_WORD *)(v5 + 96) )
    return 0;
  Keyword = EventDescriptor->Keyword;
  if ( !*(_BYTE *)(v5 + 124)
    || (v8 = *(_BYTE *)(v5 + 125), EventDescriptor->Level > v8) && v8
    || ((*(_BYTE *)(v5 + 120) & 0x40) == 0 || Keyword)
    && ((Keyword & *(_QWORD *)(v5 + 112)) == 0 || (Keyword & *(_QWORD *)(v5 + 104)) != *(_QWORD *)(v5 + 104)) )
  {
    if ( !*(_BYTE *)(v5 + 244) )
      return 0;
    v9 = *(_BYTE *)(v5 + 245);
    if ( EventDescriptor->Level > v9 )
    {
      if ( v9 )
        return 0;
    }
    if ( ((*(_BYTE *)(v5 + 240) & 0x40) == 0 || Keyword)
      && ((Keyword & *(_QWORD *)(v5 + 232)) == 0 || (Keyword & *(_QWORD *)(v5 + 224)) != *(_QWORD *)(v5 + 224)) )
    {
      return 0;
    }
  }
  return v4;
}
