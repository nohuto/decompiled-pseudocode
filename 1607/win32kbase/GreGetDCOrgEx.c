/*
 * XREFs of GreGetDCOrgEx @ 0x1C0075B20
 * Callers:
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002731C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  unsigned int DCPoint; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  DCPoint = 0;
  if ( v7[0] )
  {
    *a3 = *(_OWORD *)(v7[0] + 1424LL);
    DCPoint = GreGetDCPoint(a1);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v8);
  return DCPoint;
}
