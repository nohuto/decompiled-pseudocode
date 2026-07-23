/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x1800786D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackSetEventOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Event)
{
  if ( !Instance || (char *)Event - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_DWORD *)Instance + 37) )
  {
    TppRaiseInvalidParameter(Instance, Event);
  }
  else
  {
    *((_DWORD *)Instance + 37) = (_DWORD)Event;
    *((_DWORD *)Instance + 36) |= 4u;
  }
}
