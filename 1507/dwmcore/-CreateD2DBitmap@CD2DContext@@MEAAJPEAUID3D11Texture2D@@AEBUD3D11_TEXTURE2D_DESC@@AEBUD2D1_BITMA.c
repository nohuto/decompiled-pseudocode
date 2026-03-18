/*
 * XREFs of ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180072CE0
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180055A60 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 * Callees:
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x18005E264 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmap(
        __int64 a1,
        _QWORD **a2,
        __int64 a3,
        _OWORD *a4,
        int a5,
        CBoundsBitmap **a6)
{
  CBoundsBitmap **v8; // r14
  __int64 (__fastcall *v11)(_QWORD **, GUID *, CBoundsBitmap ***); // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r8
  int Internal; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  CBoundsBitmap **v20; // [rsp+90h] [rbp+18h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v8 = a6;
  *a6 = 0LL;
  v11 = (__int64 (__fastcall *)(_QWORD **, GUID *, CBoundsBitmap ***))**a2;
  if ( *(_DWORD *)(a3 + 12) == 1 )
  {
    v12 = v11(a2, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v20);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x70Du);
      goto LABEL_5;
    }
    v14 = (__int64)v20;
  }
  else
  {
    v17 = v11(a2, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (CBoundsBitmap ***)&v19);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x718u);
      goto LABEL_5;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, CBoundsBitmap ***))(*(_QWORD *)v19 + 96LL))(v19, 0LL, &a6);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x71Au);
      goto LABEL_5;
    }
    v14 = (__int64)a6;
    v20 = a6;
  }
  Internal = CD2DBitmap::CreateInternal(*(struct CD2DResourceManager **)(a1 + 8), (__int64)a2, v14, a3, a4, a5, 0, v8);
  v13 = Internal;
  if ( Internal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Internal, 0x72Bu);
LABEL_5:
  if ( v20 )
    (*((void (__fastcall **)(CBoundsBitmap **))*v20 + 2))(v20);
  return v13;
}
