/*
 * XREFs of GreSetDCOrg @ 0x1C00547B0
 * Callers:
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0039878 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003B168 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C003DA74 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C003E060 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDCOrg(HDC a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  DC *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  if ( v9[0] )
  {
    v7 = 1;
    *(_DWORD *)DC::eptlOrigin(v9[0]) = a2;
    *((_DWORD *)DC::eptlOrigin(v9[0]) + 1) = a3;
    DC::vCalcFillOrigin(v9[0]);
    if ( a4 )
      *((_OWORD *)v9[0] + 89) = *a4;
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v10);
  return v7;
}
