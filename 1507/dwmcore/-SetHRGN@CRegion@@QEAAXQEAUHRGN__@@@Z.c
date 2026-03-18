/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180087914
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18008631C (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18008771C (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN a2, unsigned int *a3)
{
  struct _RGNDATA *v3; // rsi
  int v5; // eax
  int v6; // r14d
  DWORD nCount; // r8d
  char *Buffer; // rdx
  int appended; // eax
  void (__fastcall *v10)(WPF::ProcessHeapImpl *, void *); // rdi
  _DWORD *v11; // rdx
  struct _RGNDATA *v12; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v14[18]; // [rsp+48h] [rbp-21h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    if ( a2 == (HRGN)1 )
    {
LABEL_16:
      v11 = *(_DWORD **)this;
      *v11 = 2;
      v11[1] = 0x80000000;
      v11[2] = 0x7FFFFFFF;
      v11[3] = 0x80000000;
      v11[4] = 16;
      v11[7] = 0x80000000;
      v11[8] = 0x7FFFFFFF;
      v11[5] = 0x7FFFFFFF;
      v11[6] = 16;
      return;
    }
    v14[0] = 0;
    v13 = v14;
    v5 = HrgnToRgnData(a2, &v12, a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1Fu);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v13);
      v3 = v12;
    }
    else
    {
      v3 = v12;
      nCount = v12->rdh.nCount;
      Buffer = v12->Buffer;
      **(_DWORD **)this = 0;
      appended = CRegion::AppendRects<tagRECT>(this, (__int64)Buffer, nCount);
      v6 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x26u);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v13);
      }
      else if ( v14 != v13 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v13);
        v14[0] = 0;
        v13 = v14;
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
