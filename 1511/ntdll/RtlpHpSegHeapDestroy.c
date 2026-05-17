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

struct _PEB *__fastcall RtlpHpSegHeapDestroy(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  _QWORD *v8; // rax
  struct _PEB *result; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  _QWORD *v16; // [rsp+20h] [rbp-39h] BYREF
  __int64 v17; // [rsp+28h] [rbp-31h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v19[6]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v20[6]; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v21; // [rsp+6Eh] [rbp+15h]
  _QWORD *v22; // [rsp+88h] [rbp+2Fh]

  v1 = a1;
  v16 = (_QWORD *)a1;
  if ( (RtlpHpHeapFeatures & 2) != 0 && RtlpHpTaggableHeap(a1) )
  {
    memset(v19, 0, sizeof(v19));
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)RtlpWalkHeapInternal(v1, v19, v2) < 0 )
        break;
      if ( (BYTE2(v19[2]) & 0x11) == 0x11 )
        RtlpHpTagFree(v3, (char *)LOWORD(v19[4]), v19[1], v4);
    }
    v1 = (__int64)v16;
  }
  v5 = *(_QWORD **)(v1 + 56);
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v5 )
        {
          v12 = v5;
          v5 = (_QWORD *)*v5;
          *v12 = 0LL;
        }
        if ( !v5[1] )
          break;
        v13 = v5;
        v5 = (_QWORD *)v5[1];
        v13[1] = 0LL;
      }
      v14 = v5[2];
      RtlpHpLargeAllocationDestroy(v5, v1);
      v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v15 )
        break;
      v5 = (_QWORD *)v15;
    }
  }
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  v6 = v16 + 24;
  while ( (_QWORD *)*v6 != v6 )
  {
    v7 = *v6;
    RtlpHpVsSubsegmentCleanup(v16 + 21, *v6);
    ((void (__fastcall *)(_QWORD, __int64, __int64))((unsigned __int64)(v16 + 21) ^ RtlpHeapKey ^ v16[30]))(
      v16[28],
      v7,
      1LL);
  }
  RtlpHpLfhContextCleanup(v16 + 34);
  while ( 1 )
  {
    v8 = v16 + 12;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v10 = (_QWORD *)v16[13];
    v11 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v10 != v8 || (_QWORD *)*v11 != v10 )
      __fastfail(3u);
    v16[13] = v11;
    *v11 = v8;
    v18 = v10;
    v17 = 0x100000LL;
    ZwFreeVirtualMemory(-1LL, &v18, &v17, 0x8000LL);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(v16, v18, v17);
  }
  v17 = 0LL;
  result = (struct _PEB *)ZwFreeVirtualMemory(-1LL, &v16, &v17, 0x8000LL);
  if ( MEMORY[0x7FFE0388] )
    result = (struct _PEB *)RtlpHeapLogRangeDestroy(v16);
  if ( MEMORY[0x7FFE0380] )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
    {
      v22 = v16;
      v21 = 4131;
      return (struct _PEB *)NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v20);
    }
  }
  return result;
}
