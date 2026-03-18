/*
 * XREFs of ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV1@PEAPEAVCBitmapRealization@@@Z @ 0x18014FAF4
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18014F88C (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap@@@Z @ 0x180152744 (-Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDxHandleYUVBitmapRealization *a4,
        struct CBitmapRealization **a5)
{
  struct CDecodedBitmap *v5; // rbp
  CDxHandleYUVBitmapRealization *v10; // rax
  CDxHandleYUVBitmapRealization *v11; // rdi
  int v12; // esi
  int v13; // eax

  v5 = 0LL;
  *a5 = 0LL;
  v10 = (CDxHandleYUVBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                           WPF::g_pProcessHeap,
                                           528LL);
  if ( v10 )
    v11 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v10, a1, a2, a3);
  else
    v11 = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v11 + 8LL))(v11);
    if ( a4 )
      v5 = (struct CDecodedBitmap *)*((_QWORD *)a4 + 59);
    v13 = CDxHandleDecodeBitmapRealization::Initialize(v11, 0LL, v5);
    v12 = v13;
    if ( v13 >= 0 )
    {
      *a5 = v11;
      v11 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x30u);
    }
    if ( v12 < 0 )
    {
      if ( !v11 )
        return (unsigned int)v12;
      *((_QWORD *)v11 + 38) = 0LL;
    }
    if ( v11 )
      (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22u);
  }
  return (unsigned int)v12;
}
