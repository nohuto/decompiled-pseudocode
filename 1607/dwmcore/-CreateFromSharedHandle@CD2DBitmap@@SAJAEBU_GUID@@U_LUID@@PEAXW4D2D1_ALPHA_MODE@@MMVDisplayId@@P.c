/*
 * XREFs of ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800B29C0
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180035440 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v9; // ebx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v8 = CD3DDeviceManager::OpenSharedHandleAsD2DBitmap((__int64)&qword_1801F0020, a1, a2, a3, a4, a5, a6, a7, v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1Fu);
    if ( v11[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  }
  else
  {
    *a8 = v11[0];
  }
  return v9;
}
