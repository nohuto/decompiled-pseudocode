/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00784E4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 *     DxgkCreateDevice @ 0x1C008E3F0 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C0127FA4 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiIsHybridDiscreteAdapter @ 0x1C0023B78 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C0023B84 (DpiIsHybridIntegratedAdapter.c)
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, BOOL *a2)
{
  int *v2; // r10
  BOOL v3; // r8d
  bool v4; // zf
  int v5; // edx
  int v6; // r8d
  bool IsHybridIntegratedAdapter; // al
  int v9; // r11d
  int *v10; // r10
  __int64 v11; // rcx
  bool IsHybridDiscreteAdapter; // al
  int v13; // edx

  v2 = a2;
  v3 = *((_QWORD *)this + 248) != 0LL;
  v4 = *((_QWORD *)this + 247) == 0LL;
  *a2 = v3;
  v5 = v3 ^ (v3 ^ (unsigned __int8)(2 * !v4)) & 2;
  v6 = *((_DWORD *)this + 71);
  v4 = byte_1C0046C5C == 0;
  *v2 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(4 * ((v6 & 2) != 0))) & 4 ^ ((unsigned __int8)(v5 ^ (v5 ^ (4 * ((v6 & 2) != 0))) & 4) ^ (unsigned __int8)(8 * (v6 & 1))) & 8 ^ ((unsigned __int8)(v5 ^ (v5 ^ (4 * ((v6 & 2) != 0))) & 4 ^ (v5 ^ (v5 ^ (4 * ((v6 & 2) != 0))) & 4 ^ (8 * (v6 & 1))) & 8) ^ ((unsigned __int8)v6 >> 7 << 6)) & 0x40;
  if ( !v4 )
  {
    IsHybridIntegratedAdapter = DpiIsHybridIntegratedAdapter(*((_QWORD *)this + 22));
    *v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(32 * IsHybridIntegratedAdapter)) & 0x20;
    IsHybridDiscreteAdapter = DpiIsHybridDiscreteAdapter(v11);
    *v2 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(16 * IsHybridDiscreteAdapter)) & 0x10;
  }
  return v2;
}
