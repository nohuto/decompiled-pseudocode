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

__int64 __fastcall LdrpLoadDllInternal(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8)
{
  __int64 result; // rax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      414,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      "DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  v19 = 0LL;
  result = LdrpFastpthReloadedDll(a1, a3, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      LdrpDetectDetour();
      v12 = a8;
      v14 = LdrpFindOrPrepareLoadingModule(a1, a2, a3, a4, a5, (__int64)&v19, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LOBYTE(v15) = 1;
        LdrpProcessWork(*(_QWORD *)(v19 + 176), v15);
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
    result = LdrpDrainWorkQueue(1LL);
    if ( v19 )
    {
      v16 = LdrpHandleReplacedModule();
      *a7 = v16;
      if ( v19 != v16 )
      {
        LdrpFreeReplacedModule();
        v19 = *a7;
      }
      if ( *(_QWORD *)(v19 + 176) )
        LdrpCondenseGraph(*(_QWORD *)(v19 + 152));
      if ( *v12 >= 0 )
      {
        v17 = LdrpPrepareModuleForExecution(v19, v12);
        *v12 = v17;
        if ( v17 >= 0 )
        {
          v18 = LdrpBuildForwarderLink(a6, v19);
          *v12 = v18;
          if ( v18 >= 0 && !LdrInitState )
            LdrpPinModule(v19);
        }
      }
      result = LdrpFreeLoadContextOfNode(*(_QWORD *)(v19 + 152), v12);
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        LdrpDecrementModuleLoadCount(v19);
        result = LdrpDereferenceModule(v19);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = LdrpDropLastInProgressCount();
  }
  else
  {
    v12 = a8;
    *a8 = result;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    return LdrpLogDbgPrint(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             618,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             "Status: 0x%08lx\n",
             *v12);
  return result;
}
