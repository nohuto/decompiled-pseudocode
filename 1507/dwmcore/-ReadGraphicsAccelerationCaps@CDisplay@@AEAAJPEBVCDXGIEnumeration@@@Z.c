/*
 * XREFs of ?ReadGraphicsAccelerationCaps@CDisplay@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x180057BBC
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180054F84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800563D0 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?GetDeviceCapsForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCDirect3DCaps@@@Z @ 0x1800578CC (-GetDeviceCapsForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCDirect3DCaps@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplay::ReadGraphicsAccelerationCaps(CDisplay *this, const struct CDXGIEnumeration *a2)
{
  struct _LUID v3; // rdx
  int AdapterNoRefFromLuid; // eax
  unsigned int v6; // ebx
  int DeviceCapsForAdapter; // eax
  _DWORD v9[4]; // [rsp+30h] [rbp-9h] BYREF
  __m128i si128; // [rsp+40h] [rbp+7h]
  int v11; // [rsp+50h] [rbp+17h]
  int v12; // [rsp+54h] [rbp+1Bh]
  int v13; // [rsp+58h] [rbp+1Fh]
  int v14; // [rsp+5Ch] [rbp+23h]
  int v15; // [rsp+60h] [rbp+27h]
  __int64 v16; // [rsp+68h] [rbp+2Fh]
  __int128 v17; // [rsp+70h] [rbp+37h]
  __int128 v18; // [rsp+80h] [rbp+47h]
  struct CDXGIAdapterLimited *v19; // [rsp+A0h] [rbp+67h] BYREF

  v19 = 0LL;
  v3 = (struct _LUID)*((_QWORD *)this + 104);
  v9[1] = 0;
  v9[0] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = 0LL;
  v16 = 0xFFFFLL;
  v18 = 0LL;
  AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(a2, v3, &v19);
  v6 = AdapterNoRefFromLuid;
  if ( AdapterNoRefFromLuid < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AdapterNoRefFromLuid, 0x15Au);
  }
  else
  {
    DeviceCapsForAdapter = CD3DDeviceTable::GetDeviceCapsForAdapter(
                             (CD3DDeviceTable *)&g_deviceTable,
                             (struct _LUID *)v19,
                             (struct CDirect3DCaps *)v9);
    v6 = DeviceCapsForAdapter;
    if ( DeviceCapsForAdapter < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceCapsForAdapter, 0x15Fu);
    else
      *((_DWORD *)this + 207) = si128.m128i_i32[1];
  }
  return v6;
}
