/*
 * XREFs of GreIsRendering @ 0x1C00546A0
 * Callers:
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0039878 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C003BB20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  _DWORD *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = v3[0][10] & 1;
  else
    v1 = 0;
  if ( v3[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v3);
    HmgDecrementShareReferenceCount(v3[0]);
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v4);
  return v1;
}
