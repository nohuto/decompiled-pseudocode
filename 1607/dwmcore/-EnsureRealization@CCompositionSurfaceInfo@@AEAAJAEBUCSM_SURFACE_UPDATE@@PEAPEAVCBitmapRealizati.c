/*
 * XREFs of ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180099224
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800992FC (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x180099498 (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180099AE4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180151D1C (-EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureRealization(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // edi
  CCompositionSurfaceInfo::CBindInfo *v8; // rsi
  CBitmapOfDeviceBitmaps *RealizationNoRef; // rbx
  __int64 (__fastcall *v10)(CBitmapOfDeviceBitmaps *); // rax
  int v12; // eax

  v3 = *((_QWORD *)a2 + 2);
  v4 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 7) != v3
    || (v8 = (CCompositionSurfaceInfo *)((char *)this + 48),
        (RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                              (CCompositionSurfaceInfo *)((char *)this + 48),
                              *((_DWORD *)a2 + 6))) == 0LL) )
  {
    v8 = (CCompositionSurfaceInfo *)((char *)this + 48);
    v12 = CCompositionSurfaceInfo::CBindInfo::Initialize((CCompositionSurfaceInfo *)((char *)this + 48), v3);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1BCu);
      return v4;
    }
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         (CCompositionSurfaceInfo *)((char *)this + 48),
                         *((_DWORD *)a2 + 6));
    if ( !RealizationNoRef )
      return v4;
  }
  if ( (*((_DWORD *)a2 + 47) & 0x800) != 0 )
    CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(v8);
  v10 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)RealizationNoRef + 8LL);
  if ( v10 == CBitmapOfDeviceBitmaps::AddRef )
    CBitmapOfDeviceBitmaps::AddRef(RealizationNoRef);
  else
    v10(RealizationNoRef);
  *a3 = RealizationNoRef;
  return v4;
}
