/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x180095680
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x1800958F8 (-GetComposedEventId@CConnection@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(struct HMIL_CONNECTION__ *a1, unsigned int *a2)
{
  int ComposedEventId; // eax
  unsigned int v3; // ebx

  if ( a1 )
  {
    ComposedEventId = CConnection::GetComposedEventId(a1, a2);
    v3 = ComposedEventId;
    if ( ComposedEventId < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801674E8, 1u, ComposedEventId, 0x267u);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801674E8, 1u, -2147024809, 0x263u);
  }
  return v3;
}
