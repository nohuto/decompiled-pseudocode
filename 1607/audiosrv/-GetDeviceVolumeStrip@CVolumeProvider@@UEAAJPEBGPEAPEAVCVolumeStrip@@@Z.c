/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B7C0
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18002AAA0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     AudioVolumeConnect @ 0x18002B1B0 (AudioVolumeConnect.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B9B0 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?FindVolumeStrip@CVolumeProvider@@AEAAPEAVCVolumeStrip@@PEBG@Z @ 0x18002BB30 (-FindVolumeStrip@CVolumeProvider@@AEAAPEAVCVolumeStrip@@PEBG@Z.c)
 *     ??0?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x1800506E0 (--0-$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x1800506F0 (--1-$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@VCVolumeStrip@@@ATL@@QEAAXPEAVCVolumeStrip@@@Z @ 0x180050B28 (-Attach@-$CComPtrBase@VCVolumeStrip@@@ATL@@QEAAXPEAVCVolumeStrip@@@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180059DDC (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct CVolumeStrip **a3)
{
  int v6; // ebx
  struct CVolumeStrip *VolumeStrip; // rax
  struct CVolumeStrip *v8; // rdi
  int DeviceVolumeStrip; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v12; // [rsp+28h] [rbp-8h]
  struct IUnknown *v13; // [rsp+50h] [rbp+20h] BYREF

  v6 = 0;
  ATL::CComPtr<CVolumeStrip>::CComPtr<CVolumeStrip>(&v13);
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 )
  {
    if ( a3 )
    {
      VolumeStrip = CVolumeProvider::FindVolumeStrip(this, a2);
      ATL::CComPtrBase<CVolumeStrip>::Attach(&v13, VolumeStrip);
      v8 = (struct CVolumeStrip *)v13;
      if ( (v13
         || (DeviceVolumeStrip = CVolumeProvider::CreateDeviceVolumeStrip(this, a2, (struct CVolumeStrip **)&v13),
             v8 = (struct CVolumeStrip *)v13,
             v6 = DeviceVolumeStrip,
             DeviceVolumeStrip >= 0))
        && HasTooManyReferences((struct IUnknown *)v8) )
      {
        v6 = -2147024882;
      }
      else
      {
        v13 = 0LL;
        *a3 = v8;
        if ( v6 >= 0 )
          goto LABEL_11;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  AudSrvTraceLoggingErrorHelper("CVolumeProvider::GetDeviceVolumeStrip", 182, v6);
LABEL_11:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>(&v13);
  return (unsigned int)v6;
}
