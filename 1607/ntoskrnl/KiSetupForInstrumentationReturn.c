/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x1400AC51C
 * Callers:
 *     KiInitializeUserApc @ 0x1400A6214 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KiRaiseException @ 0x140110604 (KiRaiseException.c)
 *     KeRaiseUserException @ 0x1401D3654 (KeRaiseUserException.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KiSetupForInstrumentationReturn(__int64 a1)
{
  struct _KTHREAD *result; // rax
  void *InstrumentationCallback; // r8

  result = KeGetCurrentThread();
  InstrumentationCallback = result->ApcState.Process->InstrumentationCallback;
  if ( InstrumentationCallback )
  {
    if ( *(_WORD *)(a1 + 368) == 51 )
    {
      result = *(struct _KTHREAD **)(a1 + 360);
      *(_QWORD *)(a1 + 88) = result;
      *(_QWORD *)(a1 + 360) = InstrumentationCallback;
    }
  }
  return result;
}
