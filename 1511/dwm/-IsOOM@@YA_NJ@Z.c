/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x140001A00
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140004E1C (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  int v1; // r8d
  _DWORD *i; // rdx

  v1 = 0;
  for ( i = &unk_1400071B0; *i != a1; ++i )
  {
    if ( (unsigned int)++v1 >= 0xA )
      return 0;
  }
  return 1;
}
