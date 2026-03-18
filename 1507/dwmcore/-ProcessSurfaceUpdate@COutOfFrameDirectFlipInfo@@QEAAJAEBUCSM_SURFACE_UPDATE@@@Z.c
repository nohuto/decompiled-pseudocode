/*
 * XREFs of ?ProcessSurfaceUpdate@COutOfFrameDirectFlipInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800EEDE0
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800E3798 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 */

__int64 __fastcall COutOfFrameDirectFlipInfo::ProcessSurfaceUpdate(
        COutOfFrameDirectFlipInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 63);
  *((_QWORD *)this + 15) = *((_QWORD *)a2 + 1);
  v2 = CCompositionSurfaceInfo::ProcessSurfaceUpdate(*((CCompositionSurfaceInfo **)this + 4), (unsigned __int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3Eu);
  return v3;
}
