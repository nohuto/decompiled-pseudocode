/*
 * XREFs of RtlpHpSegHeapDestroy @ 0x180052528
 * Callers:
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     RtlpHpSegHeapCreate @ 0x18007F470 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x18004D364 (RtlpWalkHeapInternal.c)
 *     RtlpHpLfhContextCleanup @ 0x1800526EC (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180052830 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpTaggableHeap @ 0x180087264 (RtlpHpTaggableHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800F7E20 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 */

struct _PEB *__fastcall RtlpHpSegHeapDestroy(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  struct _PEB *result; // rax
  __int64 v9; // r10
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  _QWORD *v14; // [rsp+20h] [rbp-29h] BYREF
  __int64 v15; // [rsp+28h] [rbp-21h] BYREF
  _QWORD *v16; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v17[6]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v18[6]; // [rsp+68h] [rbp+1Fh] BYREF
  __int16 v19; // [rsp+6Eh] [rbp+25h]
  _QWORD *v20; // [rsp+88h] [rbp+3Fh]

  v1 = (__int64)a1;
  v14 = a1;
  if ( (RtlpHpHeapFeatures & 2) != 0 && (unsigned int)RtlpHpTaggableHeap() )
  {
    memset(v17, 0, sizeof(v17));
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal(v1, v17, v2) < 0 )
        break;
      if ( (BYTE2(v17[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_180150938 + 8LL * (LOWORD(v17[4]) - 1)) + 32LL),
               -v17[1]);
    }
    v1 = (__int64)v14;
  }
  v3 = *(_QWORD **)(v1 + 56);
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
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  v4 = v14 + 25;
  while ( (_QWORD *)*v4 != v4 )
  {
    RtlpHpVsSubsegmentCleanup(v14 + 22, *v4);
    ((void (__fastcall *)(_QWORD, __int64, __int64))((unsigned __int64)(v14 + 22) ^ RtlpHeapKey ^ v14[31]))(
      v14[29],
      v9,
      1LL);
  }
  RtlpHpLfhContextCleanup(v14 + 36);
  while ( 1 )
  {
    v5 = v14 + 12;
    if ( (_QWORD *)*v5 == v5 )
      break;
    v6 = (_QWORD *)v14[13];
    v7 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v6 != v5 || (_QWORD *)*v7 != v6 )
      __fastfail(3u);
    v14[13] = v7;
    *v7 = v5;
    v16 = v6;
    v15 = 0x100000LL;
    ZwFreeVirtualMemory(-1LL, &v16, &v15, 0x8000LL);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(v14, v16);
  }
  v15 = 0LL;
  result = (struct _PEB *)ZwFreeVirtualMemory(-1LL, &v14, &v15, 0x8000LL);
  if ( MEMORY[0x7FFE0388] )
    result = (struct _PEB *)RtlpHeapLogRangeDestroy(v14);
  if ( MEMORY[0x7FFE0380] )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
    {
      v20 = v14;
      v19 = 4131;
      return (struct _PEB *)NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v18);
    }
  }
  return result;
}
