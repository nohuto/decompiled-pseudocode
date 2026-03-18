/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800A8980
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x1800A845C (-GetComposedEventId@CConnection@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(struct _RTL_CRITICAL_SECTION *a1, unsigned int *a2)
{
  int ComposedEventId; // eax
  unsigned int v3; // ebx

  if ( a1 )
  {
    ComposedEventId = CConnection::GetComposedEventId(a1, a2);
    v3 = ComposedEventId;
    if ( ComposedEventId < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801ACEA0, 1u, ComposedEventId, 0x91u);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801ACEA0, 1u, -2147024809, 0x8Du);
  }
  return v3;
}
