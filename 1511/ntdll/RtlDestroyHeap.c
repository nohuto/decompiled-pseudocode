/*
 * XREFs of RtlDestroyHeap @ 0x1800590E0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x18005B7E0 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1800E6560 (RtlHeapTrkInitialize.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x180055FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpDestroyHeapSegment @ 0x1800592C8 (RtlpDestroyHeapSegment.c)
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     RtlDebugDestroyHeap @ 0x1800EF1BC (RtlDebugDestroyHeap.c)
 *     RtlpHeapHandleError @ 0x1800F0DA8 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800F0E50 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F0EC4 (RtlpHeapLogRangeRelease.c)
 */

PVOID __cdecl RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // ecx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  void *v5; // rax
  PVOID v6; // rbx
  int v8; // ecx
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  PVOID v12; // [rsp+40h] [rbp-29h] BYREF
  ULONG_PTR v13; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR v14; // [rsp+50h] [rbp-19h] BYREF
  char Fields[6]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v16; // [rsp+5Eh] [rbp-Bh]
  PVOID v17; // [rsp+78h] [rbp+Fh]
  char v18[6]; // [rsp+80h] [rbp+17h] BYREF
  __int16 v19; // [rsp+86h] [rbp+1Dh]
  PVOID v20; // [rsp+A0h] [rbp+37h]

  if ( !HeapHandle )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError(2LL);
    }
    return 0LL;
  }
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      v8 = *((_DWORD *)HeapHandle + 8);
      if ( v8 )
        RtlpCallInterceptRoutine(v8, (_DWORD)HeapHandle, 0, 8, 0LL);
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 1, 0, 0);
      RtlpHpSegHeapDestroy(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, (_DWORD)HeapHandle, 0, 8, 0LL);
    if ( ((((*((_DWORD *)HeapHandle + 28) & 0x61000000) != 0) & !_bittest(
                                                                   (const signed __int32 *)HeapHandle + 28,
                                                                   0x1Cu)) == 0
       || (unsigned __int8)RtlDebugDestroyHeap(HeapHandle))
      && HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 1, 0, 0);
      v4 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v4 )
      {
        v9 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
        v10 = 0LL;
        v11 = v9 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, (PVOID *)&v11, &v10, 0x8000u);
        if ( MEMORY[0x7FFE0388] )
          RtlpHeapLogRangeRelease(HeapHandle, v11, v10);
      }
      if ( *((_BYTE *)HeapHandle + 378) == 2 )
        v5 = (void *)*((_QWORD *)HeapHandle + 46);
      else
        v5 = 0LL;
      if ( v5 )
      {
        v14 = 0LL;
        v12 = v5;
        RtlpSecMemFreeVirtualMemory(v3, &v12, &v14, 0x8000u);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v13 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (PVOID *)HeapHandle + 29, &v13, 0x8000u);
        *((_QWORD *)HeapHandle + 29) = 0LL;
      }
      if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
      {
        if ( *((int *)HeapHandle + 28) >= 0 )
          RtlDeleteCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v6 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment(v6);
      }
      while ( v6 != HeapHandle );
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v17 = HeapHandle;
        v16 = 4131;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
      }
      if ( MEMORY[0x7FFE038A] )
      {
        v20 = HeapHandle;
        v19 = 4131;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE038A], 0x402u, 8u, v18);
      }
      if ( MEMORY[0x7FFE0388] )
        RtlpHeapLogRangeDestroy(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  return (PVOID)((__int64 (__fastcall *)(PVOID))qword_1801420E0)(HeapHandle);
}
