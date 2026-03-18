/*
 * XREFs of ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620
 * Callers:
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0157668 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C015832C (-DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z.c)
 *     ?DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C01588B4 (-DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@.c)
 *     ?DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C0158AE8 (-DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z.c)
 *     ?DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C0158CA8 (-DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z.c)
 *     ?DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C0158E38 (-DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z.c)
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0159804 (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C015A340 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?SetMitigatedRangesUpdateIrp@ADAPTER_RENDER@@QEAAJIPEAU_IRP@@@Z @ 0x1C015A768 (-SetMitigatedRangesUpdateIrp@ADAPTER_RENDER@@QEAAJIPEAU_IRP@@@Z.c)
 * Callees:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnsureVirtualGpuProcess(ADAPTER_RENDER *this)
{
  struct DXGPROCESS **v1; // rbx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  struct DXGPROCESS *v8; // rcx
  __int64 v9; // rax

  v1 = (struct DXGPROCESS **)((char *)this + 1088);
  if ( !*((_QWORD *)this + 136) )
  {
    CurrentProcess = PsGetCurrentProcess(this);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v3);
    *v1 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( !ProcessDxgProcess )
      DXGPROCESS::CreateDxgProcess(v1);
  }
  v5 = PsGetCurrentProcess(this);
  v7 = PsGetProcessDxgProcess(v5, v6);
  v8 = *v1;
  if ( *v1 == (struct DXGPROCESS *)v7 )
  {
    *((_BYTE *)v8 + 291) = 1;
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 806LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
