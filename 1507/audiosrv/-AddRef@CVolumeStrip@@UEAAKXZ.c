/*
 * XREFs of ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x18001D330
 * Callers:
 *     ?QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D1E0 (-QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18003D250 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::AddRef(CVolumeStrip *this)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
      this,
      *((_DWORD *)this + 54) + 1);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 54);
}
