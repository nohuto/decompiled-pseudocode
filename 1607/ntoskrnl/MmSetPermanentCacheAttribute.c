/*
 * XREFs of MmSetPermanentCacheAttribute @ 0x1406598E4
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmSetPermanentCacheAttribute(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  PVOID PoolWithTag; // rax
  void *v9; // rbx
  PVOID v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225714LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  v6 = a2 >> 12;
  if ( !(a2 >> 12) )
    return 3221225712LL;
  if ( (a4 & 1) != 0 )
    v7 = a3 + 6;
  else
    v7 = a3;
  if ( MiPlatformCacheAttributes[v7] != 1 )
    return 3221225713LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F49694Du);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 3) = v5;
  *((_DWORD *)PoolWithTag + 10) = 1;
  *((_QWORD *)PoolWithTag + 4) = v6 + v5 - 1;
  v11 = 0;
  v10 = PoolWithTag;
  KeGenericCallDpc((__int64)MiMakeIoRangePermanentDpc, (__int64)&v10);
  result = (unsigned int)v11;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    return (unsigned int)v11;
  }
  return result;
}
