/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4
 * Callers:
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0071B10 (-DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00CE560 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00E9244 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0157668 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000C4EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C001CEA0 (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00A26A8 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ??0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00A2A80 (--0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(struct DXGPROCESS **a1)
{
  struct _EPROCESS *CurrentProcess; // rbp
  __int64 v3; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v5; // rdx
  struct DXGPROCESS *v6; // rax
  __int64 v7; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  struct DXGGLOBAL *Global; // rax
  DXGPROCESS *v10; // rbx
  __int64 v11; // rcx
  int v12; // edi
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v3);
  if ( ProcessDxgProcess )
  {
    *a1 = ProcessDxgProcess;
    return 0LL;
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v6 = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( v6 )
  {
    *a1 = v6;
  }
  else
  {
    PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x170uLL, 0x50677844u);
    if ( PoolWithQuotaTag )
    {
      Global = DXGGLOBAL::GetGlobal(v7);
      v10 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, Global, CurrentProcess);
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v16 + 24) = 107LL;
      WdLogEvent5_WdLowResource(v16);
      v12 = -1073741801;
      goto LABEL_12;
    }
    v12 = DXGPROCESS::Initialize(v10);
    if ( v12 < 0 )
    {
      DXGPROCESS::`scalar deleting destructor'(v10);
      goto LABEL_12;
    }
    if ( !*((_BYTE *)v10 + 289) )
    {
      v13 = (char *)DXGGLOBAL::GetGlobal(v11) + 240;
      v14 = *(_QWORD *)v13;
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 )
        __fastfail(3u);
      *(_QWORD *)v10 = v14;
      *((_QWORD *)v10 + 1) = v13;
      *(_QWORD *)(v14 + 8) = v10;
      *(_QWORD *)v13 = v10;
    }
    PsSetProcessDxgProcess(CurrentProcess, v10);
    *a1 = v10;
  }
  v12 = 0;
LABEL_12:
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v12;
}
