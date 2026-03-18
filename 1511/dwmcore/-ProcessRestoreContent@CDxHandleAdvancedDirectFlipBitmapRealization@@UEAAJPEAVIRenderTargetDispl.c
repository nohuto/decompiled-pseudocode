/*
 * XREFs of ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18015DB30
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ @ 0x18015DC68 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DD38 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
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
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 360LL))(*((_QWORD *)this + 2))
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
