/*
 * XREFs of ?PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z @ 0x1801658F8
 * Callers:
 *     ?NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180165750 (-NotifyUpdate@CAnalogExclusiveView@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4 (-GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 */

void __fastcall CAnalogExclusiveView::PublishSurfaceUpdate(CAnalogExclusiveView *this, const struct CRegion *a2)
{
  struct CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rsi
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v6; // rbx
  bool v7; // zf
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  bool v11; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+31h] [rbp-17h]
  char v13; // [rsp+32h] [rbp-16h]
  bool v14; // [rsp+33h] [rbp-15h]
  bool v15; // [rsp+34h] [rbp-14h]

  if ( g_AnalogCompositor )
  {
    ExclusiveSurfaceInfo = CAnalogExclusiveView::GetExclusiveSurfaceInfo(this);
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(ExclusiveSurfaceInfo);
    v6 = RenderingRealizationNoRef;
    v10 = *((_DWORD *)this + 31);
    v9 = *((_DWORD *)ExclusiveSurfaceInfo + 18);
    v11 = (*((_BYTE *)RenderingRealizationNoRef + 244) & 2) != 0;
    if ( (*((_BYTE *)RenderingRealizationNoRef + 244) & 1) == 0
      || (v7 = *((_QWORD *)RenderingRealizationNoRef + 17) == 0LL, v12 = 1, v7) )
    {
      v12 = 0;
    }
    v13 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 14) + 128LL))((__int64)RenderingRealizationNoRef + 112);
    v14 = *((_DWORD *)ExclusiveSurfaceInfo + 19) >= 2;
    v15 = *((_DWORD *)ExclusiveSurfaceInfo + 19) == -1;
    (*(void (__fastcall **)(struct CBitmapRealization *, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &v8);
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, const struct CRegion *))(*(_QWORD *)xmmword_1801F03A0 + 40LL))(
        xmmword_1801F03A0,
        &v8,
        a2);
      *((_BYTE *)this + 131) = 1;
    }
  }
}
