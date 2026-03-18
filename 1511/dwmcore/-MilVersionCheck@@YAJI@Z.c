/*
 * XREFs of ?MilVersionCheck@@YAJI@Z @ 0x1800B4E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilVersionCheck(int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 != 520979157 )
  {
    v1 = -2003292405;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292405, 0x30u);
  }
  return v1;
}
