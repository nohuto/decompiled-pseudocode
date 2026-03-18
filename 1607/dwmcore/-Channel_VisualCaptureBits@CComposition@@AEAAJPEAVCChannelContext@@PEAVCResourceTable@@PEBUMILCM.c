/*
 * XREFs of ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18010FB0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x180120768 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Channel_VisualCaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v5; // edx
  CVisual *Resource; // rax
  int VisualTree; // eax
  struct CVisualTree *v10; // rdi
  VisualCaptureBitsResponse *v11; // rax
  struct WICRect v13; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  v5 = *((_DWORD *)a4 + 10);
  v13 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v5, 0x20u);
  VisualTree = CVisual::GetVisualTree(Resource, &v14);
  v10 = v14;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0xA12u);
  }
  else
  {
    v11 = (VisualCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 16LL))(
                                         WPF::g_pProcessHeap,
                                         176LL);
    if ( v11 )
      v11 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v11,
              this[5],
              a2,
              0LL,
              v10,
              &v13,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
              *((void **)a4 + 3),
              *((void **)a4 + 4));
    if ( v11 )
    {
      CResponseItem::ReleaseResponseRef(v11);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA20u);
  }
  SetEvent(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 4));
LABEL_9:
  if ( v10 )
    CMILRefCountBase::Release(v10);
  return 0LL;
}
