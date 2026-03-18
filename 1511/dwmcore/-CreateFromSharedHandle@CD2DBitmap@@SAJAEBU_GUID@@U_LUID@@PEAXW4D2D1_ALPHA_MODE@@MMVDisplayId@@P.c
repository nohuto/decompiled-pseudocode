/*
 * XREFs of ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800AFA0C
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x1800715D0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmap::CreateFromSharedHandle(
        const struct _GUID *a1,
        struct _LUID a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdi
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v8 = CD3DDeviceManager::OpenSharedHandleAsD2DBitmap((__int64)&qword_1801A3D80, a1, a2, a3, a4, a5, a6, a7, v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1Fu);
    v10 = v12[0];
  }
  else
  {
    v10 = 0LL;
    *a8 = v12[0];
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
