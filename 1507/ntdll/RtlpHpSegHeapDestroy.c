/*
 * XREFs of RtlpHpSegHeapDestroy @ 0x180008328
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpLfhContextCleanup @ 0x180008484 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180008AA0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800EEEF8 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1800EEF6C (RtlpHeapLogRangeRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F0430 (RtlpHpLargeAllocationDestroy.c)
 */

struct _PEB *__fastcall RtlpHpSegHeapDestroy(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  struct _PEB *result; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v16[6]; // [rsp+38h] [rbp-38h] BYREF
  __int16 v17; // [rsp+3Eh] [rbp-32h]
  _QWORD *v18; // [rsp+58h] [rbp-18h]

  v13 = a1;
  v2 = (_QWORD *)a1[7];
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v2 )
        {
          v9 = v2;
          v2 = (_QWORD *)*v2;
          *v9 = 0LL;
        }
        if ( !v2[1] )
          break;
        v10 = v2;
        v2 = (_QWORD *)v2[1];
        v10[1] = 0LL;
      }
      v11 = v2[2];
      RtlpHpLargeAllocationDestroy(v2, a1);
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v2 = (_QWORD *)v12;
    }
  }
  a1[7] = 0LL;
  a1[8] = 0LL;
  v3 = v13 + 25;
  while ( (_QWORD *)*v3 != v3 )
  {
    v4 = *v3;
    RtlpHpVsSubsegmentCleanup(v13 + 22, *v3);
    ((void (__fastcall *)(_QWORD, __int64, __int64))((unsigned __int64)(v13 + 22) ^ RtlpHeapKey ^ v13[31]))(
      v13[29],
      v4,
      1LL);
  }
  RtlpHpLfhContextCleanup(v13 + 36);
  while ( 1 )
  {
    v5 = v13 + 12;
    if ( (_QWORD *)*v5 == v5 )
      break;
    v6 = (_QWORD *)v13[13];
    v7 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v6 != v5 || (_QWORD *)*v7 != v6 )
      __fastfail(3u);
    v13[13] = v7;
    *v7 = v5;
    v15 = v6;
    v14 = 0x100000LL;
    ZwFreeVirtualMemory(-1LL, &v15, &v14, 0x8000LL);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(v13, v15, v14);
  }
  v14 = 0LL;
  result = (struct _PEB *)ZwFreeVirtualMemory(-1LL, &v13, &v14, 0x8000LL);
  if ( MEMORY[0x7FFE0388] )
    result = (struct _PEB *)RtlpHeapLogRangeDestroy(v13);
  if ( MEMORY[0x7FFE0380] )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
    {
      v18 = v13;
      v17 = 4131;
      return (struct _PEB *)NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v16);
    }
  }
  return result;
}
