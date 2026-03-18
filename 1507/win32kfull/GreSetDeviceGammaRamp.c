/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C012AE30
 * Callers:
 *     RestoreGammaRamp @ 0x1C012ABA0 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C012AC20 (FadeDesktop.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B15D0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00FEC48 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     GreSetDeviceGammaRampInternal @ 0x1C012AEE4 (GreSetDeviceGammaRampInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  _QWORD v8[8]; // [rsp+28h] [rbp-40h] BYREF
  char v9; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] && !*(_DWORD *)(v8[0] + 32LL) )
  {
    DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v9);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v9, (struct XDCOBJ *)v8);
    v5 = GreSetDeviceGammaRampInternal(*(_QWORD *)(v8[0] + 48LL), a2, a3);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v9);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  }
  if ( !v5 )
    EngSetLastError(0x57u);
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v5;
}
