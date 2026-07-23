/*
 * XREFs of RtlpHpSegHeapAllocate @ 0x180059598
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18005802C (RtlpHeapGenerateRandomValue64.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 */

PVOID __fastcall RtlpHpSegHeapAllocate(int a1, unsigned int a2)
{
  int v3; // ebx
  NTSTATUS v4; // ecx
  PVOID result; // rax
  ULONG_PTR v6; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v9; // [rsp+48h] [rbp-8h] BYREF
  PVOID v10; // [rsp+70h] [rbp+20h] BYREF
  ULONG_PTR v11; // [rsp+78h] [rbp+28h] BYREF

  v6 = 0LL;
  BaseAddress = 0LL;
  if ( a2 > 0x40 )
    a2 = 64;
  v11 = 129 * (((a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + ((56LL * a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * a2) + 15952;
  v6 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  RegionSize = v11 + v6;
  if ( v11 + v6 < v11 )
  {
    v6 = 0LL;
    RegionSize = v11;
  }
  v3 = a1 & 0x40000000;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, v3 != 0 ? 64 : 4);
  if ( v4 < 0 )
  {
    result = 0LL;
    v10 = 0LL;
    goto LABEL_11;
  }
  v10 = BaseAddress;
  v11 = RegionSize;
  if ( v6 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v6, 0x8000u);
    v11 = RegionSize - v6;
    v10 = (char *)BaseAddress + v6;
  }
  v9 = 1504LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v10, 0LL, &v9, 0x1000u, v3 != 0 ? 64 : 4) >= 0 )
  {
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v10, v10, v9, 11LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v10, v11 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 1, v9 >> 12);
    *((_QWORD *)v10 + 18) = (char *)v10 + 1504;
    *((_QWORD *)v10 + 19) = (char *)v10 + v9;
    *((_QWORD *)v10 + 20) = (char *)v10 + v11;
    v4 = 0;
    result = v10;
LABEL_11:
    if ( v4 >= 0 )
      return result;
    goto LABEL_17;
  }
  result = v10;
LABEL_17:
  if ( result )
  {
    v11 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v10, &v11, 0x8000u);
    return 0LL;
  }
  return result;
}
