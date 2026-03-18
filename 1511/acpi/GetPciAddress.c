/*
 * XREFs of GetPciAddress @ 0x1C00070A8
 * Callers:
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 * Callees:
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall GetPciAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  *(_QWORD *)v10 = a1;
  AMLIReferenceHandleEx(a1);
  v10[12] = -1;
  *((_QWORD *)v10 + 2) = a5;
  *((_QWORD *)v10 + 7) = a2;
  *((_QWORD *)v10 + 8) = a3;
  *((_QWORD *)v10 + 1) = a4;
  return GetPciAddressWorker(v11, 0LL, 0LL, v10);
}
