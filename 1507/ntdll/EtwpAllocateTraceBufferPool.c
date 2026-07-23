/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x1800766E0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     EtwpAllocateFreeBuffers @ 0x180076848 (EtwpAllocateFreeBuffers.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 */

ULONG __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  unsigned int v12; // ecx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  int v16; // [rsp+48h] [rbp-50h]

  BaseAddress = 0LL;
  v2 = NtQuerySystemInformation(SystemBasicInformation, &v15, 0x40u, 0LL);
  if ( v2 < 0 )
    return RtlNtStatusToDosError(v2);
  v3 = *(_DWORD *)(a1 + 204);
  v4 = 2 * v3;
  if ( *(_DWORD *)(a1 + 220) < (unsigned int)(2 * v3) )
    *(_DWORD *)(a1 + 220) = v4 + 22;
  v5 = *(_DWORD *)(a1 + 224);
  if ( v5 < v4 || v5 > *(_DWORD *)(a1 + 220) )
    *(_DWORD *)(a1 + 224) = v4;
  v6 = *(_DWORD *)(a1 + 220);
  v7 = *(_DWORD *)(a1 + 224);
  if ( v6 > 0x400 )
    v6 = 1024;
  *(_DWORD *)(a1 + 220) = v6;
  if ( v7 > 0x400 )
    v7 = 1024;
  *(_DWORD *)(a1 + 224) = v7;
  v8 = *(_DWORD *)(a1 + 376);
  if ( v8 )
  {
    v12 = v6 - v3 - 1;
    if ( v8 > v12 )
      *(_DWORD *)(a1 + 376) = v12;
  }
  v9 = ~(v16 - 1) & (*(_DWORD *)(a1 + 208) + v16 - 1);
  *(_DWORD *)(a1 + 216) = v9;
  if ( (*(_DWORD *)(a1 + 332) & 0x400) != 0 )
    *(_DWORD *)(a1 + 220) = *(_DWORD *)(a1 + 224);
  RegionSize = (unsigned int)(v9 * *(_DWORD *)(a1 + 220));
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 224);
    *(_QWORD *)(a1 + 432) = BaseAddress;
    if ( (unsigned int)EtwpAllocateFreeBuffers(a1, v10) == v10 )
      return 0;
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 432), &RegionSize, 0x8000u);
    *(_QWORD *)(a1 + 432) = 0LL;
  }
  return 8;
}
