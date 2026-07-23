/*
 * XREFs of RtlDestroyHeap @ 0x140533E40
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapHandleError @ 0x140218708 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x1402187D8 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x140218854 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapDestroyEvent @ 0x140218F14 (RtlpLogHeapDestroyEvent.c)
 */

PVOID __stdcall RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // eax
  _QWORD *v3; // rdi
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // r8
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // r9
  void *v12; // rax
  __int64 v13; // rsi
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+28h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+30h] BYREF
  ULONG_PTR v16; // [rsp+70h] [rbp+38h] BYREF
  PVOID v17; // [rsp+78h] [rbp+40h] BYREF

  if ( HeapHandle )
  {
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 && (_WORD)v2 == 1 )
      CLFS_LSN_NULL_EXT(HeapHandle, 0LL, 8LL, 0LL);
    v3 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
    while ( (char *)HeapHandle + 272 != (char *)v3 )
    {
      v7 = (unsigned __int64)v3;
      v3 = (_QWORD *)*v3;
      RegionSize = 0LL;
      BaseAddress = (PVOID)(v7 & 0xFFFFFFFFFFFF0000uLL);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        RtlpHeapLogRangeRelease((__int64)HeapHandle, (__int64)BaseAddress, RegionSize);
    }
    v4 = *((_DWORD *)HeapHandle + 28);
    if ( (v4 & 1) == 0 )
    {
      if ( v4 >= 0 )
        ExDeleteResourceLite(*((PERESOURCE *)HeapHandle + 44));
      *((_QWORD *)HeapHandle + 44) = 0LL;
    }
    do
    {
      v5 = *((_QWORD *)HeapHandle + 37) - 24LL;
      if ( (*(_DWORD *)(v5 + 20) & 1) == 0 )
      {
        v8 = *((_QWORD *)HeapHandle + 37);
        v9 = *(_QWORD *)v8;
        v10 = *(__int64 **)(v5 + 32);
        v11 = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
        if ( *v10 == v11 && *v10 == v8 )
        {
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
        }
        else
        {
          RtlpLogHeapFailure(12, 0LL, v8, v11, *v10);
        }
        v12 = *(void **)(v5 + 48);
        v13 = *(_QWORD *)(v5 + 40);
        v16 = 0LL;
        v17 = v12;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v17, &v16, 0x8000u);
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
          RtlpHeapLogRangeRelease(v13, (__int64)v17, v16);
      }
    }
    while ( (PVOID)v5 != HeapHandle );
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapDestroyEvent((__int64)HeapHandle);
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpHeapLogRangeDestroy((__int64)HeapHandle);
  }
  else if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    DbgPrint("(HeapHandle != NULL)");
    RtlpHeapHandleError();
  }
  return 0LL;
}
