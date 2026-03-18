/*
 * XREFs of GetPciAddress @ 0x1C002A0B8
 * Callers:
 *     GetPciAddressWorker @ 0x1C001D450 (GetPciAddressWorker.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     GetPciAddressWorker @ 0x1C001D450 (GetPciAddressWorker.c)
 *     memset @ 0x1C002C1C0 (memset.c)
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
  return GetPciAddressWorker(v11, 0, 0LL, (unsigned __int16 *)v10);
}
