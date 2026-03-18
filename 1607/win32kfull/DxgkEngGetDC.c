/*
 * XREFs of DxgkEngGetDC @ 0x1C0260EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0008180 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

HDC __fastcall DxgkEngGetDC(__int64 a1, _QWORD *a2)
{
  HDC DC; // rax
  HDC v4; // rdi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
    *a2 = 0LL;
  DC = (HDC)NtUserGetDC();
  v4 = DC;
  if ( !DC )
    return 0LL;
  if ( a2 )
  {
    MDCOBJA::MDCOBJA((MDCOBJA *)v6, DC);
    if ( v6[0] )
      *a2 = GreCreateDisplayDC(*(_QWORD *)(v6[0] + 48LL), 0LL);
    XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v6);
    if ( !*a2 )
    {
      UserReleaseDC(v4);
      return 0LL;
    }
  }
  return v4;
}
