/*
 * XREFs of VfZwSetTimer @ 0x1406D46B0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetTimer(
        HANDLE TimerHandle,
        LARGE_INTEGER *a2,
        void (__cdecl *a3)(PVOID, ULONG, LONG),
        void *a4,
        BOOLEAN a5,
        LONG a6,
        PBOOLEAN PreviousState)
{
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)PreviousState, (int)retaddr);
  }
  return pXdvZwSetTimer(TimerHandle, a2, a3, a4, a5, a6, PreviousState);
}
