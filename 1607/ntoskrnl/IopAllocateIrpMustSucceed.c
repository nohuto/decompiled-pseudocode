/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x14002E210
 * Callers:
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x140629384 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateReserveIrp @ 0x1401C471C (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  for ( result = pIoAllocateIrp(a1, a2, 0LL, retaddr); !result; result = pIoAllocateIrp(a1, v2, 0LL, retaddr) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
