/*
 * XREFs of ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18014F070
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ @ 0x18014F1A8 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014F278 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ProcessRestoreContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetDisplay *a2)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  int v6; // eax

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  if ( v2
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 352LL))(*((_QWORD *)this + 2))
    && (!a2 || a2 == *((struct IRenderTargetDisplay **)this + 2)) )
  {
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 472));
    v3 = v6;
    if ( v6 >= 0 )
      CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 472));
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD3u);
  }
  return v3;
}
