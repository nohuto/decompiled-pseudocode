/*
 * XREFs of ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180190908
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180190604 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801911C4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
        struct _GUID *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4,
        struct CBitmapRealization **a5)
{
  CDxHandleYUVBitmapRealization *v5; // rbx
  CDxHandleYUVBitmapRealization *v10; // rax
  unsigned int v11; // edi
  int v12; // eax

  v5 = 0LL;
  *a5 = 0LL;
  if ( this[17].Data1 || !*((_DWORD *)a3 + 6) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x155u);
  }
  else
  {
    v10 = (CDxHandleYUVBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                             WPF::g_pProcessHeap,
                                             440LL);
    if ( v10 )
      v5 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v10, this + 2, a2, a3, a4);
    if ( !v5 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x145u);
      return v11;
    }
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v5 + 8LL))(v5);
    v12 = CDxHandleYUVBitmapRealization::Initialize(v5, (struct CDxHandleYUVBitmapRealization *)this);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x14Eu);
    }
    else
    {
      *a5 = v5;
      v5 = 0LL;
    }
  }
  if ( (v11 & 0x80000000) != 0 )
  {
    if ( !v5 )
      return v11;
    *((_QWORD *)v5 + 32) = 0LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v5 + 16LL))(v5);
  return v11;
}
