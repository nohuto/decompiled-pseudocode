/*
 * XREFs of LdrpLoadDllInternal @ 0x180018D20
 * Callers:
 *     LdrpLoadForwardedDll @ 0x1800132F0 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001539C (LdrpLoadDll.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000F88C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFastpthReloadedDll @ 0x180018F88 (LdrpFastpthReloadedDll.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F008 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpFreeReplacedModule @ 0x18006B65C (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B694 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x18006B804 (LdrpHandleReplacedModule.c)
 *     LdrpDetectDetour @ 0x180073554 (LdrpDetectDetour.c)
 *     LdrpBuildForwarderLink @ 0x180073878 (LdrpBuildForwarderLink.c)
 *     LdrpCondenseGraph @ 0x180074614 (LdrpCondenseGraph.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     LdrpPinModule @ 0x18007E408 (LdrpPinModule.c)
 *     LdrpLogError @ 0x180086104 (LdrpLogError.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

struct _TEB *__fastcall LdrpLoadDllInternal(
        PUNICODE_STRING a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  struct _TEB *result; // rax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID v18; // rcx
  PVOID v19; // rax
  int v20; // eax
  int v21; // eax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      415,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  BaseAddress = 0LL;
  result = (struct _TEB *)LdrpFastpthReloadedDll(a1);
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
      v14 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, a5, (__int64 *)&BaseAddress, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LdrpProcessWork(*((_QWORD *)BaseAddress + 22), 1);
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
    v18 = BaseAddress;
    if ( BaseAddress )
    {
      v19 = (PVOID)LdrpHandleReplacedModule();
      *a7 = v19;
      if ( BaseAddress != v19 )
      {
        LdrpFreeReplacedModule(BaseAddress);
        BaseAddress = *a7;
      }
      if ( *((_QWORD *)BaseAddress + 22) )
        LdrpCondenseGraph(*((_QWORD *)BaseAddress + 19));
      if ( *v12 >= 0 )
      {
        v20 = LdrpPrepareModuleForExecution(BaseAddress, v12);
        *v12 = v20;
        if ( v20 >= 0 )
        {
          v21 = LdrpBuildForwarderLink(a6, BaseAddress);
          *v12 = v21;
          if ( v21 >= 0 && !LdrInitState )
            LdrpPinModule(BaseAddress);
        }
      }
      result = (struct _TEB *)LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress + 19), v12);
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0LL);
        result = (struct _TEB *)LdrpDereferenceModule(BaseAddress);
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
