/*
 * XREFs of PiClearDeviceObjectList @ 0x140536014
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x140535F5C (PiAllocateDeviceObjectList.c)
 *     PipFreeDeviceObjectList @ 0x140535FF4 (PipFreeDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
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
