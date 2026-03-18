/*
 * XREFs of GetOpRegionScope @ 0x1C00087E4
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     GetOpRegionScopeWorker @ 0x1C000A0D0 (GetOpRegionScopeWorker.c)
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x46706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x38uLL);
  *(_QWORD *)v8 = a1;
  AMLIReferenceHandleEx(a1);
  v9 = AMLIGetParent();
  v8[6] = -1;
  *((_QWORD *)v8 + 1) = v9;
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 4) = &PciConfigSpaceHandlerWorker;
  *((_QWORD *)v8 + 6) = a4;
  return GetOpRegionScopeWorker(a1, 0LL, 0LL, v8);
}
