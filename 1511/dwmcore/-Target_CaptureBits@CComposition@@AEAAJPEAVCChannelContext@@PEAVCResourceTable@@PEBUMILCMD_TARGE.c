/*
 * XREFs of ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x1800951F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180048704 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800A4E98 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800A5C6C (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 */

__int64 __fastcall CComposition::Target_CaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_TARGET_CAPTUREBITS *a4)
{
  float v5; // xmm6_4
  struct IRenderTargetResource *v6; // r14
  __int64 Resource; // r9
  unsigned int v11; // edx
  volatile signed __int32 *v12; // rsi
  CaptureBitsResponse *v13; // rax
  struct CaptureBitsResponse *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  CVisual *v18; // rcx
  int VisualTree; // eax
  unsigned int v20; // [rsp+20h] [rbp-78h]
  struct WICRect v21; // [rsp+50h] [rbp-48h] BYREF
  struct CVisualTree *v22; // [rsp+B8h] [rbp+20h] BYREF

  v5 = FLOAT_1_0;
  v6 = 0LL;
  v22 = 0LL;
  Resource = CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x26u);
  if ( !Resource )
  {
    v20 = 2963;
LABEL_24:
    v16 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v20);
    return v16;
  }
  v11 = *((_DWORD *)a4 + 11);
  v21 = (struct WICRect)*((_OWORD *)a4 + 1);
  if ( !v11 )
  {
    v12 = *(volatile signed __int32 **)(Resource + 56);
    v22 = (struct CVisualTree *)v12;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = (volatile signed __int32 *)v22;
    }
    v6 = (struct IRenderTargetResource *)(Resource + 80);
    goto LABEL_6;
  }
  if ( !CResourceTable::GetResource((__int64)a3, v11, 0x1Fu) || IsCloseRealZero(*((double *)a4 + 1), 0.0000011920929) )
  {
    v20 = 2983;
    goto LABEL_24;
  }
  VisualTree = CVisual::GetVisualTree(v18, &v22);
  v16 = VisualTree;
  if ( VisualTree >= 0 )
  {
    v12 = (volatile signed __int32 *)v22;
    v5 = 1.0 / *((double *)a4 + 1);
LABEL_6:
    v13 = (CaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 16LL))(
                                   WPF::g_pProcessHeap,
                                   160LL);
    if ( v13 )
      v14 = CaptureBitsResponse::CaptureBitsResponse(
              v13,
              this[5],
              a2,
              v6,
              (struct CVisualTree *)v12,
              v5,
              &v21,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 8),
              *(_QWORD *)((char *)a4 + 36));
    else
      v14 = 0LL;
    if ( v14 )
    {
      v15 = CLegacySurfaceManager::AddCaptureBitsResponse((struct CSurfaceManager *)((char *)this[5] + 96), v14);
      v16 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBC3u);
      CResponseItem::ReleaseResponseRef(v14);
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBBDu);
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0xBABu);
  v12 = (volatile signed __int32 *)v22;
LABEL_12:
  if ( v12 )
    CMILRefCountBase::Release((CMILRefCountBase *)v12);
  return v16;
}
