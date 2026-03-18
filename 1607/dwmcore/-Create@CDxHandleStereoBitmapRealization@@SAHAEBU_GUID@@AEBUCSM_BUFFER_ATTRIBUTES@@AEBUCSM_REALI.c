/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180190104
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18018FEF0 (--0CDxHandleStereoBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  CDxHandleStereoBitmapRealization *v8; // rax
  CBitmapOfDeviceBitmaps *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax

  *a4 = 0LL;
  v8 = (CDxHandleStereoBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                             WPF::g_pProcessHeap,
                                             552LL);
  if ( v8 )
    v9 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v9);
    v11 = CDxHandleBitmapRealization::Initialize(v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1Fu);
      CMILCOMBase::InternalRelease(v9);
    }
    else
    {
      *a4 = v9;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Cu);
  }
  return v10;
}
