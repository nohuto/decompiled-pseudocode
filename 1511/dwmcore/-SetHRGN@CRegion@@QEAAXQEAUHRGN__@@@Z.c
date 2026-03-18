/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18006D854
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18002EAA0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18006D65C (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn, unsigned int *a3)
{
  struct _RGNDATA *v3; // rsi
  int v5; // eax
  int v6; // r14d
  DWORD nCount; // r8d
  char *Buffer; // rdx
  int appended; // eax
  void (__fastcall *v10)(WPF::ProcessHeapImpl *, void *); // rdi
  struct _RGNDATA *v11; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v12; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v13[18]; // [rsp+48h] [rbp-21h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
    {
LABEL_16:
      FastRegion::CRegion::SetRectangle(this, 0x80000000, 0x80000000, 0x7FFFFFFF, 0x7FFFFFFF);
      return;
    }
    v13[0] = 0;
    v12 = v13;
    v5 = HrgnToRgnData(hrgn, &v11, a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1Fu);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v12);
      v3 = v11;
    }
    else
    {
      v3 = v11;
      nCount = v11->rdh.nCount;
      Buffer = v11->Buffer;
      **(_DWORD **)this = 0;
      appended = CRegion::AppendRects<tagRECT>(this, (__int64)Buffer, nCount);
      v6 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x26u);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v12);
      }
      else if ( v13 != v12 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v12);
        v13[0] = 0;
        v12 = v13;
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
    v10 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v10 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
    else
      v10(WPF::g_pProcessHeap, v3);
  }
  if ( v6 < 0 )
    goto LABEL_16;
}
