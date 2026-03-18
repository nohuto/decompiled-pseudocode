/*
 * XREFs of ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18010FE54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A2CC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x180120768 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Partition_DesktopCaptureBits(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  struct CVisualTree *v5; // rbp
  HMONITOR v6; // rdx
  struct IRenderTargetResource *PrimaryDesktopRenderTargetNoRef; // rsi
  struct IRenderTargetDesktop *v10; // rax
  char *v11; // rcx
  int v12; // r9d
  CMonitorTreeAssociation *v13; // rcx
  int TreeNoLock; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  VisualCaptureBitsResponse *v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-58h]
  struct WICRect v22; // [rsp+50h] [rbp-28h] BYREF
  struct CVisualTree *v23; // [rsp+90h] [rbp+18h] BYREF

  v23 = a3;
  v5 = 0LL;
  v6 = *(HMONITOR *)((char *)a4 + 4);
  PrimaryDesktopRenderTargetNoRef = 0LL;
  if ( v6 )
  {
    v13 = (CMonitorTreeAssociation *)*((_QWORD *)this + 3);
    v23 = 0LL;
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v13, v6, &v23);
    if ( TreeNoLock < 0 )
    {
      v21 = 1743;
      v12 = TreeNoLock;
      goto LABEL_28;
    }
    v15 = *((_DWORD *)this + 138);
    v16 = 0LL;
    if ( v15 )
    {
      v17 = *((_QWORD *)this + 66);
      while ( 1 )
      {
        v18 = *(_QWORD *)(v17 + 8 * v16);
        if ( v18 )
          v18 -= 152LL;
        if ( *(struct CVisualTree **)(v18 + 128) == v23 )
          break;
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_18;
      }
      PrimaryDesktopRenderTargetNoRef = *(struct IRenderTargetResource **)(v17 + 8 * v16);
      v5 = v23;
    }
LABEL_18:
    if ( v23 )
      CMILRefCountBase::Release(v23);
  }
  else
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this);
    v10 = CComposition::GetPrimaryDesktopRenderTargetNoRef(this);
    if ( v10 )
      v11 = (char *)v10 - 152;
    else
      v11 = 0LL;
    if ( !v11 )
    {
      v21 = 1733;
LABEL_7:
      v12 = -2003292412;
LABEL_28:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v21);
      goto LABEL_29;
    }
    v5 = (struct CVisualTree *)*((_QWORD *)v11 + 16);
  }
  if ( !PrimaryDesktopRenderTargetNoRef )
  {
    v21 = 1762;
    goto LABEL_7;
  }
  v22 = *(struct WICRect *)((char *)a4 + 12);
  v19 = (VisualCaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
  if ( v19 )
    v19 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
            v19,
            *((struct CSurfaceManager **)this + 5),
            a2,
            PrimaryDesktopRenderTargetNoRef,
            v5,
            &v22,
            (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
            *((void **)a4 + 4),
            *((void **)a4 + 5));
  if ( !v19 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6F7u);
LABEL_29:
    SetEvent(*((HANDLE *)a4 + 4));
    CloseHandle(*((HANDLE *)a4 + 4));
    CloseHandle(*((HANDLE *)a4 + 5));
    return 0LL;
  }
  CResponseItem::ReleaseResponseRef(v19);
  return 0LL;
}
