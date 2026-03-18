/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC
 * Callers:
 *     DxgkAddAdapter @ 0x1C00E97BC (DxgkAddAdapter.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0011828 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0025510 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C009FD58 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00D5328 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3B80 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C00E45B4 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E477C (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C00E733C (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     DpiReportAdapter @ 0x1C00E9744 (DpiReportAdapter.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01451AC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0148AF8 (-ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        struct _DXGK_ADAPTER_CAPS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGADAPTER *v14; // rbx
  int v15; // edi
  ADAPTER_RENDER *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DXGADAPTER **v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // r15
  int v28; // r12d
  int *AdapterType; // rax
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // [rsp+C0h] [rbp-B8h]
  int v34; // [rsp+D8h] [rbp-A0h]
  BOOL v35; // [rsp+100h] [rbp-78h] BYREF
  _QWORD v36[10]; // [rsp+110h] [rbp-68h] BYREF

  v9 = (char *)operator new(0xE80uLL, (__int64)a2, 1, (POOL_TYPE)512);
  if ( v9 )
    v14 = DXGADAPTER::DXGADAPTER(v9, this);
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = DXGADAPTER::Initialize(v14, a2, a4);
    if ( v15 >= 0 )
    {
      if ( g_bVSyncEnabledForLogging && *((_QWORD *)v14 + 267) && *((_QWORD *)v14 + 266) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v14, 0LL);
        if ( (int)COREADAPTERACCESS::AcquireExclusive(v36) >= 0 )
          ADAPTER_RENDER::ControlVSyncForLogging(*((ADAPTER_RENDER **)v14 + 267), 1u);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
      }
      if ( bTracingEnabled )
      {
        v25 = *((_QWORD *)v14 + 266);
        if ( v25 )
          v26 = *(_DWORD *)(v25 + 80);
        else
          LOBYTE(v26) = 0;
        v27 = *((_QWORD *)v14 + 30);
        v28 = *((_DWORD *)v14 + 578);
        AdapterType = DXGADAPTER::GetAdapterType(v14, &v35);
        v30 = *((_DWORD *)v14 + 377);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v31 = (unsigned int)v30 >> 14;
          LOBYTE(v31) = v31 & 7;
          Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
            v31,
            &EventCreateAdapter,
            v30 < 0,
            (__int64)a2,
            (char)v14,
            v26,
            *((_QWORD *)v14 + 182),
            *((_DWORD *)v14 + 366),
            *((_QWORD *)v14 + 184),
            *((_DWORD *)v14 + 370),
            *((_DWORD *)v14 + 371),
            *((_DWORD *)v14 + 373),
            *((_DWORD *)v14 + 374),
            *((_DWORD *)v14 + 375),
            *((_DWORD *)v14 + 378),
            *((_DWORD *)v14 + 372),
            *((_DWORD *)v14 + 376),
            v30,
            ((unsigned int)v30 >> 10) & 0xF,
            v31,
            ((unsigned int)v30 >> 17) & 7,
            v30 < 0,
            *((_DWORD *)v14 + 379),
            *((_DWORD *)v14 + 380),
            v33,
            *((_DWORD *)v14 + 382),
            *((_DWORD *)v14 + 383),
            v34,
            v28,
            *AdapterType,
            v27);
        }
      }
      DpiReportAdapter(a2, v14);
      if ( *((_QWORD *)v14 + 267) )
        DXGADAPTER::ReportNodeMetadata(v14);
      DXGADAPTER::AdapterTelemetry((__int64)v14, 0, (__int64)a5);
      v15 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 24) + 64LL) + 3688LL) = v14;
      v16 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 267);
      if ( !v16 || (v15 = ADAPTER_RENDER::FinalizeInitialization(v16), v15 >= 0) )
      {
        DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 376));
        v21 = (DXGADAPTER **)((char *)this + 416);
        v22 = *((_QWORD *)this + 52);
        if ( *(DXGGLOBAL **)(v22 + 8) != (DXGGLOBAL *)((char *)this + 416) )
          __fastfail(3u);
        *(_QWORD *)v14 = v22;
        *((_QWORD *)v14 + 1) = v21;
        *(_QWORD *)(v22 + 8) = v14;
        *v21 = v14;
        DXGFASTMUTEX::Release((struct _KTHREAD **)this + 47);
        *a3 = v14;
        return (unsigned int)v15;
      }
      v32 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v32 + 24) = -1073741801LL;
      *(_QWORD *)(v32 + 32) = 1067LL;
      WdLogEvent5_WdWarning(v32);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 24) + 64LL) + 3688LL) = 0LL;
      DXGADAPTER::Destroy(v14);
    }
    DXGADAPTER::`scalar deleting destructor'(v14);
    return (unsigned int)v15;
  }
  v24 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
  *(_QWORD *)(v24 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v24);
  return 3221225495LL;
}
