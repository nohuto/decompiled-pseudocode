/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x140001A90
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1400019F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140004D9C (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  int v1; // r8d
  _DWORD *i; // rdx

  v1 = 0;
  for ( i = &unk_140007150; *i != a1; ++i )
  {
    if ( (unsigned int)++v1 >= 0xA )
      return 0;
  }
  return 1;
}
