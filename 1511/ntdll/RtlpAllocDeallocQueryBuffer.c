/*
 * XREFs of RtlpAllocDeallocQueryBuffer @ 0x180046DD8
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800466A4 (RtlpQueryRegistryValues.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpAllocDeallocQueryBuffer(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax
  int v7; // r8d
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  result = 0LL;
  v8 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    v7 = ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
    result = v8;
  }
  if ( a1 )
  {
    v7 = ZwAllocateVirtualMemory(-1LL, &v8, 0LL, a1, 4096, 4);
    result = v8;
    if ( v7 < 0 )
      result = 0LL;
  }
  if ( a4 )
    *a4 = v7;
  return result;
}
