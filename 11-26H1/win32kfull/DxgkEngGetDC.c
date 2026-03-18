/*
 * XREFs of DxgkEngGetDC @ 0x1401DD4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14004129C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

HDC __fastcall DxgkEngGetDC(__int64 a1, _QWORD *a2)
{
  HDC DC; // rax
  HDC v4; // rdi
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 )
    *a2 = 0LL;
  DC = (HDC)NtUserGetDC();
  v4 = DC;
  if ( DC )
  {
    if ( !a2 )
      return v4;
    DCOBJA::DCOBJA((DCOBJA *)v6, DC);
    if ( v6[0] )
      *a2 = GreCreateDisplayDC(*(_QWORD *)(v6[0] + 48LL), 0LL);
    DCOBJA::~DCOBJA((DCOBJA *)v6);
    if ( *a2 )
      return v4;
    UserReleaseDC(v4);
  }
  return 0LL;
}
