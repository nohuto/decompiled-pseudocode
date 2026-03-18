/*
 * XREFs of NtGdiDescribePixelFormat @ 0x14032A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z @ 0x1403343A0 (-GrepDescribePixelFormat@@YAHAEAVXDCOBJ@@HIPEAUtagPIXELFORMATDESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiDescribePixelFormat(HDC a1, int a2, unsigned int a3, void *a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned int v8; // ebx
  _QWORD v9[14]; // [rsp+30h] [rbp-B8h] BYREF
  tagPIXELFORMATDESCRIPTOR v10; // [rsp+A0h] [rbp-48h] BYREF

  v5 = a3;
  result = 0LL;
  memset(&v10, 0, sizeof(v10));
  if ( !a3 || a4 )
  {
    if ( a3 >= 0x28 )
      v5 = 40;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
    if ( v9[0] )
    {
      v8 = GrepDescribePixelFormat((struct XDCOBJ *)v9, a2, v5, &v10);
    }
    else
    {
      EngSetLastError(6u);
      v8 = 0;
    }
    if ( v8 )
    {
      if ( v5 )
        GreProbeAndWriteToUntrustedVa(a4, v5, &v10, v5, 4uLL);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
    return v8;
  }
  return result;
}
