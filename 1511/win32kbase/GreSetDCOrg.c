/*
 * XREFs of GreSetDCOrg @ 0x1C0044280
 * Callers:
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002D734 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C002DBD0 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetDCOrg(HDC a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  DC *v8; // rcx
  DC *v9; // rcx
  __int64 v10; // r10
  DC *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v12, a1);
  if ( v12[0] )
  {
    v7 = 1;
    *(_DWORD *)DC::eptlOrigin(v12[0]) = a2;
    *((_DWORD *)DC::eptlOrigin(v8) + 1) = a3;
    DC::vCalcFillOrigin(v9);
    if ( a4 )
      *(_OWORD *)(v10 + 1424) = *a4;
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v12);
  return v7;
}
