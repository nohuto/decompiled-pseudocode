/*
 * XREFs of NtGdiGetMiterLimit @ 0x14023F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetMiterLimit(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+C0h] [rbp+18h] BYREF

  v6 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v6 = *(_DWORD *)(v5[0] + 224LL);
    v3 = 1;
    GreProbeAndWriteToUntrustedVa(a2, 4uLL, &v6, 4uLL, 4uLL);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
