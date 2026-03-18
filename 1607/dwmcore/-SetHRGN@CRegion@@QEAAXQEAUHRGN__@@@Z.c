/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180099DA4
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800989C8 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180099E98 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn, unsigned int *a3)
{
  struct _RGNDATA *v3; // rbx
  int v5; // eax
  int v6; // edi
  int appended; // eax
  void (__fastcall *v8)(WPF::ProcessHeapImpl *, void *); // rax
  struct _RGNDATA *v9; // [rsp+30h] [rbp-29h] BYREF
  _DWORD *v10; // [rsp+40h] [rbp-19h] BYREF
  _DWORD v11[18]; // [rsp+48h] [rbp-11h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
    {
LABEL_16:
      FastRegion::CRegion::SetRectangle(this, 0x80000000, 0x80000000, 0x7FFFFFFF, 0x7FFFFFFF);
      return;
    }
    v11[0] = 0;
    v10 = v11;
    v5 = HrgnToRgnData(hrgn, &v9, a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1Fu);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v10);
      v3 = v9;
    }
    else
    {
      v3 = v9;
      **(_DWORD **)this = 0;
      appended = CRegion::AppendRects<tagRECT>(this);
      v6 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x26u);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v10);
      }
      else if ( v11 != v10 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        v11[0] = 0;
        v10 = v11;
      }
    }
  }
  else
  {
    **(_DWORD **)this = 0;
    v6 = 0;
  }
  if ( v3 )
  {
    v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v8 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
    else
      v8(WPF::g_pProcessHeap, v3);
  }
  if ( v6 < 0 )
    goto LABEL_16;
}
