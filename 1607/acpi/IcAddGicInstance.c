/*
 * XREFs of IcAddGicInstance @ 0x1C00A2774
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00A814C (AcpiIrqLibConfigureLibrary.c)
 *     IrqLibpParseMadt @ 0x1C00A824C (IrqLibpParseMadt.c)
 * Callees:
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall IcAddGicInstance(int a1)
{
  PVOID PoolWithTag; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7D20uLL, 0x49706341u);
  v3 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x7D20uLL);
  *(_DWORD *)(v3 + 16) = a1;
  *(_DWORD *)(v3 + 20) = 159;
  v5 = IcListHead;
  if ( *(__int64 **)(IcListHead + 8) != &IcListHead )
    __fastfail(3u);
  *(_QWORD *)v3 = IcListHead;
  *(_QWORD *)(v3 + 8) = &IcListHead;
  *(_QWORD *)(v5 + 8) = v3;
  result = 0LL;
  IcListHead = v3;
  return result;
}
