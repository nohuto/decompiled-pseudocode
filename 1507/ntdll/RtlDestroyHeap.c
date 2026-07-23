/*
 * XREFs of RtlDestroyHeap @ 0x180004920
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x180044C20 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1800E0E00 (RtlHeapTrkInitialize.c)
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 * Callees:
 *     RtlpMoveHeapBetweenLists @ 0x180005FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpDestroyHeapSegment @ 0x180007A98 (RtlpDestroyHeapSegment.c)
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 *     RtlpHpSegHeapDestroy @ 0x180008328 (RtlpHpSegHeapDestroy.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlDebugDestroyHeap @ 0x1800EC724 (RtlDebugDestroyHeap.c)
 *     RtlpHeapHandleError @ 0x1800EEE50 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800EEEF8 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1800EEF6C (RtlpHeapLogRangeRelease.c)
 */

PVOID __cdecl RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // ecx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  PVOID v6; // rbx
  int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h] BYREF
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
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 0LL);
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
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 0LL);
      v4 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v4 )
      {
        v9 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
        v10 = 0LL;
        v11 = v9 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v11, &v10, 0x8000LL);
        if ( MEMORY[0x7FFE0388] )
          RtlpHeapLogRangeRelease(HeapHandle, v11, v10);
      }
      if ( *((_BYTE *)HeapHandle + 378) == 2 )
        v5 = *((_QWORD *)HeapHandle + 46);
      else
        v5 = 0LL;
      if ( v5 )
      {
        v14 = 0LL;
        v12 = v5;
        RtlpSecMemFreeVirtualMemory(v3, &v12, &v14, 0x8000LL);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v13 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (char *)HeapHandle + 232, &v13, 0x8000LL);
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
  return (PVOID)((__int64 (__fastcall *)(PVOID))qword_180143CC0)(HeapHandle);
}
