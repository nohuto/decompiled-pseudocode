/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180054280
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800530AC (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800531E4 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053700 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180056088 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  int v1; // eax
  int v2; // ebx
  int v3; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, unsigned int *))(**((_QWORD **)this + 1) + 104LL))(
         *((_QWORD *)this + 1),
         &v6,
         &v5);
  v2 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x211u);
  }
  else
  {
    v3 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(&g_D3DDeviceManager, v6, v5);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x214u);
  }
  return v2 == 0;
}
