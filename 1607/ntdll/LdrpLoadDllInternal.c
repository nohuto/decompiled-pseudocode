/*
 * XREFs of LdrpLoadDllInternal @ 0x180018D30
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180013300 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000F89C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFastpthReloadedDll @ 0x180018F98 (LdrpFastpthReloadedDll.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA88 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F018 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpFreeReplacedModule @ 0x18006B66C (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B6A4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x18006B814 (LdrpHandleReplacedModule.c)
 *     LdrpDetectDetour @ 0x180073564 (LdrpDetectDetour.c)
 *     LdrpBuildForwarderLink @ 0x180073888 (LdrpBuildForwarderLink.c)
 *     LdrpCondenseGraph @ 0x180074624 (LdrpCondenseGraph.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     LdrpPinModule @ 0x18007E418 (LdrpPinModule.c)
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

struct _TEB *__fastcall LdrpLoadDllInternal(
        const void **a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8)
{
  struct _TEB *result; // rax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      415,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  v22 = 0LL;
  result = (struct _TEB *)LdrpFastpthReloadedDll(a1, a3, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      LdrpDrainWorkQueue(0);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v12 = a8;
      v14 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, a5, &v22, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LdrpProcessWork(*(_QWORD *)(v22 + 176), 1);
      }
      else if ( v14 < 0 )
      {
        *a8 = v14;
      }
    }
    else
    {
      v12 = a8;
      *a8 = -1073741515;
    }
    result = LdrpDrainWorkQueue(1);
    v18 = v22;
    if ( v22 )
    {
      v19 = LdrpHandleReplacedModule();
      *a7 = v19;
      if ( v22 != v19 )
      {
        LdrpFreeReplacedModule();
        v22 = *a7;
      }
      if ( *(_QWORD *)(v22 + 176) )
        LdrpCondenseGraph(*(_QWORD *)(v22 + 152));
      if ( *v12 >= 0 )
      {
        v20 = LdrpPrepareModuleForExecution(v22, v12);
        *v12 = v20;
        if ( v20 >= 0 )
        {
          v21 = LdrpBuildForwarderLink(a6, v22);
          *v12 = v21;
          if ( v21 >= 0 && !LdrInitState )
            LdrpPinModule(v22);
        }
      }
      result = (struct _TEB *)LdrpFreeLoadContextOfNode(*(_QWORD *)(v22 + 152), v12);
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx(v22, 0LL);
        result = (struct _TEB *)LdrpDereferenceModule(v22);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = (struct _TEB *)LdrpDropLastInProgressCount(v18, v15, v16, v17);
  }
  else
  {
    v12 = a8;
    *a8 = (int)result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return (struct _TEB *)LdrpLogDbgPrint(
                            (unsigned int)"minkernel\\ntdll\\ldrapi.c",
                            632,
                            (unsigned int)"LdrpLoadDllInternal",
                            4,
                            (__int64)"Status: 0x%08lx\n",
                            *v12);
  return result;
}
