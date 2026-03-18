/*
 * XREFs of ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x1801325D8
 * Callers:
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18001B95C (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180034248 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?IsMonitorSpecificContent@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ @ 0x18014408C (-IsMonitorSpecificContent@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceInfo(
        CRenderTargetBitmap *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        struct _GUID *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax

  v4 = *((_QWORD *)this + 16);
  v5 = -2003292404;
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct DisplayId *, _QWORD))(*(_QWORD *)v4 + 104LL))(
           v4,
           a2,
           a3,
           0LL);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1D3u);
  }
  return v5;
}
