/*
 * XREFs of RaidBusEnumeratorReAllocateDataBufferResource @ 0x1C00259DC
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C000C75C (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     RaidBusEnumeratorReleaseDataBufferResource @ 0x1C0025A74 (RaidBusEnumeratorReleaseDataBufferResource.c)
 */

__int64 __fastcall RaidBusEnumeratorReAllocateDataBufferResource(__int64 *a1, __int64 a2, ULONG a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  PVOID Pool; // rax
  PMDL Mdl; // rax

  v3 = *a1;
  v7 = 0;
  RaidBusEnumeratorReleaseDataBufferResource(a1);
  Pool = RaidAllocatePool(NonPagedPoolNx, a3, 0x32316152u, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = Pool;
  if ( !Pool )
    return (unsigned int)-1073741801;
  *(_DWORD *)(a2 + 40) = a3;
  Mdl = IoAllocateMdl(Pool, a3, 0, 0, 0LL);
  *(_QWORD *)(a2 + 8) = Mdl;
  if ( !Mdl )
  {
    RaidBusEnumeratorReleaseDataBufferResource(a1);
    return (unsigned int)-1073741801;
  }
  return v7;
}
