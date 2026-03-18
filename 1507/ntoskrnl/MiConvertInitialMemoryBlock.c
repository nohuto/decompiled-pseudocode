/*
 * XREFs of MiConvertInitialMemoryBlock @ 0x14059AF34
 * Callers:
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
