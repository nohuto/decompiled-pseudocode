/*
 * XREFs of DxgkEngLockVisRgn @ 0x1C00EAB50
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00EB21C (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall DxgkEngLockVisRgn(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *(_QWORD *)(v3[0] + 48LL);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v3);
  return v1;
}
