/*
 * XREFs of ?EnsureHDRMetaData@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180151D1C
 * Callers:
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180099224 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(CCompositionSurfaceInfo::CBindInfo *this)
{
  _DWORD *v1; // rdi
  int v2; // ebx
  int CompositionSurfaceHDRMetaData; // eax

  v1 = (_DWORD *)((char *)this + 96);
  v2 = 0;
  CompositionSurfaceHDRMetaData = NtQueryCompositionSurfaceHDRMetaData(
                                    *(_QWORD *)(*(_QWORD *)this + 32LL),
                                    (char *)this + 8,
                                    (char *)this + 96,
                                    28LL,
                                    (char *)this + 100);
  if ( CompositionSurfaceHDRMetaData < 0 )
  {
    v2 = CompositionSurfaceHDRMetaData | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CompositionSurfaceHDRMetaData | 0x10000000, 0x667u);
    if ( v2 < 0 )
      *v1 = 0;
  }
  return (unsigned int)v2;
}
