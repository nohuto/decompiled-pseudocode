/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x14002DD90
 * Callers:
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x1406233F0 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x140629438 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateReserveIrp @ 0x1401C4600 (IopAllocateReserveIrp.c)
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
