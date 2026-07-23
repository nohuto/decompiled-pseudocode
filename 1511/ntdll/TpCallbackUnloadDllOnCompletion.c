/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x180080200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackUnloadDllOnCompletion(PTP_CALLBACK_INSTANCE Instance, PVOID DllHandle)
{
  if ( !Instance || (char *)DllHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_QWORD *)Instance + 25) )
  {
    TppRaiseInvalidParameter(Instance);
  }
  else
  {
    *((_QWORD *)Instance + 25) = DllHandle;
    *((_DWORD *)Instance + 36) |= 0x80u;
  }
}
