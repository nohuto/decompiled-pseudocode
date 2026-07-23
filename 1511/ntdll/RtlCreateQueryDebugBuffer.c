/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x180042E90
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800CD730 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 */

PRTL_DEBUG_INFORMATION __cdecl RtlCreateQueryDebugBuffer(ULONG MaximumCommit, BOOLEAN UseEventPair)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  _OWORD *v4; // rax
  _OWORD *v5; // rcx
  __int128 v6; // xmm0
  PSIZE_T ViewSize; // [rsp+30h] [rbp-50h]
  HANDLE SectionHandle; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR v11; // [rsp+60h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR v14; // [rsp+78h] [rbp-8h] BYREF
  PVOID v15; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v16; // [rsp+B8h] [rbp+38h] BYREF

  SectionHandle = 0LL;
  v2 = 0x400000LL;
  v16 = 0LL;
  v15 = 0LL;
  BaseAddress = 0LL;
  if ( MaximumCommit )
    v2 = MaximumCommit;
  v3 = (v2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v3 <= 0xFFFFFFFF && is_mul_ok(v3, 2uLL) )
  {
    v14 = 2 * v3;
    MaximumSize.QuadPart = 2 * v3;
    if ( NtCreateSection(
           &SectionHandle,
           0xF001Fu,
           0LL,
           &MaximumSize,
           4u,
           0x4000000u,
           (HANDLE)(((v3 * (unsigned __int128)2uLL) >> 64) & (unsigned __int64)ViewSize)) >= 0
      && ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &v14,
           ViewUnmap,
           0,
           4u) >= 0 )
    {
      v15 = BaseAddress;
      RegionSize = 208LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v15, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v16 = (char *)v15 + v3;
        v11 = 208LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v16, 0LL, &v11, 0x1000u, 4u) >= 0 )
        {
          *(_QWORD *)v15 = SectionHandle;
          *((_QWORD *)v15 + 1) = v15;
          *((_QWORD *)v15 + 9) = 208LL;
          *((_QWORD *)v15 + 10) = RegionSize;
          *((_QWORD *)v15 + 11) = v3;
          v4 = v15;
          v5 = v16;
          *(_OWORD *)v16 = *(_OWORD *)v15;
          v5[1] = v4[1];
          v5[2] = v4[2];
          v5[3] = v4[3];
          v5[4] = v4[4];
          v5[5] = v4[5];
          v5[6] = v4[6];
          v5 += 8;
          v6 = v4[7];
          v4 += 8;
          *(v5 - 1) = v6;
          *v5 = *v4;
          v5[1] = v4[1];
          v5[2] = v4[2];
          v5[3] = v4[3];
          v5[4] = v4[4];
          *((_QWORD *)v16 + 1) = v16;
          *((_QWORD *)v16 + 10) = v11;
          *(_QWORD *)v16 = 0LL;
          return (PRTL_DEBUG_INFORMATION)v15;
        }
      }
    }
    if ( v15 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v15, &RegionSize, 0x8000u);
    if ( v16 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v16, &v11, 0x8000u);
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( SectionHandle )
      NtClose(SectionHandle);
  }
  return 0LL;
}
