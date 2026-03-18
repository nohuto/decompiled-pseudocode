/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C
 * Callers:
 *     DxgkAddAdapter @ 0x1C00C3DC0 (DxgkAddAdapter.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkSqmCommonGeneric @ 0x1C000CDF0 (DxgkSqmCommonGeneric.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0010008 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C001E6D0 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00784E4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00AAAC0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C00BE5D0 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?SqmAdapterInformation@DXGADAPTER@@QEAAXXZ @ 0x1C00BE7A0 (-SqmAdapterInformation@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C00C1EDC (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00C21D8 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiReportAdapter @ 0x1C00C3D40 (DpiReportAdapter.c)
 *     ?ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01201F0 (-ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        struct _DXGK_ADAPTER_CAPS *a4)
{
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGADAPTER *v13; // rbx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ADAPTER_RENDER *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // r15
  int v29; // r12d
  int *AdapterType; // rax
  int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // [rsp+C0h] [rbp-98h]
  int v35; // [rsp+D8h] [rbp-80h]
  int Data; // [rsp+100h] [rbp-58h] BYREF
  BOOL v37; // [rsp+104h] [rbp-54h] BYREF
  _QWORD v38[7]; // [rsp+108h] [rbp-50h] BYREF

  v8 = (char *)operator new(0xC48uLL, (__int64)a2, 1, (POOL_TYPE)512);
  if ( v8 )
    v13 = DXGADAPTER::DXGADAPTER(v8, this);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = DXGADAPTER::Initialize(v13, a2, a4, v12);
    if ( v14 >= 0 )
    {
      if ( g_bVSyncEnabledForLogging && *((_QWORD *)v13 + 248) && *((_QWORD *)v13 + 247) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v13, 0LL);
        if ( (int)COREADAPTERACCESS::AcquireExclusive(v38) >= 0 )
          ADAPTER_RENDER::ControlVSyncForLogging(*((ADAPTER_RENDER **)v13 + 248), 1u);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      }
      if ( bTracingEnabled )
      {
        v26 = *((_QWORD *)v13 + 247);
        if ( v26 )
          v27 = *(_DWORD *)(v26 + 80);
        else
          LOBYTE(v27) = 0;
        v28 = *((_QWORD *)v13 + 28);
        v29 = *((_DWORD *)v13 + 538);
        AdapterType = DXGADAPTER::GetAdapterType(v13, &v37);
        v31 = *((_DWORD *)v13 + 341);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v32 = (unsigned int)v31 >> 14;
          LOBYTE(v32) = v32 & 7;
          Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
            v32,
            &EventCreateAdapter,
            v31 < 0,
            (__int64)a2,
            (char)v13,
            v27,
            *((_QWORD *)v13 + 164),
            *((_DWORD *)v13 + 330),
            *((_QWORD *)v13 + 166),
            *((_DWORD *)v13 + 334),
            *((_DWORD *)v13 + 335),
            *((_DWORD *)v13 + 337),
            *((_DWORD *)v13 + 338),
            *((_DWORD *)v13 + 339),
            *((_DWORD *)v13 + 342),
            *((_DWORD *)v13 + 336),
            *((_DWORD *)v13 + 340),
            v31,
            ((unsigned int)v31 >> 10) & 0xF,
            v32,
            ((unsigned int)v31 >> 17) & 7,
            v31 < 0,
            *((_DWORD *)v13 + 343),
            *((_DWORD *)v13 + 344),
            v34,
            *((_DWORD *)v13 + 346),
            *((_DWORD *)v13 + 347),
            v35,
            v29,
            *AdapterType,
            v28);
        }
      }
      DpiReportAdapter(a2, v13);
      if ( *((_QWORD *)v13 + 248) )
        DXGADAPTER::ReportNodeMetadata(v13);
      DXGADAPTER::SqmAdapterInformation(v13);
      DXGADAPTER::AdapterTelemetry((__int64)v13, 0);
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 22) + 64LL) + 2504LL) = v13;
      v18 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 248);
      if ( !v18 || (v14 = ADAPTER_RENDER::FinalizeInitialization(v18, v15, v16, v17), v14 >= 0) )
      {
        DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 376));
        v23 = *((_QWORD *)this + 52);
        *(_QWORD *)v13 = v23;
        *((_QWORD *)v13 + 1) = (char *)this + 416;
        if ( *(DXGGLOBAL **)(v23 + 8) != (DXGGLOBAL *)((char *)this + 416) )
          __fastfail(3u);
        *(_QWORD *)(v23 + 8) = v13;
        *((_QWORD *)this + 52) = v13;
        DXGFASTMUTEX::Release((struct _KTHREAD **)this + 47);
        Data = 0;
        if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
                    (__int64)this,
                    (__int64 (__fastcall *)(_QWORD *, __int64))TotalAdaptersForSQMCallback,
                    (__int64)&Data,
                    0LL) >= 0 )
          DxgkSqmCommonGeneric(0x14FDu, 4u, &Data, 4u);
        *a3 = v13;
        return (unsigned int)v14;
      }
      v33 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v33 + 24) = -1073741801LL;
      *(_QWORD *)(v33 + 32) = 1129LL;
      WdLogEvent5_WdWarning(v33);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 22) + 64LL) + 2504LL) = 0LL;
      DXGADAPTER::Destroy(v13);
    }
    DXGADAPTER::`scalar deleting destructor'(v13);
    return (unsigned int)v14;
  }
  v25 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
  *(_QWORD *)(v25 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v25);
  return 3221225495LL;
}
