/*
 * XREFs of PoSetDeviceBusyEx @ 0x1401E9530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PoSetDeviceBusyEx(PULONG IdlePointer)
{
  _InterlockedIncrement((volatile signed __int32 *)IdlePointer + 1);
}
