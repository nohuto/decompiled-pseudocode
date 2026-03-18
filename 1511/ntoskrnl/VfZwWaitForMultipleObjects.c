/*
 * XREFs of VfZwWaitForMultipleObjects @ 0x1406D4928
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwWaitForMultipleObjects(
        ULONG Count,
        HANDLE *a2,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)Time, (int)retaddr);
  }
  return pXdvZwWaitForMultipleObjects(Count, a2, WaitType, Alertable, Time);
}
