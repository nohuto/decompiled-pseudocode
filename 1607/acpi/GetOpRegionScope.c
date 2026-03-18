/*
 * XREFs of GetOpRegionScope @ 0x1C000C06C
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     GetOpRegionScopeWorker @ 0x1C000C430 (GetOpRegionScopeWorker.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x46706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x38uLL);
  *(_QWORD *)v8 = a1;
  AMLIReferenceHandleEx(a1);
  v10 = AMLIGetParent(v9);
  v8[6] = -1;
  *((_QWORD *)v8 + 1) = v10;
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 4) = &PciConfigSpaceHandlerWorker;
  *((_QWORD *)v8 + 6) = a4;
  return GetOpRegionScopeWorker(a1, 0LL, 0LL, v8);
}
