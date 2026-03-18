/*
 * XREFs of ?MilComposition_PeekNextMessage@@YAJPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@_KPEAH@Z @ 0x18005FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextMessage@CChannel@@QEAAJPEAUMIL_MESSAGE@@_KPEAH@Z @ 0x18004FD14 (-PeekNextMessage@CChannel@@QEAAJPEAUMIL_MESSAGE@@_KPEAH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilComposition_PeekNextMessage(
        struct MIL_CHANNEL__ *a1,
        struct MIL_MESSAGE *a2,
        unsigned __int64 a3,
        int *a4)
{
  int Message; // eax
  unsigned int v5; // ebx

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        Message = CChannel::PeekNextMessage(a1, a2, a3, a4);
        v5 = Message;
        if ( Message < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Message, 0xEAu);
      }
      else
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xE8u);
      }
    }
    else
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xE7u);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xE6u);
  }
  return v5;
}
