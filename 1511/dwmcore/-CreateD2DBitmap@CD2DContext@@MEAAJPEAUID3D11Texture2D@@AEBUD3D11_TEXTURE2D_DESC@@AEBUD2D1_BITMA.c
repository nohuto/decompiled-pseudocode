/*
 * XREFs of ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180022570
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x1800715D0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x1800ADD4C (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmap(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD **),
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  __int64 (__fastcall *v11)(_QWORD, GUID *, _QWORD **); // rbx
  int v12; // eax
  unsigned int v13; // edi
  _QWORD *v14; // r8
  int v15; // eax
  int v16; // eax
  int Internal; // eax
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp+40h] BYREF

  v6 = a6;
  v20 = 0LL;
  v19 = 0LL;
  *a6 = 0LL;
  v11 = **a2;
  if ( *(_DWORD *)(a3 + 12) == 1 )
  {
    v12 = v11(a2, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v20);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x716u);
      goto LABEL_12;
    }
    v14 = v20;
  }
  else
  {
    v15 = v11(a2, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (_QWORD **)&v19);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x721u);
      goto LABEL_12;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v19 + 96LL))(v19, 0LL, &a6);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x723u);
      goto LABEL_12;
    }
    v14 = a6;
    v20 = a6;
  }
  Internal = CD2DBitmap::CreateInternal(*(_QWORD *)(a1 + 8), a2, v14, a3, a4, a5, 0, v6);
  v13 = Internal;
  if ( Internal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Internal, 0x734u);
LABEL_12:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
  return v13;
}
