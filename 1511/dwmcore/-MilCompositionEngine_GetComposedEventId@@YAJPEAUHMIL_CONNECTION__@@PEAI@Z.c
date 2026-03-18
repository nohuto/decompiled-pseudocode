/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800B46E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x1800A3F70 (-GetComposedEventId@CConnection@@QEAAJPEAI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, &dword_1801740A0, 1u, ComposedEventId, 0x267u);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801740A0, 1u, -2147024809, 0x263u);
  }
  return v3;
}
