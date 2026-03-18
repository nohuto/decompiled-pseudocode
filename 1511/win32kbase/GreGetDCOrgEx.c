/*
 * XREFs of GreGetDCOrgEx @ 0x1C0042250
 * Callers:
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  unsigned int DCPoint; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v7, a1);
  DCPoint = 0;
  if ( v7[0] )
  {
    *a3 = *(_OWORD *)(v7[0] + 1424LL);
    DCPoint = GreGetDCPoint(a1);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
  return DCPoint;
}
