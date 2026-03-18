/*
 * XREFs of ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x18013A12C
 * Callers:
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18007C248 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18007C760 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18007C8A0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A89A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800B06D4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18013A358 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     StringLengthWorkerW @ 0x18013A3EC (StringLengthWorkerW.c)
 *     ??1CDisplayRegKey@@QEAA@XZ @ 0x18013AEE8 (--1CDisplayRegKey@@QEAA@XZ.c)
 *     ?ReadString@CDisplayRegKey@@QEAA_NPEBGKPEAG@Z @ 0x18013AF10 (-ReadString@CDisplayRegKey@@QEAA_NPEBGKPEAG@Z.c)
 */

void CDwmCoreWinSqm::RecordDisplayDriverName(void)
{
  size_t v0; // rdx
  HRESULT v1; // eax
  size_t v2; // rdi
  DWORD v3; // ebx
  int v4; // eax
  int v5; // eax
  const unsigned __int16 *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned __int16 *v9; // rax
  size_t pcchLength; // [rsp+38h] [rbp-D0h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR SubKey[264]; // [rsp+3A8h] [rbp+2A0h] BYREF
  unsigned __int16 v15[264]; // [rsp+5B8h] [rbp+4B0h] BYREF
  unsigned __int16 v16[264]; // [rsp+7C8h] [rbp+6C0h] BYREF

  memset_0(DisplayDevice.DeviceName, 0, 0x344uLL);
  DisplayDevice.cb = 840;
  pcchLength = 0LL;
  v1 = StringLengthWorkerW(L"\\Registry\\Machine\\", v0, &pcchLength);
  v2 = pcchLength;
  v3 = 0;
  if ( v1 < 0 )
    v2 = 0LL;
  if ( EnumDisplayDevicesW(0LL, 0, &DisplayDevice, 2u) )
  {
    do
    {
      if ( (DisplayDevice.StateFlags & 1) == 0 )
        goto LABEL_17;
      if ( (DisplayDevice.StateFlags & 8) == 0 )
      {
        v4 = StringCchCopyW((char *)v15, 260LL, (char *)DisplayDevice.DeviceString);
        if ( ((v4 + 0x80000000) & 0x80000000) == 0 && v4 != -2147024774 )
          goto LABEL_17;
        v5 = StringCchCopyW((char *)SubKey, 260LL, (char *)DisplayDevice.DeviceKey);
        if ( ((v5 + 0x80000000) & 0x80000000) == 0 && v5 != -2147024774 )
          goto LABEL_14;
        StringCchCopyNW((char *)SubKey, 260LL, (char *)&SubKey[v2], 260 - v2);
        LOBYTE(pcchLength) = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, &phkResult) == 0;
        if ( !CDisplayRegKey::ReadString((CDisplayRegKey *)&pcchLength, v6, v7, v16)
          || (int)StringCchCatW(v15, v8, v16) >= 0 )
        {
          CDisplayRegKey::~CDisplayRegKey((CDisplayRegKey *)&pcchLength);
LABEL_14:
          v9 = v15;
          LODWORD(v12[0]) = 2;
          if ( !v15[0] )
            v9 = L"(null)";
          v12[1] = v9;
          WinSqmAddToStream(0LL, 3335LL, 1LL, v12);
LABEL_17:
          DisplayDevice.cb = 840;
          goto LABEL_18;
        }
        CDisplayRegKey::~CDisplayRegKey((CDisplayRegKey *)&pcchLength);
      }
LABEL_18:
      ++v3;
    }
    while ( EnumDisplayDevicesW(0LL, v3, &DisplayDevice, 2u) );
  }
}
