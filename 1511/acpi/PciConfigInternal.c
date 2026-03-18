/*
 * XREFs of PciConfigInternal @ 0x1C0008950
 * Callers:
 *     IsPciDeviceWorker @ 0x1C00097D0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C000AA20 (IsPciBusAsyncWorker.c)
 * Callees:
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall PciConfigInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x46706341u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  *(_DWORD *)v9 = 0;
  v9[1] = 0LL;
  *((_DWORD *)v9 + 4) = 0;
  *((_DWORD *)v9 + 8) = 0;
  v9[3] = a7;
  v9[5] = a5;
  v9[6] = a6;
  *((_DWORD *)v9 + 5) = 15;
  v9[7] = a2;
  AMLIReferenceHandleEx(a2);
  *((_DWORD *)v9 + 20) = -1;
  *((_DWORD *)v9 + 18) = 1;
  return PciConfigSpaceHandlerWorker(v10, 0LL, 0LL, v9);
}
