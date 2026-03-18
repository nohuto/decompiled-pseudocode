/*
 * XREFs of ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B22B4
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180055410 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4,
        struct CBitmapRealization **a5)
{
  LPVOID (__fastcall *v9)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CDxHandleBitmapRealization *v10; // rax
  CDxHandleBitmapRealization *v11; // rbx
  __int64 (__fastcall *v12)(CBitmapOfDeviceBitmaps *); // rax
  int v13; // eax
  int v14; // edi

  *a5 = 0LL;
  v9 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v9 == WPF::ProcessHeapImpl::Alloc )
    v10 = (CDxHandleBitmapRealization *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x1B0uLL);
  else
    v10 = (CDxHandleBitmapRealization *)v9(WPF::g_pProcessHeap, 432LL);
  if ( v10 )
    v11 = CDxHandleBitmapRealization::CDxHandleBitmapRealization(v10, a1, a2, a3, a4);
  else
    v11 = 0LL;
  if ( v11 )
  {
    v12 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v11 + 8LL);
    if ( v12 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v11);
    else
      v12(v11);
    v13 = CDxHandleBitmapRealization::Initialize(v11);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x26u);
    }
    else
    {
      *a5 = v11;
      v11 = 0LL;
    }
    if ( v14 < 0 )
    {
      if ( !v11 )
        return (unsigned int)v14;
      *((_QWORD *)v11 + 32) = 0LL;
    }
    if ( v11 )
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x23u);
  }
  return (unsigned int)v14;
}
