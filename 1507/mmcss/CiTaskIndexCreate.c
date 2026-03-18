/*
 * XREFs of CiTaskIndexCreate @ 0x1C000A410
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A190 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000A860 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiAllocateMemory @ 0x1C0002490 (CiAllocateMemory.c)
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004164 (WPP_SF_d.c)
 *     CiFreeMemory @ 0x1C00042BC (CiFreeMemory.c)
 *     CiTaskIndexLocate @ 0x1C000AEA0 (CiTaskIndexLocate.c)
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiTaskIndexCreate(__int64 a1, _QWORD *a2)
{
  _QWORD *Memory; // rax
  char *v5; // rbx
  _QWORD *v6; // rax
  HANDLE CurrentThreadId; // rax
  int v8; // edi
  struct _DEVICE_OBJECT **DeferredContext; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  Memory = CiAllocateMemory(0x98uLL);
  v5 = (char *)Memory;
  if ( Memory )
  {
    *(_DWORD *)Memory = 2;
    Memory[6] = 1LL;
    Memory[12] = a1;
    Memory[1] = 0LL;
    v6 = Memory + 4;
    v6[1] = v6;
    *v6 = v6;
    *((_QWORD *)v5 + 14) = PsGetCurrentProcessId();
    CurrentThreadId = PsGetCurrentThreadId();
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 15) = CurrentThreadId;
    v8 = 0;
    *((_DWORD *)v5 + 22) = 1;
    *((_DWORD *)v5 + 36) = 0;
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
    if ( (unsigned int)CiTaskIndicesCount >= 0x80 )
    {
      v8 = -1073741801;
    }
    else
    {
      do
        ++CiTaskIndex;
      while ( (int)CiTaskIndexLocate((unsigned int)CiTaskIndex, 0LL, &v11) >= 0 );
      ++CiTaskIndicesCount;
      *((_DWORD *)v5 + 26) = CiTaskIndex;
      DeferredContext = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.DeferredContext;
      *((_QWORD *)v5 + 16) = &WPP_MAIN_CB.Dpc.DeferredRoutine;
      *((_QWORD *)v5 + 17) = DeferredContext;
      *a2 = v5;
      if ( *DeferredContext != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        __fastfail(3u);
      *DeferredContext = (struct _DEVICE_OBJECT *)(v5 + 128);
      WPP_MAIN_CB.Dpc.DeferredContext = v5 + 128;
    }
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
    if ( v8 < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_b804a9086038d3345a48e2dc3b0e2121_Traceguids);
      CiFreeMemory(v5);
    }
  }
  else
  {
    v8 = -1073741801;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_b804a9086038d3345a48e2dc3b0e2121_Traceguids,
        -1073741801);
  }
  return (unsigned int)v8;
}
