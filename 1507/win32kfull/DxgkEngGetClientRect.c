/*
 * XREFs of DxgkEngGetClientRect @ 0x1C0100E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0016C48 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_OWORD *)(v5[0] + 1424LL);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v6);
  return v3;
}
