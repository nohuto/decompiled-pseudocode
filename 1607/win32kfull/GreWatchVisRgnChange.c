/*
 * XREFs of GreWatchVisRgnChange @ 0x1C0290508
 * Callers:
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v4, a1);
  if ( v4[0] )
  {
    if ( a2 )
      *(_DWORD *)(v4[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v4[0] + 36LL) &= ~0x20000u;
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v4);
  return UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v5);
}
