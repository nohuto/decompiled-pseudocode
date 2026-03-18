/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x14020B480
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  BOOL v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v4; // [rsp+A8h] [rbp+10h] BYREF

  v1 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    DC::QuickInitXform(v3[0], &v4, 516LL);
    v1 = (*(_BYTE *)(v4 + 32) & 1) != 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
