/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C00E3C40
 * Callers:
 *     RestoreGammaRamp @ 0x1C00E3710 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C00E3A30 (FadeDesktop.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B07C0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00E3CF0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     GreSetDeviceGammaRampInternal @ 0x1C00E3D30 (GreSetDeviceGammaRampInternal.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]
  char v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v9 = 0;
  v10 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 32) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v11);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v11, (struct XDCOBJ *)&v8);
      v5 = GreSetDeviceGammaRampInternal(*(_QWORD *)(v8 + 48), a2, a3);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v11);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  if ( !v5 )
    EngSetLastError(0x57u);
  return v5;
}
