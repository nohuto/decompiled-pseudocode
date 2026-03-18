/*
 * XREFs of DxgkEngWatchVisRgnChange @ 0x1401D1D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

void __fastcall DxgkEngWatchVisRgnChange(HDC a1, int a2)
{
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    if ( a2 )
      *(_DWORD *)(v3[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v3[0] + 36LL) &= ~0x20000u;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
}
