/*
 * XREFs of MiConvertInitialMemoryBlock @ 0x14054B2F8
 * Callers:
 *     MiSortPartitionMdls @ 0x1401D9E48 (MiSortPartitionMdls.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiConvertInitialMemoryBlock(__int64 a1, _DWORD *a2)
{
  size_t v4; // rdi
  _QWORD *result; // rax
  _QWORD *v6; // rbx

  v4 = 16 * ((unsigned int)(*a2 - 1) + 2LL);
  result = ExAllocatePoolWithTag(NonPagedPoolNx, v4 + 16, 0x6C4D6D4Du);
  if ( result )
  {
    *result = a1;
    v6 = result + 2;
    result[1] = 1LL;
    memmove(result + 2, a2, v4);
    return v6;
  }
  return result;
}
