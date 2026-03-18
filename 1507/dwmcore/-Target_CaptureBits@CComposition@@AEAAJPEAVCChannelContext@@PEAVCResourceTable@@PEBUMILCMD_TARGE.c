/*
 * XREFs of ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18006885C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180035B14 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180061E8C (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x18006252C (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rsi
  CaptureBitsResponse *v13; // rax
  struct CaptureBitsResponse *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  CVisual *v18; // rax
  int VisualTree; // eax
  unsigned int v20; // [rsp+20h] [rbp-78h]
  struct WICRect v21; // [rsp+50h] [rbp-48h] BYREF
  struct CVisualTree *v22; // [rsp+B8h] [rbp+20h] BYREF

  v5 = FLOAT_1_0;
  v6 = 0LL;
  v22 = 0LL;
  Resource = CResourceTable::GetResource(a3, *((unsigned int *)a4 + 1), 37LL);
  if ( !Resource )
  {
    v20 = 2867;
LABEL_24:
    v16 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v20);
    return v16;
  }
  v11 = *((unsigned int *)a4 + 11);
  v21 = (struct WICRect)*((_OWORD *)a4 + 1);
  if ( !(_DWORD)v11 )
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
  v18 = (CVisual *)CResourceTable::GetResource(a3, v11, 31LL);
  if ( !v18 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)a4 + 1)) & _xmm) < 0.0000011920929 )
  {
    v20 = 2887;
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB63u);
      CResponseItem::ReleaseResponseRef(v14);
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB5Du);
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0xB4Bu);
  v12 = (volatile signed __int32 *)v22;
LABEL_12:
  if ( v12 )
    CMILRefCountBase::Release((CMILRefCountBase *)v12);
  return v16;
}
