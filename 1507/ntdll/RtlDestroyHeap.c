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

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h] BYREF
  char v15[6]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v16; // [rsp+5Eh] [rbp-Bh]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char v18[6]; // [rsp+80h] [rbp+17h] BYREF
  __int16 v19; // [rsp+86h] [rbp+1Dh]
  __int64 v20; // [rsp+A0h] [rbp+37h]

  if ( !a1 )
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
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v8 = *(_DWORD *)(a1 + 32);
      if ( v8 )
        RtlpCallInterceptRoutine(v8, a1, 0, 8, 0LL);
      RtlpMoveHeapBetweenLists(a1, 1LL, 0LL);
      RtlpHpSegHeapDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, a1, 0, 8, 0LL);
    if ( ((((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) == 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists(a1, 1LL, 0LL);
      v4 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v4 )
      {
        v9 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
        v10 = 0LL;
        v11 = v9 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v11, &v10, 0x8000LL);
        if ( MEMORY[0x7FFE0388] )
          RtlpHeapLogRangeRelease(a1, v11, v10);
      }
      if ( *(_BYTE *)(a1 + 378) == 2 )
        v5 = *(_QWORD *)(a1 + 368);
      else
        v5 = 0LL;
      if ( v5 )
      {
        v14 = 0LL;
        v12 = v5;
        RtlpSecMemFreeVirtualMemory(v3, &v12, &v14, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v13 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, a1 + 232, &v13, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(void **)(a1 + 352));
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v6 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v6);
      }
      while ( v6 != a1 );
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v17 = a1;
        v16 = 4131;
        NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v15);
      }
      if ( MEMORY[0x7FFE038A] )
      {
        v20 = a1;
        v19 = 4131;
        NtTraceEvent(MEMORY[0x7FFE038A], 1026LL, 8LL, v18);
      }
      if ( MEMORY[0x7FFE0388] )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  return qword_180143CC0(a1);
}
