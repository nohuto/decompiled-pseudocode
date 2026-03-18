/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180107FF0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18003B3A0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180072DB8 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B82C0 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18011F494 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DXGI_FORMAT@@@Z @ 0x180174E3C (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DX.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE *a3)
{
  struct IDXGIIndirectSwapChain *v4; // rsi
  struct CD3DDeviceLevel1 *v6; // r14
  struct CVisual *Resource; // r12
  int v8; // ebx
  int D3DDevice; // eax
  int v10; // eax
  int updated; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // eax
  CComposition *v17; // rax
  CComposition *v18; // rcx
  struct IDXGIIndirectSwapChain *v20; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v22[3]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+4Ch] [rbp-14h]
  __int64 v24; // [rsp+54h] [rbp-Ch]
  struct CD3DDeviceLevel1 *v25; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x20u);
  hObject = (HANDLE)*((_QWORD *)a3 + 1);
  if ( Resource )
  {
    CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)this);
    D3DDevice = CD3DDeviceManager::GetD3DDevice(
                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                  (const struct _GUID *)((char *)this[2] + 252),
                  *(struct _LUID *)((char *)a3 + 16),
                  &v25);
    v6 = v25;
    v8 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x25u);
    }
    else
    {
      v10 = CD3DDeviceLevel1::OpenIndirectSwapchain(v25, &hObject, &v20, &v26, &v27, (enum DXGI_FORMAT *)&v25);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2Cu);
      }
      else
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo((COffScreenRenderTarget *)this, (enum DXGI_FORMAT)v25);
        v8 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2Fu);
        }
        else
        {
          v12 = CRenderTarget::SetRoot((CRenderTarget *)this, Resource);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x32u);
          }
          else
          {
            v13 = CRenderTargetManager::AddRenderTarget(
                    *((CRenderTargetManager **)this[2] + 4),
                    (struct CRenderTarget *)this);
            v8 = v13;
            if ( v13 >= 0 )
            {
              v15 = v26;
              this[65] = v20;
              v16 = v27;
              *((_DWORD *)this + 87) = v27;
              *((_DWORD *)this + 137) = v16;
              *((_DWORD *)this + 86) = v15;
              *((_DWORD *)this + 136) = v15;
              v17 = (CComposition *)*((_QWORD *)a3 + 2);
              *((_BYTE *)this + 512) &= ~8u;
              this[67] = v17;
              *((_BYTE *)this + 328) = 1;
              goto LABEL_15;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x35u);
          }
        }
      }
      v4 = v20;
    }
LABEL_15:
    if ( v8 >= 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v8 = -2003303421;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1Cu);
LABEL_16:
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)this);
LABEL_17:
  if ( v6 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v6 + 408));
  if ( v4 )
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( hObject )
    CloseHandle(hObject);
  v18 = this[2];
  v22[0] = 19;
  v22[1] = 0;
  v22[2] = v8;
  v23 = 0LL;
  v24 = 0LL;
  CComposition::NotifyHelper(v18, (struct MIL_MESSAGE *)v22, v14);
  return 0LL;
}
