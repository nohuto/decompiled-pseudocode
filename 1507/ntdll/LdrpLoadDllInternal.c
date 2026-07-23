/*
 * XREFs of LdrpLoadDllInternal @ 0x180020AC4
 * Callers:
 *     LdrpLoadDll @ 0x1800207D8 (LdrpLoadDll.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpBuildForwarderLink @ 0x18002097C (LdrpBuildForwarderLink.c)
 *     LdrpFastpthReloadedDll @ 0x180020D34 (LdrpFastpthReloadedDll.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpDecrementModuleLoadCount @ 0x1800384B0 (LdrpDecrementModuleLoadCount.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003F368 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpPrepareModuleForExecution @ 0x180040558 (LdrpPrepareModuleForExecution.c)
 *     LdrpCondenseGraph @ 0x180043FF4 (LdrpCondenseGraph.c)
 *     LdrpFreeReplacedModule @ 0x180061FF8 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180062030 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x1800621A0 (LdrpHandleReplacedModule.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 *     LdrpDetectDetour @ 0x18007D6B8 (LdrpDetectDetour.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpLoadDllInternal(
        PUNICODE_STRING a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  int result; // eax
  int *v11; // rbx
  char v12; // di
  int v13; // eax
  __int64 v14; // rdx
  PVOID v15; // rax
  int v16; // eax
  int v17; // eax
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      414,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  BaseAddress[0] = 0LL;
  result = LdrpFastpthReloadedDll(a1, a3, a6, a7);
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
      v11 = a8;
      v13 = LdrpFindOrPrepareLoadingModule(a1, a5, (__int64)BaseAddress, (__int64)a8);
      if ( v13 == -1073741515 )
      {
        LOBYTE(v14) = 1;
        LdrpProcessWork(*((_QWORD *)BaseAddress[0] + 22), v14);
      }
      else if ( v13 < 0 )
      {
        *a8 = v13;
      }
    }
    else
    {
      v11 = a8;
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
      if ( *v11 >= 0 )
      {
        v16 = LdrpPrepareModuleForExecution(BaseAddress[0], v11);
        *v11 = v16;
        if ( v16 >= 0 )
        {
          v17 = LdrpBuildForwarderLink(a6, (__int64)BaseAddress[0]);
          *v11 = v17;
          if ( v17 >= 0 && !LdrInitState )
            LdrpPinModule(BaseAddress[0]);
        }
      }
      result = LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress[0] + 19), v11);
      if ( *v11 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCount(BaseAddress[0]);
        result = LdrpDereferenceModule((char *)BaseAddress[0]);
      }
    }
    else
    {
      *v11 = -1073741801;
    }
    if ( !v12 )
      result = LdrpDropLastInProgressCount();
  }
  else
  {
    v11 = a8;
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             618,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             (__int64)"Status: 0x%08lx\n",
             *v11);
  return result;
}
