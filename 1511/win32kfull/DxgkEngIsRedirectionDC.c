/*
 * XREFs of DxgkEngIsRedirectionDC @ 0x1C0263500
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9F0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDC(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 36LL) & 0x4000;
  else
    v1 = 1;
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v3);
  return v1;
}
