/*
 * XREFs of ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x180017BD0
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018370 (-QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B9B0 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?FindVolumeStrip@CVolumeProvider@@AEAAPEAVCVolumeStrip@@PEBG@Z @ 0x18002BB30 (-FindVolumeStrip@CVolumeProvider@@AEAAPEAVCVolumeStrip@@PEBG@Z.c)
 * Callees:
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::AddRef(CVolumeStrip *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      ATL::Sids::SecurityNTAuthority.SubAuthority,
      this,
      *((_DWORD *)this + 54) + 1);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 54);
}
