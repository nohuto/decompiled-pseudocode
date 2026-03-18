/*
 * XREFs of VfZwWaitForMultipleObjects @ 0x1407584F0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
