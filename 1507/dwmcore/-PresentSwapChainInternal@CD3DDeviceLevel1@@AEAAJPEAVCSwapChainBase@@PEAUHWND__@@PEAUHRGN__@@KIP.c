/*
 * XREFs of ?PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEA_NPEAURenderTargetPresentParameters@@@Z @ 0x1800DD61C
 * Callers:
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURenderTargetPresentParameters@@@Z @ 0x1800DD7BC (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURende.c)
 * Callees:
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180015A60 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042460 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18008B0F0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18013AD0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PresentSwapChainInternal(
        CD3DDeviceLevel1 *this,
        HRGN *a2,
        HWND hWnd,
        HRGN a4,
        unsigned int a5,
        unsigned int a6,
        bool *a7,
        struct RenderTargetPresentParameters *a8)
{
  bool *v8; // r14
  struct RenderTargetPresentParameters *v10; // r13
  int v14; // ebx
  struct _LUID v15; // rcx
  unsigned int v16; // ebx

  v8 = a7;
  v10 = a8;
  *a7 = 0;
  do
  {
    LODWORD(a7) = CSwapChainBase::Present(a2, a4, a6, a5, v10);
    v14 = (int)a7;
  }
  while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 896), (int)a7) );
  *((_BYTE *)this + 1071) = 0;
  switch ( v14 )
  {
    case -2147467259:
      goto LABEL_14;
    case -2147024809:
      v14 = -2003304306;
      LODWORD(a7) = -2003304306;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304306, 0xBFAu);
      goto LABEL_19;
    case -2005270496:
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xBE6u);
      if ( !hWnd || IsWindow(hWnd) )
      {
        v15 = (struct _LUID)*((_QWORD *)this + 73);
        v14 = -2005270523;
        LODWORD(a7) = -2005270523;
        CD3DRegistryDatabase::HandleAdapterUnexpectedError(v15);
        goto LABEL_19;
      }
      v14 = -2147023496;
LABEL_17:
      LODWORD(a7) = v14;
      goto LABEL_19;
    case 0:
      *v8 = 1;
      goto LABEL_19;
    case 142213121:
      if ( !a2[22] )
        goto LABEL_19;
      v14 = 0;
      goto LABEL_17;
  }
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xBFEu);
LABEL_19:
  TranslateDXGIorD3DErrorInContext(v14, 1, &a7);
  v16 = (unsigned int)a7;
  if ( (int)a7 < 0 )
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
  if ( v16 == -2003304307 )
    CD3DDeviceLevel1::ProcessUnusable(this, 0);
  return v16;
}
