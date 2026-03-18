/*
 * XREFs of PspAllocateMonitorContextArrayServerSilo @ 0x1405C0030
 * Callers:
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     PspInitializeSiloStructures @ 0x1407E4ED8 (PspInitializeSiloStructures.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateMonitorContextArrayServerSilo(__int64 a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x416C6953u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x100uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 64) = v3;
  *(_DWORD *)(a1 + 72) = 32;
  return result;
}
