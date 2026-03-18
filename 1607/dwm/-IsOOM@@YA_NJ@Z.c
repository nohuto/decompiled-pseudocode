/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x140001B30
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140005480 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  int v1; // r8d
  _DWORD *i; // rdx

  v1 = 0;
  for ( i = &unk_140007300; *i != a1; ++i )
  {
    if ( (unsigned int)++v1 >= 0xA )
      return 0;
  }
  return 1;
}
