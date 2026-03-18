/*
 * XREFs of ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x18007E6B0
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180035440 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x1801735F0 (-CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800A19C0 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapInternal(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD **),
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  _QWORD *v7; // r14
  __int64 (__fastcall *v12)(_QWORD, GUID *, _QWORD **); // rax
  int v13; // eax
  unsigned int v14; // ebx
  _QWORD *v15; // r8
  int Internal; // eax
  int v18; // eax
  int v19; // eax
  char v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v22; // [rsp+A0h] [rbp+40h] BYREF

  v7 = a7;
  v22 = 0LL;
  v21 = 0LL;
  *a7 = 0LL;
  v12 = **a2;
  if ( *(_DWORD *)(a3 + 12) == 1 )
  {
    v13 = v12(a2, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v22);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x87Bu);
      goto LABEL_6;
    }
    v15 = v22;
  }
  else
  {
    v18 = v12(a2, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (_QWORD **)&v21);
    v14 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x886u);
      goto LABEL_6;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v21 + 96LL))(v21, 0LL, &a7);
    v14 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x888u);
      goto LABEL_6;
    }
    v15 = a7;
    v22 = a7;
  }
  v20 = a6;
  Internal = CD2DBitmap::CreateInternal(*(_QWORD *)(a1 + 8), a2, v15, a3, a4, a5, 0, v20, v7);
  v14 = Internal;
  if ( Internal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Internal, 0x89Au);
LABEL_6:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
  return v14;
}
