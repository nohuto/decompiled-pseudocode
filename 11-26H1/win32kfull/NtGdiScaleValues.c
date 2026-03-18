/*
 * XREFs of NtGdiScaleValues @ 0x14032BA80
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1401114C4 (-GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ??0TMPBUFOBJ@@QEAA@K@Z @ 0x140329F7C (--0TMPBUFOBJ@@QEAA@K@Z.c)
 *     ??1TMPBUFOBJ@@QEAA@XZ @ 0x140329FB0 (--1TMPBUFOBJ@@QEAA@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiScaleValues(HDC a1, void *a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // edi
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF
  void *Src; // [rsp+C8h] [rbp+20h] BYREF

  v6 = 4LL * a3;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  TMPBUFOBJ::TMPBUFOBJ((TMPBUFOBJ *)&Src, v6);
  if ( !Src )
  {
    TMPBUFOBJ::~TMPBUFOBJ((TMPBUFOBJ *)&Src);
    return 0LL;
  }
  v7 = (unsigned int)v6;
  GreProbeForReadFromUntrustedVa(a2, (unsigned int)v6, 4uLL);
  memmove(Src, a2, (unsigned int)v6);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  v8 = v10[0] != 0LL;
  if ( v10[0] )
  {
    v8 = GrepScaleValues((struct XDCOBJ *)v10, (int *)Src, a3);
    if ( v8 )
    {
      GreProbeForWriteToUntrustedVa(a2, v7, 4uLL);
      memmove(a2, Src, v7);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  TMPBUFOBJ::~TMPBUFOBJ((TMPBUFOBJ *)&Src);
  return v8;
}
