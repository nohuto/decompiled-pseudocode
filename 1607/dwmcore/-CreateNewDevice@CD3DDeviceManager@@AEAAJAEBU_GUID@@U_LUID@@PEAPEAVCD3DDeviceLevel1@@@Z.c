/*
 * XREFs of ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800142A8
 * Callers:
 *     ?GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800356C0 (-GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 * Callees:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180021598 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILP.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180035098 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800365F8 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800376DC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateNewDevice(
        CDXGIEnumeration **this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  struct CD3DDeviceLevel1 *v4; // rbx
  int AdapterNoRefFromLuid; // eax
  unsigned int v9; // edi
  __int64 *v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct CD3DDeviceLevel1 *v15; // rbx
  CSurfaceManager *v16; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  struct CD3DDeviceLevel1 *v20; // [rsp+60h] [rbp+8h] BYREF
  _LUID v21; // [rsp+70h] [rbp+18h]
  struct CDXGIAdapterLimited *v22; // [rsp+78h] [rbp+20h] BYREF

  v21 = a3;
  v22 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  v20 = 0LL;
  AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(this[9], a3, &v22);
  v9 = AdapterNoRefFromLuid;
  if ( AdapterNoRefFromLuid < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, AdapterNoRefFromLuid, 0x3ADu);
  }
  else
  {
    v10 = (__int64 *)(this + 18);
    v11 = DynArrayImpl<0>::Grow((int)this + 144, 40, 1, 0, 0LL);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v11, 0x3BBu);
      return v9;
    }
    v12 = CD3DDeviceLevel1::Create(a2, this[9], v22, (struct IMILPoolManager *)this, (enum D3D_FEATURE_LEVEL)&v20);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v13 = *((unsigned int *)this + 42);
      *((_DWORD *)this + 42) = v13 + 1;
      v14 = *((unsigned int *)this + 64);
      if ( (unsigned int)v14 < (unsigned int)v13 )
      {
        v18 = *v10;
        v19 = 5 * v13;
        *(_OWORD *)(v18 + 8 * v19) = *(_OWORD *)(*v10 + 40 * v14);
        *(_OWORD *)(v18 + 8 * v19 + 16) = *(_OWORD *)(v18 + 40 * v14 + 16);
        *(_QWORD *)(v18 + 8 * v19 + 32) = *(_QWORD *)(v18 + 40 * v14 + 32);
      }
      v15 = v20;
      *(_QWORD *)(*v10 + 40LL * *((unsigned int *)this + 64)) = v20;
      *(_QWORD *)(*v10 + 40LL * *((unsigned int *)this + 64) + 8) = *((_QWORD *)v15 + 81);
      *(struct _GUID *)(*v10 + 40LL * *((unsigned int *)this + 64) + 16) = *a2;
      *(_BYTE *)(*v10 + 40LL * (unsigned int)(*((_DWORD *)this + 64))++ + 32) = CD3DDeviceManager::HardwareProtectionRequired(
                                                                                  (CD3DDeviceManager *)this,
                                                                                  v21);
      *a4 = v15;
      v16 = this[10];
      if ( v16 )
        CSurfaceManager::ResetTokenThread(v16);
      return v9;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v12, 0x3C1u);
    v4 = v20;
  }
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 408));
  return v9;
}
