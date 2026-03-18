/*
 * XREFs of NtGdiSetMiterLimit @ 0x140215B70
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtGdiSetMiterLimit(HDC a1, unsigned int a2, void *a3)
{
  BOOL v5; // edi
  _DWORD v7[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v8[14]; // [rsp+40h] [rbp-78h] BYREF
  float v9; // [rsp+D8h] [rbp+20h] BYREF

  v7[0] = 0;
  v9 = 0.0;
  v5 = GrepConvertDwordToFloat(a2, &v9);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
  if ( v5 )
  {
    v5 = v8[0] != 0LL;
    if ( v8[0] )
    {
      if ( v9 < 1.0 )
      {
        EngSetLastError(0x57u);
        v5 = 0;
      }
      else
      {
        v7[0] = *(_DWORD *)(v8[0] + 224LL);
        *(float *)(v8[0] + 224LL) = v9;
        v5 = 1;
      }
      if ( v5 && a3 )
        GreProbeAndWriteToUntrustedVa(a3, 4uLL, v7, 4uLL, 4uLL);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  return v5;
}
