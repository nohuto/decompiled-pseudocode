/*
 * XREFs of RmpActivityHostOnAppliedResourceSetChange @ 0x180041048
 * Callers:
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180036330 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x18003E488 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@Executio.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180009200 (RmpActivityImportanceMergeVectors.c)
 *     RmpActivityHostActOnResourceSets @ 0x180040ADC (RmpActivityHostActOnResourceSets.c)
 *     RmpActivityHostOnGpuMonitoredResourceSetCountChange @ 0x180041108 (RmpActivityHostOnGpuMonitoredResourceSetCountChange.c)
 */

int __fastcall RmpActivityHostOnAppliedResourceSetChange(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  LPVOID v5; // rdx
  char v7; // si
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // eax
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = RmSvcGlobals;
  if ( a4 )
  {
    v7 = 0;
    v8 = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = 1;
    v8 = 1LL;
  }
  if ( (*(_DWORD *)(a3 + 1764) & 0x80000) != 0 )
    RmpActivityHostOnGpuMonitoredResourceSetCountChange(a2, (char *)RmSvcGlobals + 112, v8);
  v9 = *(_DWORD *)(a2 + 936);
  if ( v7 )
  {
    v10 = RmpActivityImportanceMergeVectors(v9, *(_DWORD *)(a3 + 1428));
  }
  else
  {
    v12 = 1;
    RmpActivityHostActOnResourceSets(
      a2,
      (__int64)v5,
      1,
      (__int64 (__fastcall *)(__int64, __int64, __int64))RmpActivityHostComputeImportanceCallback,
      (__int64)&v12);
    v10 = v12;
  }
  *(_DWORD *)(a2 + 936) = v10;
  return RmpActivityHostOnImportanceChange((struct _RM_ACTIVITY_HOST *)a2, v9);
}
