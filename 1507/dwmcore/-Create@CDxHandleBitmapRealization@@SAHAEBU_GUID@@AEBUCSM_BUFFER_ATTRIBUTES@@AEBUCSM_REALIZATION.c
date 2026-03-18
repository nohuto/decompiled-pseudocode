/*
 * XREFs of ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089FB0
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18001E8E0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18001EF78 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  CDxHandleBitmapRealization *v9; // rax
  CDxHandleBitmapRealization *v10; // rdi
  __int64 (__fastcall *v11)(CBitmapOfDeviceBitmaps *); // rbx
  __int64 (__fastcall *v12)(CDxHandleBitmapRealization *); // rbx
  int v13; // eax
  int v14; // esi

  *a4 = 0LL;
  v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = (CDxHandleBitmapRealization *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x1D8uLL);
  else
    v9 = (CDxHandleBitmapRealization *)v8(WPF::g_pProcessHeap, 472LL);
  if ( v9 )
    v10 = CDxHandleBitmapRealization::CDxHandleBitmapRealization(v9, a1, a2, a3);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v10 + 8LL);
    if ( v11 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v10);
    else
      v11(v10);
    v12 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v10 + 112LL);
    if ( v12 == CDxHandleBitmapRealization::EnsureD2DBitmap )
      v13 = CDxHandleBitmapRealization::EnsureD2DBitmap(v10);
    else
      v13 = v12(v10);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x25u);
    }
    else
    {
      *a4 = v10;
      v10 = 0LL;
    }
    if ( v14 < 0 )
    {
      if ( !v10 )
        return (unsigned int)v14;
      *((_QWORD *)v10 + 38) = 0LL;
    }
    if ( v10 )
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22u);
  }
  return (unsigned int)v14;
}
