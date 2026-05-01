/*
 * XREFs of RmpActivityHostAllocateAndInitialize @ 0x180009B58
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180008598 (RmpActivityHostCreateHostPsm.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18003B994 (RmpActivityHostCreateHostJobObject.c)
 *     RmpActivityHostCreateHostProcess @ 0x18003BA18 (RmpActivityHostCreateHostProcess.c)
 * Callees:
 *     RmpEnforcementInfoInitializeCommon @ 0x180009C18 (RmpEnforcementInfoInitializeCommon.c)
 *     RmpPolicyScratchResizeIntelligently @ 0x180009D00 (RmpPolicyScratchResizeIntelligently.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  _DWORD *v8; // rcx
  int v9; // edi
  _QWORD *v11; // rdx
  char *v12; // rax

  Heap = (_QWORD *)RmpAllocateHeap(0x398uLL);
  v7 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x398uLL);
    v8 = RmSvcGlobals;
    v7[77] = v7 + 76;
    v7[76] = v7 + 76;
    v9 = RmpPolicyScratchResizeIntelligently(v8 + 408, (unsigned int)(v8[6] + 1));
    if ( v9 >= 0 )
    {
      v9 = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v7);
      if ( v9 >= 0 )
      {
        if ( a1 )
        {
          v11 = *(_QWORD **)(a1 + 24);
          v12 = (char *)(v7 + 106);
          v7[106] = a1 + 16;
          v7[107] = v11;
          if ( *v11 != a1 + 16 )
            __fastfail(3u);
          *v11 = v12;
          *(_QWORD *)(a1 + 24) = v12;
          ++*(_DWORD *)(a1 + 32);
          v7[105] = a1;
          v7[111] = a2;
        }
        *a3 = v7;
        v7 = 0LL;
        v9 = 0;
      }
    }
    if ( v7 )
      RmpFreeHeap(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
