/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x180003E80
 * Callers:
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x180003D54 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003DE4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_180009000;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0xA )
      return result;
  }
  return 1;
}
