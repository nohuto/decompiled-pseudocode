/*
 * XREFs of ?MilChannel_SetReceiveBroadcastMessages@@YAJPEAUMIL_CHANNEL__@@_N@Z @ 0x180097520
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilChannel_SetReceiveBroadcastMessages(struct MIL_CHANNEL__ *a1, char a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 )
  {
    *((_BYTE *)a1 + 234) = a2;
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x172u);
  }
  return v2;
}
