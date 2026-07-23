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

int __fastcall RtlpHpSegHeapDestroy(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  struct _PEB *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  PVOID v14; // [rsp+20h] [rbp-50h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+30h] [rbp-40h] BYREF
  _BYTE Fields[6]; // [rsp+38h] [rbp-38h] BYREF
  __int16 v18; // [rsp+3Eh] [rbp-32h]
  PVOID v19; // [rsp+58h] [rbp-18h]

  v14 = a1;
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
  v3 = (char *)v14 + 200;
  while ( (_QWORD *)*v3 != v3 )
  {
    v4 = *v3;
    RtlpHpVsSubsegmentCleanup((char *)v14 + 176, *v3);
    ((void (__fastcall *)(_QWORD, __int64, __int64))(((unsigned __int64)v14 + 176) ^ RtlpHeapKey ^ *((_QWORD *)v14 + 31)))(
      *((_QWORD *)v14 + 29),
      v4,
      1LL);
  }
  RtlpHpLfhContextCleanup((char *)v14 + 288);
  while ( 1 )
  {
    v5 = (char *)v14 + 96;
    if ( (_QWORD *)*v5 == v5 )
      break;
    v6 = (_QWORD *)*((_QWORD *)v14 + 13);
    v7 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v6 != v5 || (_QWORD *)*v7 != v6 )
      __fastfail(3u);
    *((_QWORD *)v14 + 13) = v7;
    *v7 = v5;
    BaseAddress = v6;
    RegionSize = 0x100000LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(v14, BaseAddress, RegionSize);
  }
  RegionSize = 0LL;
  LODWORD(v8) = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v14, &RegionSize, 0x8000u);
  if ( MEMORY[0x7FFE0388] )
    LODWORD(v8) = RtlpHeapLogRangeDestroy(v14);
  if ( MEMORY[0x7FFE0380] )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 1) != 0 )
    {
      v19 = v14;
      v18 = 4131;
      LODWORD(v8) = NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
    }
  }
  return (int)v8;
}
