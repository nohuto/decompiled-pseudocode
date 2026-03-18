/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18014E0D8
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18014DEAC (--0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  CDxHandleStereoBitmapRealization *v8; // rax
  CBitmapOfDeviceBitmaps *v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax

  v8 = (CDxHandleStereoBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                             WPF::g_pProcessHeap,
                                             592LL);
  if ( v8 )
    v9 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v9);
    v11 = (*(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v9 + 112LL))(v9);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *a4 = v9;
      v9 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1Eu);
    }
    if ( v9 )
      CMILCOMBase::InternalRelease(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Bu);
  }
  return v10;
}
