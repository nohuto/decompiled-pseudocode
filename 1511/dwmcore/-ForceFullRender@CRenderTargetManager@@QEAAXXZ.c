/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18007B82C
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180094AF8 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801017C8 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  __int64 v1; // rsi

  v1 = 0LL;
  if ( *((_DWORD *)this + 14) && *((_DWORD *)this + 12) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v1) + 160LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v1));
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 12) );
  }
}
