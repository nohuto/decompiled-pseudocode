/*
 * XREFs of GreSelectVisRgnShared @ 0x1C00382B0
 * Callers:
 *     NtUserGetDC @ 0x1C00210B0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002731C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectVisRgnShared(HDC a1, HRGN a2, int a3)
{
  unsigned int v5; // ebx
  struct DC *v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v5 = GreSelectVisRgnInternal(v7, a2, a3);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v8);
  return v5;
}
