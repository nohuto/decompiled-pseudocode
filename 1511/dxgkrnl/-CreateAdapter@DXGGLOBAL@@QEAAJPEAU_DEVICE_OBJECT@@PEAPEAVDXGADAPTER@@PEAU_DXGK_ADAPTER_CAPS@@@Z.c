/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498
 * Callers:
 *     DxgkAddAdapter @ 0x1C00D4230 (DxgkAddAdapter.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkSqmCommonGeneric @ 0x1C000D940 (DxgkSqmCommonGeneric.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0011778 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C001E790 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00BE388 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     DpiReportAdapter @ 0x1C00D4280 (DpiReportAdapter.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00D5A58 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C00D6764 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00D6934 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 *     ?SqmAdapterInformation@DXGADAPTER@@QEAAXXZ @ 0x1C00D6CEC (-SqmAdapterInformation@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C00DA490 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0125D38 (-ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0129444 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        union _LARGE_INTEGER *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        struct _DXGK_ADAPTER_CAPS *a4)
{
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGADAPTER *v13; // rbx
  int v14; // edi
  ADAPTER_RENDER *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  union _LARGE_INTEGER v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edi
  __int64 v25; // r15
  int v26; // r12d
  int *AdapterType; // rax
  int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // [rsp+C0h] [rbp-98h]
  int v32; // [rsp+D8h] [rbp-80h]
  int Data; // [rsp+100h] [rbp-58h] BYREF
  BOOL v34; // [rsp+104h] [rbp-54h] BYREF
  _QWORD v35[7]; // [rsp+108h] [rbp-50h] BYREF

  v8 = operator new(0xC58uLL, (__int64)a2, 1, (POOL_TYPE)512);
  if ( v8 )
    v13 = DXGADAPTER::DXGADAPTER(v8, (struct DXGGLOBAL *)this);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = DXGADAPTER::Initialize(v13, a2, a4);
    if ( v14 >= 0 )
    {
      if ( g_bVSyncEnabledForLogging && *((_QWORD *)v13 + 249) && *((_QWORD *)v13 + 248) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v13, 0LL);
        if ( (int)COREADAPTERACCESS::AcquireExclusive(v35) >= 0 )
          ADAPTER_RENDER::ControlVSyncForLogging(*((ADAPTER_RENDER **)v13 + 249), 1u);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
      }
      if ( bTracingEnabled )
      {
        v23 = *((_QWORD *)v13 + 248);
        if ( v23 )
          v24 = *(_DWORD *)(v23 + 104);
        else
          LOBYTE(v24) = 0;
        v25 = *((_QWORD *)v13 + 28);
        v26 = *((_DWORD *)v13 + 542);
        AdapterType = DXGADAPTER::GetAdapterType(v13, &v34);
        v28 = *((_DWORD *)v13 + 343);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v29 = (unsigned int)v28 >> 14;
          LOBYTE(v29) = v29 & 7;
          Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
            v29,
            &EventCreateAdapter,
            v28 < 0,
            (__int64)a2,
            (char)v13,
            v24,
            *((_QWORD *)v13 + 165),
            *((_DWORD *)v13 + 332),
            *((_QWORD *)v13 + 167),
            *((_DWORD *)v13 + 336),
            *((_DWORD *)v13 + 337),
            *((_DWORD *)v13 + 339),
            *((_DWORD *)v13 + 340),
            *((_DWORD *)v13 + 341),
            *((_DWORD *)v13 + 344),
            *((_DWORD *)v13 + 338),
            *((_DWORD *)v13 + 342),
            v28,
            ((unsigned int)v28 >> 10) & 0xF,
            v29,
            ((unsigned int)v28 >> 17) & 7,
            v28 < 0,
            *((_DWORD *)v13 + 345),
            *((_DWORD *)v13 + 346),
            v31,
            *((_DWORD *)v13 + 348),
            *((_DWORD *)v13 + 349),
            v32,
            v26,
            *AdapterType,
            v25);
        }
      }
      DpiReportAdapter((__int64)a2, (__int64)v13);
      if ( *((_QWORD *)v13 + 249) )
        DXGADAPTER::ReportNodeMetadata(v13);
      DXGADAPTER::SqmAdapterInformation(v13);
      DXGADAPTER::AdapterTelemetry(v13, 0LL);
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 22) + 64LL) + 2544LL) = v13;
      v15 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 249);
      if ( !v15 || (v14 = ADAPTER_RENDER::FinalizeInitialization(v15), v14 >= 0) )
      {
        DXGFASTMUTEX::Acquire(this + 59);
        v20 = this[67];
        *(union _LARGE_INTEGER *)v13 = v20;
        *((_QWORD *)v13 + 1) = this + 67;
        if ( *(union _LARGE_INTEGER **)(v20.QuadPart + 8) != &this[67] )
          __fastfail(3u);
        *(_QWORD *)(v20.QuadPart + 8) = v13;
        this[67].QuadPart = (LONGLONG)v13;
        DXGFASTMUTEX::Release((DXGFASTMUTEX *)&this[59]);
        Data = 0;
        if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
                    (__int64)this,
                    (__int64 (__fastcall *)(_QWORD *, __int64))TotalAdaptersForSQMCallback,
                    (__int64)&Data,
                    0) >= 0 )
          DxgkSqmCommonGeneric(0x14FDu, 4u, &Data, 4u);
        *a3 = v13;
        return (unsigned int)v14;
      }
      v30 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v30 + 24) = -1073741801LL;
      *(_QWORD *)(v30 + 32) = 1107LL;
      WdLogEvent5_WdWarning(v30);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 22) + 64LL) + 2544LL) = 0LL;
      DXGADAPTER::Destroy(v13);
    }
    DXGADAPTER::`scalar deleting destructor'(v13);
    return (unsigned int)v14;
  }
  v22 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
  *(_QWORD *)(v22 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v22);
  return 3221225495LL;
}
