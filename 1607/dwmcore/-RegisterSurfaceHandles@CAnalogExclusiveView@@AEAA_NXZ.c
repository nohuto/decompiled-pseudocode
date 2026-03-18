/*
 * XREFs of ?RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ @ 0x1801659F4
 * Callers:
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180165750 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4 (-GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 */

bool __fastcall CAnalogExclusiveView::RegisterSurfaceHandles(CAnalogExclusiveView *this)
{
  struct CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  struct CCompositionSurfaceInfo *v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r14
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  char v7; // al
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8

  ExclusiveSurfaceInfo = CAnalogExclusiveView::GetExclusiveSurfaceInfo(this);
  v3 = ExclusiveSurfaceInfo;
  if ( ExclusiveSurfaceInfo && *((_DWORD *)ExclusiveSurfaceInfo + 26) == 2 )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      if ( v4 < *((_DWORD *)v3 + 26) )
        (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v5 + *((_QWORD *)v3 + 10)) + 88LL))(
          *(_QWORD *)(v5 + *((_QWORD *)v3 + 10)),
          (char *)this + 8 * v4 + 144);
      ++v4;
      v5 += 8LL;
    }
    while ( v4 < 2 );
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v3);
    v7 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 14) + 88LL))((__int64)RenderingRealizationNoRef + 112);
    v8 = *(_QWORD *)xmmword_1801F03A0;
    LOBYTE(v8) = v7;
    if ( (*(int (__fastcall **)(_QWORD, char *, __int64, __int64))(*(_QWORD *)xmmword_1801F03A0 + 64LL))(
           xmmword_1801F03A0,
           (char *)this + 144,
           2LL,
           v8) >= 0 )
    {
      v10 = *((unsigned int *)this + 31);
      LOBYTE(v9) = 1;
      *((_BYTE *)this + 129) = 1;
      g_AnalogCompositor = 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)xmmword_1801F03A0 + 48LL))(
        xmmword_1801F03A0,
        v9,
        v10);
    }
  }
  return *((_BYTE *)this + 129);
}
