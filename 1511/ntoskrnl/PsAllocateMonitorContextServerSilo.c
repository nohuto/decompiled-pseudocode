/*
 * XREFs of PsAllocateMonitorContextServerSilo @ 0x1405265E4
 * Callers:
 *     EtwpServerSiloCreateNotify @ 0x140526A2C (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140526CAC (SeInitServerSilo.c)
 *     SepRmServerSiloCreateNotify @ 0x140526CE4 (SepRmServerSiloCreateNotify.c)
 *     ExpWnfCreateServerSiloCallback @ 0x140526D50 (ExpWnfCreateServerSiloCallback.c)
 *     CmpCreateServerSiloCallback @ 0x140526DB4 (CmpCreateServerSiloCallback.c)
 *     ObInitServerSilo @ 0x140526E34 (ObInitServerSilo.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspReferenceMonitorServerSilo @ 0x140526A0C (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsAllocateMonitorContextServerSilo(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  int v8; // edi

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)(*(_BYTE *)(a1 + 109) != 0 ? PagedPoolCacheAligned : NonPagedPoolNxCacheAligned),
                  a2 + 128,
                  0x436C6953u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    *(_DWORD *)v7 = 1131178323;
    v7[2] = a1;
    *((_DWORD *)v7 + 6) = 1;
    v7[1] = a2;
    v8 = PspReferenceMonitorServerSilo(a1);
    if ( v8 >= 0 )
    {
      *a3 = v7 + 16;
      return 0LL;
    }
    ExFreePoolWithTag(v7, 0x436C6953u);
  }
  else
  {
    v8 = -1073741670;
  }
  *a3 = 0LL;
  return (unsigned int)v8;
}
