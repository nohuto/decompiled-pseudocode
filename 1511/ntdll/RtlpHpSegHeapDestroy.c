/*
 * XREFs of RtlpHpSegHeapDestroy @ 0x180050600
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     RtlpHpTaggableHeap @ 0x18004FCC0 (RtlpHpTaggableHeap.c)
 *     RtlpWalkHeapInternal @ 0x18004FCE4 (RtlpWalkHeapInternal.c)
 *     RtlpHpTagFree @ 0x180050324 (RtlpHpTagFree.c)
 *     RtlpHpLfhContextCleanup @ 0x1800507B8 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180050E64 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800F0E50 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F0EC4 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F2380 (RtlpHpLargeAllocationDestroy.c)
 */

int __fastcall RtlpHpSegHeapDestroy(_DWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  struct _PEB *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  PVOID BaseAddress; // [rsp+20h] [rbp-39h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-31h] BYREF
  PVOID v18; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v19[6]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE Fields[6]; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v21; // [rsp+6Eh] [rbp+15h]
  PVOID v22; // [rsp+88h] [rbp+2Fh]

  v1 = a1;
  BaseAddress = a1;
  if ( (RtlpHpHeapFeatures & 2) != 0 && RtlpHpTaggableHeap(a1) )
  {
    memset(v19, 0, sizeof(v19));
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal((__int64)v1, v19, v2) < 0 )
        break;
      if ( (BYTE2(v19[2]) & 0x11) == 0x11 )
        RtlpHpTagFree(v3, v19[4], v19[1]);
    }
    v1 = BaseAddress;
  }
  v4 = (_QWORD *)v1[7];
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v4 )
        {
          v11 = v4;
          v4 = (_QWORD *)*v4;
          *v11 = 0LL;
        }
        if ( !v4[1] )
          break;
        v12 = v4;
        v4 = (_QWORD *)v4[1];
        v12[1] = 0LL;
      }
      v13 = v4[2];
      RtlpHpLargeAllocationDestroy(v4, v1);
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        break;
      v4 = (_QWORD *)v14;
    }
  }
  v1[7] = 0LL;
  v1[8] = 0LL;
  v5 = (char *)BaseAddress + 192;
  while ( (_QWORD *)*v5 != v5 )
  {
    v6 = *v5;
    RtlpHpVsSubsegmentCleanup((char *)BaseAddress + 168, *v5);
    ((void (__fastcall *)(_QWORD, __int64, __int64))(((unsigned __int64)BaseAddress + 168) ^ RtlpHeapKey ^ *((_QWORD *)BaseAddress + 30)))(
      *((_QWORD *)BaseAddress + 28),
      v6,
      1LL);
  }
  RtlpHpLfhContextCleanup((char *)BaseAddress + 272);
  while ( 1 )
  {
    v7 = (char *)BaseAddress + 96;
    if ( (_QWORD *)*v7 == v7 )
      break;
    v9 = (_QWORD *)*((_QWORD *)BaseAddress + 13);
    v10 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v9 != v7 || (_QWORD *)*v10 != v9 )
      __fastfail(3u);
    *((_QWORD *)BaseAddress + 13) = v10;
    *v10 = v7;
    v18 = v9;
    RegionSize = 0x100000LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v18, &RegionSize, 0x8000u);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(BaseAddress, v18, RegionSize);
  }
  RegionSize = 0LL;
  LODWORD(v8) = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  if ( MEMORY[0x7FFE0388] )
    LODWORD(v8) = RtlpHeapLogRangeDestroy(BaseAddress);
  if ( MEMORY[0x7FFE0380] )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 1) != 0 )
    {
      v22 = BaseAddress;
      v21 = 4131;
      LODWORD(v8) = NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
    }
  }
  return (int)v8;
}
