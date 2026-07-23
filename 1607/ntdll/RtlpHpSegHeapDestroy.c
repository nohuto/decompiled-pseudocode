/*
 * XREFs of RtlpHpSegHeapDestroy @ 0x180052518
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x18004D354 (RtlpWalkHeapInternal.c)
 *     RtlpHpLfhContextCleanup @ 0x1800526DC (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180052820 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpTaggableHeap @ 0x180087254 (RtlpHpTaggableHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800F7E20 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 */

int __fastcall RtlpHpSegHeapDestroy(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  struct _PEB *v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  PVOID v15; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v18[6]; // [rsp+38h] [rbp-11h] BYREF
  char Fields[6]; // [rsp+68h] [rbp+1Fh] BYREF
  __int16 v20; // [rsp+6Eh] [rbp+25h]
  PVOID v21; // [rsp+88h] [rbp+3Fh]

  v1 = a1;
  v15 = a1;
  if ( (RtlpHpHeapFeatures & 2) != 0 && (unsigned int)RtlpHpTaggableHeap() )
  {
    memset(v18, 0, sizeof(v18));
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal((__int64)v1, v18, v2) < 0 )
        break;
      if ( (BYTE2(v18[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_180150938 + 8LL * (LOWORD(v18[4]) - 1)) + 32LL),
               -v18[1]);
    }
    v1 = v15;
  }
  v3 = (_QWORD *)v1[7];
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v3 )
        {
          v10 = v3;
          v3 = (_QWORD *)*v3;
          *v10 = 0LL;
        }
        if ( !v3[1] )
          break;
        v11 = v3;
        v3 = (_QWORD *)v3[1];
        v11[1] = 0LL;
      }
      v12 = v3[2];
      RtlpHpLargeAllocationDestroy(v3, v1);
      v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v13 )
        break;
      v3 = (_QWORD *)v13;
    }
  }
  v1[7] = 0LL;
  v1[8] = 0LL;
  v4 = (char *)v15 + 200;
  while ( (_QWORD *)*v4 != v4 )
  {
    RtlpHpVsSubsegmentCleanup((char *)v15 + 176, *v4);
    ((void (__fastcall *)(_QWORD, __int64, __int64))(((unsigned __int64)v15 + 176) ^ RtlpHeapKey ^ *((_QWORD *)v15 + 31)))(
      *((_QWORD *)v15 + 29),
      v9,
      1LL);
  }
  RtlpHpLfhContextCleanup((char *)v15 + 288);
  while ( 1 )
  {
    v5 = (char *)v15 + 96;
    if ( (_QWORD *)*v5 == v5 )
      break;
    v6 = (_QWORD *)*((_QWORD *)v15 + 13);
    v7 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v6 != v5 || (_QWORD *)*v7 != v6 )
      __fastfail(3u);
    *((_QWORD *)v15 + 13) = v7;
    *v7 = v5;
    BaseAddress = v6;
    RegionSize = 0x100000LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(v15, BaseAddress);
  }
  RegionSize = 0LL;
  LODWORD(v8) = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v15, &RegionSize, 0x8000u);
  if ( MEMORY[0x7FFE0388] )
    LODWORD(v8) = RtlpHeapLogRangeDestroy(v15);
  if ( MEMORY[0x7FFE0380] )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 1) != 0 )
    {
      v21 = v15;
      v20 = 4131;
      LODWORD(v8) = NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
    }
  }
  return (int)v8;
}
