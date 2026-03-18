/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18005C190
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18005B1D0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18005B308 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B7C0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800724C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  __int64 v1; // rdi
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 1);
  v6 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v1 + 104LL))(v1, &v7, &v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x206u);
  }
  else
  {
    v4 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(&g_D3DDeviceManager, v7, v6);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x209u);
  }
  return v3 == 0;
}
