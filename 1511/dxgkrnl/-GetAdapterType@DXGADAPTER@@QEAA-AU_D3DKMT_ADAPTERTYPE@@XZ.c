/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkCreateDevice @ 0x1C008B790 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00D6934 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C012E49C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiIsHybridDiscreteAdapter @ 0x1C00236B0 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C00236BC (DpiIsHybridIntegratedAdapter.c)
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, BOOL *a2)
{
  int *v3; // r10
  BOOL v4; // r8d
  bool v5; // zf
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  int v9; // eax
  bool IsHybridIntegratedAdapter; // al
  int v12; // r8d
  int *v13; // r10
  __int64 v14; // rcx
  bool IsHybridDiscreteAdapter; // al
  int v16; // edx

  v3 = a2;
  v4 = *((_QWORD *)this + 249) != 0LL;
  v5 = *((_QWORD *)this + 248) == 0LL;
  *a2 = v4;
  v6 = v4 ^ (v4 ^ (unsigned __int8)(2 * !v5)) & 2;
  v7 = *((_DWORD *)this + 71);
  v8 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(4 * ((v7 & 4) != 0))) & 4;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * (v7 & 1))) & 8;
  v5 = byte_1C0046CDC == 0;
  *v3 = v9 ^ ((unsigned __int8)v9 ^ ((BYTE1(v7) & 1) << 6)) & 0x40;
  if ( !v5 )
  {
    IsHybridIntegratedAdapter = DpiIsHybridIntegratedAdapter(*((_QWORD *)this + 22));
    *v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(32 * IsHybridIntegratedAdapter)) & 0x20;
    IsHybridDiscreteAdapter = DpiIsHybridDiscreteAdapter(v14);
    *v3 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(16 * IsHybridDiscreteAdapter)) & 0x10;
  }
  return v3;
}
