/*
 * XREFs of NtGdiMoveTo @ 0x14032B460
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepMoveTo@@YAHAEAVXDCOBJ@@HHPEAUtagPOINT@@@Z @ 0x140326488 (-GrepMoveTo@@YAHAEAVXDCOBJ@@HHPEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall NtGdiMoveTo(HDC a1, int a2, int a3, void *a4)
{
  unsigned int v8; // ebx
  struct tagPOINT v9; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v10[14]; // [rsp+40h] [rbp-78h] BYREF

  v9 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v8 = GrepMoveTo((struct XDCOBJ *)v10, a2, a3, &v9);
    if ( v8 )
    {
      if ( a4 )
        GreProbeAndWriteToUntrustedVa(a4, 8uLL, &v9, 8uLL, 1uLL);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
    return v8;
  }
  else
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
    return 0LL;
  }
}
