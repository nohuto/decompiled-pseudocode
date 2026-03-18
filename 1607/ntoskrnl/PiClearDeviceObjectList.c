/*
 * XREFs of PiClearDeviceObjectList @ 0x1404C5A64
 * Callers:
 *     PipFreeDeviceObjectList @ 0x1404C59E0 (PipFreeDeviceObjectList.c)
 *     PiAllocateDeviceObjectList @ 0x1404C5A00 (PiAllocateDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObject(*(PVOID *)&a1[6 * i + 4]);
  result = memset(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
