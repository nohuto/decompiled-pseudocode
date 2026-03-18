/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C01076E4
 * Callers:
 *     PrepareGammaRampData @ 0x1C0107520 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C02B2E50 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C0107788 (GreGetDeviceGammaRampInternal.c)
 */

__int64 __fastcall GreGetDeviceGammaRamp(HDC a1, __int64 a2)
{
  unsigned int DeviceGammaRampInternal; // ebx
  DYNAMICMODECHANGESHARELOCK *v4; // rcx
  _QWORD v6[8]; // [rsp+28h] [rbp-40h] BYREF
  char v7; // [rsp+80h] [rbp+18h] BYREF

  DeviceGammaRampInternal = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] && !*(_DWORD *)(v6[0] + 32LL) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v7, (struct XDCOBJ *)v6);
    DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*(_QWORD *)(v6[0] + 48LL), a2);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v7);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v4);
  }
  if ( !DeviceGammaRampInternal )
    EngSetLastError(0x57u);
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return DeviceGammaRampInternal;
}
