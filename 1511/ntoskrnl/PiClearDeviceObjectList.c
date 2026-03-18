/*
 * XREFs of PiClearDeviceObjectList @ 0x1404A05C4
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x1404A050C (PiAllocateDeviceObjectList.c)
 *     PipFreeDeviceObjectList @ 0x1404A05A4 (PipFreeDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
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
