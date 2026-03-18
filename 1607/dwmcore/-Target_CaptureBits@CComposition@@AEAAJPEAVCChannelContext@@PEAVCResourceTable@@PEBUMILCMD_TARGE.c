/*
 * XREFs of ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18000CE44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180009C48 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x180009D28 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Target_CaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_TARGET_CAPTUREBITS *a4)
{
  float v5; // xmm6_4
  __int64 v7; // rdx
  struct IRenderTargetResource *v9; // r14
  volatile signed __int32 *v10; // rdi
  CResponseItem *v12; // rsi
  __int64 Resource; // r9
  __int64 v14; // rdx
  CaptureBitsResponse *v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  CVisual *v19; // rax
  bool v20; // r8
  int VisualTree; // eax
  struct WICRect v22; // [rsp+50h] [rbp-48h] BYREF
  struct CVisualTree *v23; // [rsp+B8h] [rbp+20h] BYREF

  v5 = FLOAT_1_0;
  v7 = *((unsigned int *)a4 + 1);
  v9 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v12 = 0LL;
  Resource = CResourceTable::GetResource(a3, v7, 39LL);
  if ( !Resource )
  {
    v17 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA60u);
    return v17;
  }
  v14 = *((unsigned int *)a4 + 11);
  v22 = (struct WICRect)*((_OWORD *)a4 + 1);
  if ( (_DWORD)v14 )
  {
    v19 = (CVisual *)CResourceTable::GetResource(a3, v14, 32LL);
    if ( !v19 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)a4 + 1)) & _xmm) < 0.0000011920929 )
    {
      v17 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA74u);
LABEL_11:
      if ( v12 )
        CResponseItem::ReleaseResponseRef(v12);
      goto LABEL_13;
    }
    VisualTree = CVisual::GetVisualTree(v19, &v23, v20);
    v17 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0xA78u);
      v10 = (volatile signed __int32 *)v23;
      goto LABEL_13;
    }
    v10 = (volatile signed __int32 *)v23;
    v5 = 1.0 / *((double *)a4 + 1);
  }
  else
  {
    v10 = *(volatile signed __int32 **)(Resource + 128);
    v23 = (struct CVisualTree *)v10;
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v10 = (volatile signed __int32 *)v23;
    }
    v9 = (struct IRenderTargetResource *)(Resource + 152);
  }
  v15 = (CaptureBitsResponse *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 160LL);
  if ( v15 )
    v12 = CaptureBitsResponse::CaptureBitsResponse(
            v15,
            this[5],
            a2,
            v9,
            (struct CVisualTree *)v10,
            v5,
            &v22,
            (enum DXGI_FORMAT)*((_DWORD *)a4 + 8),
            *(_QWORD *)((char *)a4 + 36));
  if ( v12 )
  {
    v16 = CLegacySurfaceManager::AddCaptureBitsResponse((struct CSurfaceManager *)((char *)this[5] + 96), v12);
    v17 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA90u);
    goto LABEL_11;
  }
  v17 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA8Au);
LABEL_13:
  if ( v10 )
    CMILRefCountBase::Release((CMILRefCountBase *)v10);
  return v17;
}
