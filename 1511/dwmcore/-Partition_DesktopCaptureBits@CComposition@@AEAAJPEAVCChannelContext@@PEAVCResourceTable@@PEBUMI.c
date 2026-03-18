/*
 * XREFs of ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800FB450
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800019A4 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x18010A068 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
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
  __int64 v16; // rdx
  struct CSurfaceManager *v17; // r9
  __int64 v18; // rax
  VisualCaptureBitsResponse *v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-68h]
  struct WICRect v22; // [rsp+50h] [rbp-38h] BYREF
  struct CVisualTree *v23; // [rsp+A8h] [rbp+20h] BYREF

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
      v21 = 2044;
      goto LABEL_7;
    }
    v5 = (struct CVisualTree *)*((_QWORD *)v11 + 7);
LABEL_22:
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
      v21 = 2094;
      v12 = -2147024882;
      goto LABEL_28;
    }
    v21 = 2073;
LABEL_7:
    v12 = -2003292412;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v21);
    goto LABEL_29;
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
    if ( v23 && _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v23 + 16LL))(v23, 1LL);
    goto LABEL_22;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0x806u);
LABEL_29:
  SetEvent(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 5));
  return 0LL;
}
