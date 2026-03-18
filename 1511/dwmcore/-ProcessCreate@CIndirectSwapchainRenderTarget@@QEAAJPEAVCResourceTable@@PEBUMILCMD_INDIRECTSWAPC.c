/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800F41D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007AE38 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x180094B10 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800AD27C (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F4514 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180108A14 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DXGI_FORMAT@@@Z @ 0x1801457D4 (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DX.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE *a3)
{
  struct IDXGIIndirectSwapChain *v4; // r14
  struct CD3DDeviceLevel1 *v6; // rbx
  struct CVisual *Resource; // r12
  int v8; // edi
  int D3DDevice; // eax
  int v10; // eax
  int updated; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  CComposition *v16; // rax
  CComposition *v17; // rcx
  struct IDXGIIndirectSwapChain *v19; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v21[3]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+4Ch] [rbp-14h]
  __int64 v23; // [rsp+54h] [rbp-Ch]
  struct CD3DDeviceLevel1 *v24; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v24 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x1Fu);
  hObject = (HANDLE)*((_QWORD *)a3 + 1);
  if ( Resource )
  {
    CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)this);
    D3DDevice = CD3DDeviceManager::GetD3DDevice(
                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                  (const struct _GUID *)((char *)this[2] + 252),
                  *(struct _LUID *)((char *)a3 + 16),
                  &v24);
    v6 = v24;
    v8 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x25u);
      goto LABEL_15;
    }
    v10 = CD3DDeviceLevel1::OpenIndirectSwapchain(v24, &hObject, &v19, &v25, &v26, (enum DXGI_FORMAT *)&v24);
    v8 = v10;
    if ( v10 >= 0 )
    {
      updated = COffScreenRenderTarget::UpdatePixelFormatInfo((COffScreenRenderTarget *)this, (enum DXGI_FORMAT)v24);
      v8 = updated;
      if ( updated >= 0 )
      {
        v12 = CRenderTarget::SetRoot((CRenderTarget *)this, Resource);
        v8 = v12;
        if ( v12 >= 0 )
        {
          v13 = CRenderTargetManager::AddRenderTarget(
                  *((CRenderTargetManager **)this[2] + 4),
                  (struct CRenderTarget *)this);
          v8 = v13;
          if ( v13 >= 0 )
          {
            v14 = v25;
            this[50] = v19;
            v15 = v26;
            *((_DWORD *)this + 69) = v26;
            *((_DWORD *)this + 107) = v15;
            *((_DWORD *)this + 68) = v14;
            *((_DWORD *)this + 106) = v14;
            v16 = (CComposition *)*((_QWORD *)a3 + 2);
            *((_BYTE *)this + 392) &= ~0x10u;
            this[52] = v16;
            *((_BYTE *)this + 256) = 1;
LABEL_15:
            if ( v8 >= 0 )
              goto LABEL_17;
            goto LABEL_16;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x35u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x32u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2Cu);
    }
    v4 = v19;
    goto LABEL_15;
  }
  v8 = -2003303421;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1Cu);
LABEL_16:
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)this);
LABEL_17:
  if ( v6 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 384));
  if ( v4 )
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( hObject )
    CloseHandle(hObject);
  v17 = this[2];
  v21[0] = 19;
  v21[1] = 0;
  v21[2] = v8;
  v22 = 0LL;
  v23 = 0LL;
  CComposition::NotifyHelper(v17, (struct MIL_MESSAGE *)v21);
  return 0LL;
}
