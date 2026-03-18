/*
 * XREFs of GreIsRendering @ 0x1C0046D60
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 40LL) & 1;
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v3);
  return v1;
}
