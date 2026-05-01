/*
 * XREFs of RmpActivityHostAllocateAndInitialize @ 0x180005064
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18002ED74 (RmpActivityHostCreateHostJobObject.c)
 *     RmpActivityHostCreateHostProcess @ 0x18002EDFC (RmpActivityHostCreateHostProcess.c)
 * Callees:
 *     RmpObjectHeaderInitialize @ 0x180005194 (RmpObjectHeaderInitialize.c)
 *     RmpEnforcementInfoInitializeCommon @ 0x180005244 (RmpEnforcementInfoInitializeCommon.c)
 *     RmpPolicyResizeScratchBuffers @ 0x1800053B0 (RmpPolicyResizeScratchBuffers.c)
 *     RmpGenerateObjectHandle @ 0x18001E6C4 (RmpGenerateObjectHandle.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6,
        _QWORD *a7)
{
  _QWORD *Heap; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20[3]; // [rsp+20h] [rbp-18h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x468uLL);
  v12 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x468uLL);
    v13 = v12 + 77;
    v12[5] = a1;
    v14 = 2LL;
    *((_DWORD *)v12 + 12) = a2;
    do
    {
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
      v13 += 3;
      --v14;
    }
    while ( v14 );
    v15 = RmpPolicyResizeScratchBuffers(a1 + 1784, (unsigned int)(*(_DWORD *)(a1 + 16) + 1), a6);
    if ( v15 >= 0 )
    {
      v15 = TpAllocWork(v12 + 125, RmpActivityHostCommitUseUpdateWorker, v12, a1 + 3040);
      if ( v15 >= 0 )
      {
        v15 = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v12);
        if ( v15 >= 0 )
        {
          if ( a3 )
          {
            v18 = *(_QWORD **)(a3 + 24);
            v19 = v12 + 129;
            if ( *v18 != a3 + 16 )
              __fastfail(3u);
            *v19 = a3 + 16;
            v12[130] = v18;
            *v18 = v19;
            *(_QWORD *)(a3 + 24) = v19;
            ++*(_DWORD *)(a3 + 32);
            v12[128] = a3;
            v12[137] = a4;
          }
          if ( a5 )
          {
            v16 = *a5;
          }
          else
          {
            RmpGenerateObjectHandle(0LL, v20);
            v16 = v20[0];
          }
          RmpObjectHeaderInitialize(v12, v16, 0LL);
          *a7 = v12;
          v12 = 0LL;
          v15 = 0;
        }
      }
    }
    if ( v12 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
