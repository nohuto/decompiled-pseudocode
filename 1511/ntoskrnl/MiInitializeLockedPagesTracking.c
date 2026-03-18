/*
 * XREFs of MiInitializeLockedPagesTracking @ 0x140621E34
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140549A5C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiInitializeLockedPagesTracking(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x78546D4Du);
  v3 = result;
  if ( result )
  {
    result = memset(result, 0, 0x20uLL);
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 1;
    *(_QWORD *)(a1 + 1200) = v3;
  }
  return result;
}
