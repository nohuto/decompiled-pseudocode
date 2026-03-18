/*
 * XREFs of NtGdiGetTextFaceW @ 0x1401B7020
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z @ 0x1400C6298 (-GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z.c)
 */

__int64 __fastcall NtGdiGetTextFaceW(HDC a1, int a2, void *a3, int a4)
{
  int TextFaceW; // ebx
  unsigned __int16 *v9; // rdi
  BOOL v10; // r15d
  int v11; // eax
  _QWORD v13[14]; // [rsp+40h] [rbp-88h] BYREF

  TextFaceW = 0;
  v9 = 0LL;
  v10 = 1;
  if ( a2 > 0 && a3 )
  {
    if ( (unsigned int)a2 <= 0x1388000 )
      v9 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
    v10 = v9 != 0LL;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  if ( v10 && v13[0] )
  {
    TextFaceW = GrepGetTextFaceW((struct DCOBJ *)v13, a2, v9, a4);
    if ( TextFaceW > 0 && a3 )
    {
      v11 = 0;
      if ( TextFaceW <= a2 )
        v11 = TextFaceW;
      TextFaceW = v11;
      if ( v11 )
        GreProbeAndWriteToUntrustedVa(a3, 2LL * v11, v9, 2LL * v11, 1uLL);
    }
    if ( v9 )
      FreeTmpBuffer(v9);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  return (unsigned int)TextFaceW;
}
