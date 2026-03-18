/*
 * XREFs of ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1800E2778
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180035B14 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1800F0320 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Channel_VisualCaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  struct CVisualTree *v4; // rbx
  unsigned int v7; // edx
  CVisual *Resource; // rax
  int VisualTree; // eax
  VisualCaptureBitsResponse *v11; // rax
  struct WICRect v13; // [rsp+50h] [rbp-28h] BYREF
  struct CVisualTree *v14; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  v7 = *((_DWORD *)a4 + 10);
  v13 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v7, 31LL);
  if ( !Resource )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xADBu);
LABEL_9:
    SetEvent(*((HANDLE *)a4 + 3));
    CloseHandle(*((HANDLE *)a4 + 3));
    CloseHandle(*((HANDLE *)a4 + 4));
    goto LABEL_11;
  }
  VisualTree = CVisual::GetVisualTree(Resource, &v14);
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0xADFu);
    v4 = v14;
    goto LABEL_9;
  }
  v11 = (VisualCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
  v4 = v14;
  if ( v11 )
    v11 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
            v11,
            this[5],
            a2,
            0LL,
            v14,
            &v13,
            (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
            *((void **)a4 + 3),
            *((void **)a4 + 4));
  if ( !v11 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xAF3u);
    goto LABEL_9;
  }
  CResponseItem::ReleaseResponseRef(v11);
LABEL_11:
  if ( v4 )
    CMILRefCountBase::Release(v4);
  return 0LL;
}
