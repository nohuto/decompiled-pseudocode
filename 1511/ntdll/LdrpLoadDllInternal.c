/*
 * XREFs of LdrpLoadDllInternal @ 0x180011D2C
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001190C (LdrpLoadDll.c)
 * Callees:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     LdrpDetectDetour @ 0x1800049B8 (LdrpDetectDetour.c)
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180008D48 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpPrepareModuleForExecution @ 0x18000BAC0 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000C4E4 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpBuildForwarderLink @ 0x1800117F0 (LdrpBuildForwarderLink.c)
 *     LdrpFastpthReloadedDll @ 0x180011F9C (LdrpFastpthReloadedDll.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFreeReplacedModule @ 0x18006E7CC (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006E804 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x18006E974 (LdrpHandleReplacedModule.c)
 *     LdrpCondenseGraph @ 0x180074AFC (LdrpCondenseGraph.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

NTSTATUS __fastcall LdrpLoadDllInternal(
        PUNICODE_STRING a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  NTSTATUS result; // eax
  char v12; // di
  int *v13; // rbx
  int v14; // eax
  PVOID v15; // rax
  int v16; // eax
  int v17; // eax
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      415,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n");
  *a7 = 0LL;
  BaseAddress[0] = 0LL;
  result = LdrpFastpthReloadedDll(a1);
  if ( result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    if ( !a6 || v12 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v13 = a8;
      v14 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, a5, BaseAddress, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LdrpProcessWork(*((_QWORD *)BaseAddress[0] + 22), 1);
      }
      else if ( v14 < 0 )
      {
        *a8 = v14;
      }
    }
    else
    {
      v13 = a8;
      *a8 = -1073741515;
    }
    result = LdrpDrainWorkQueue(1LL);
    if ( BaseAddress[0] )
    {
      v15 = (PVOID)LdrpHandleReplacedModule();
      *a7 = v15;
      if ( BaseAddress[0] != v15 )
      {
        LdrpFreeReplacedModule(BaseAddress[0]);
        BaseAddress[0] = *a7;
      }
      if ( *((_QWORD *)BaseAddress[0] + 22) )
        LdrpCondenseGraph(*((_QWORD *)BaseAddress[0] + 19));
      if ( *v13 >= 0 )
      {
        v16 = LdrpPrepareModuleForExecution((__int64)BaseAddress[0], (__int64)v13);
        *v13 = v16;
        if ( v16 >= 0 )
        {
          v17 = LdrpBuildForwarderLink(a6, (__int64)BaseAddress[0]);
          *v13 = v17;
          if ( v17 >= 0 && !LdrInitState )
            LdrpPinModule((__int64)BaseAddress[0]);
        }
      }
      result = LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress[0] + 19), v13);
      if ( *v13 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCountEx((__int64)BaseAddress[0], 0);
        result = LdrpDereferenceModule(BaseAddress[0]);
      }
    }
    else
    {
      *v13 = -1073741801;
    }
    if ( !v12 )
      result = LdrpDropLastInProgressCount();
  }
  else
  {
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             632,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             (__int64)"Status: 0x%08lx\n");
  return result;
}
