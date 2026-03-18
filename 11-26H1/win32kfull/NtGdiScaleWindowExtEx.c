/*
 * XREFs of NtGdiScaleWindowExtEx @ 0x1402070A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepScaleWindowExtEx@@YAHAEAVXDCOBJ@@HHHHPEAUtagSIZE@@@Z @ 0x14020716C (-GrepScaleWindowExtEx@@YAHAEAVXDCOBJ@@HHHHPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall NtGdiScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, void *a6)
{
  unsigned int v10; // ebx
  struct tagSIZE v11; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v12[14]; // [rsp+40h] [rbp-78h] BYREF

  v11 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v10 = GrepScaleWindowExtEx((struct XDCOBJ *)v12, a2, a3, a4, a5, &v11);
    if ( v10 )
    {
      if ( a6 )
        GreProbeAndWriteToUntrustedVa(a6, 8uLL, &v11, 8uLL, 1uLL);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
    return v10;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
    return 0LL;
  }
}
