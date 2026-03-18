/*
 * XREFs of ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800E323C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A634 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1800F0320 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Partition_DesktopCaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  struct CVisualTree *v5; // r15
  HMONITOR v6; // rdx
  struct IRenderTargetResource *PrimaryDesktopRenderTargetNoRef; // r14
  struct IRenderTargetDesktop *v10; // rax
  char *v11; // rcx
  int v12; // r9d
  CMonitorTreeAssociation *v13; // rcx
  int TreeNoLock; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  struct CSurfaceManager *v17; // r9
  __int64 v18; // rax
  VisualCaptureBitsResponse *v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-68h]
  struct WICRect v22; // [rsp+50h] [rbp-38h] BYREF
  struct CVisualTree *v23; // [rsp+A0h] [rbp+18h] BYREF

  v23 = a3;
  v5 = 0LL;
  v6 = *(HMONITOR *)((char *)a4 + 4);
  PrimaryDesktopRenderTargetNoRef = 0LL;
  if ( !v6 )
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef((CComposition *)this);
    v10 = CComposition::GetPrimaryDesktopRenderTargetNoRef((CComposition *)this);
    if ( v10 )
      v11 = (char *)v10 - 80;
    else
      v11 = 0LL;
    if ( !v11 )
    {
      v21 = 2018;
      goto LABEL_7;
    }
    v5 = (struct CVisualTree *)*((_QWORD *)v11 + 7);
LABEL_21:
    if ( PrimaryDesktopRenderTargetNoRef )
    {
      v22 = *(struct WICRect *)((char *)a4 + 12);
      v19 = (VisualCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                           WPF::g_pProcessHeap,
                                           176LL);
      if ( v19 )
        v19 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
                v19,
                this[5],
                a2,
                PrimaryDesktopRenderTargetNoRef,
                v5,
                &v22,
                (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
                *((void **)a4 + 4),
                *((void **)a4 + 5));
      if ( v19 )
      {
        CResponseItem::ReleaseResponseRef(v19);
        return 0LL;
      }
      v21 = 2068;
      v12 = -2147024882;
      goto LABEL_27;
    }
    v21 = 2047;
LABEL_7:
    v12 = -2003292412;
LABEL_27:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v21);
    goto LABEL_28;
  }
  v13 = this[3];
  v23 = 0LL;
  TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v13, v6, &v23);
  if ( TreeNoLock >= 0 )
  {
    v15 = *((_DWORD *)this + 136);
    v16 = 0LL;
    if ( v15 )
    {
      v17 = this[65];
      while ( 1 )
      {
        v18 = *((_QWORD *)v17 + v16);
        if ( v18 )
          v18 -= 80LL;
        if ( *(struct CVisualTree **)(v18 + 56) == v23 )
          break;
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_19;
      }
      PrimaryDesktopRenderTargetNoRef = (struct IRenderTargetResource *)*((_QWORD *)v17 + v16);
      v5 = v23;
    }
LABEL_19:
    if ( v23 )
      CMILRefCountBase::Release(v23);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0x7ECu);
LABEL_28:
  SetEvent(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 5));
  return 0LL;
}
