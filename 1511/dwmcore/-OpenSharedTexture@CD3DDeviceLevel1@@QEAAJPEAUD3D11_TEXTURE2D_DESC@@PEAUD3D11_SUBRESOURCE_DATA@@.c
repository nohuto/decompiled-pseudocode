/*
 * XREFs of ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180024924
 * Callers:
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x18002B180 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x1800715D0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenSharedTexture(
        __int64 **this,
        struct D3D11_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void *a4,
        bool a5,
        struct ID3D11Texture2D **a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rax
  struct ID3D11Texture2D **v11; // r14
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  int v16; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(this, &OPEN_SHARED_TEXTURE_EVENT_Start, a4);
  v9 = this[69];
  v10 = *v9;
  if ( a5 )
  {
    v11 = a6;
    v12 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v10 + 384))(
            this[69],
            a4,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            a6);
    v13 = v12;
    if ( v12 >= 0 )
    {
LABEL_5:
      ((void (__fastcall *)(struct ID3D11Texture2D *, struct D3D11_TEXTURE2D_DESC *))(*v11)->lpVtbl->GetDesc)(*v11, a2);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x871u);
  }
  else
  {
    v11 = a6;
    v16 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v10 + 224))(
            v9,
            a4,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            a6);
    v13 = v16;
    if ( v16 >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x877u);
  }
LABEL_6:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v14, &OPEN_SHARED_TEXTURE_EVENT_Stop);
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v13, 9u);
}
