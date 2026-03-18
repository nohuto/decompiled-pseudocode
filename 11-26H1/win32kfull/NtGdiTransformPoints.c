/*
 * XREFs of NtGdiTransformPoints @ 0x14003E730
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z @ 0x14003E8F4 (-GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiTransformPoints(HDC a1, const void *a2, void *a3, int a4, int a5)
{
  __int64 v5; // r14
  const void *v7; // rax
  unsigned int v9; // esi
  struct tagPOINT *v10; // rdi
  _QWORD v13[14]; // [rsp+60h] [rbp-108h] BYREF
  tagPOINT v14; // [rsp+D0h] [rbp-98h] BYREF

  v5 = a4;
  v7 = a2;
  v9 = 1;
  v10 = &v14;
  if ( a4 > 0 )
  {
    if ( a4 > 10 )
    {
      v10 = 0LL;
      if ( (unsigned int)a4 <= 0x4E2000 )
      {
        v10 = (struct tagPOINT *)AllocFreeTmpBuffer((unsigned int)(8 * a4));
        v7 = a2;
      }
    }
    if ( v10 )
    {
      GreProbeForReadFromUntrustedVa(v7, 8 * v5, 1uLL);
      memmove(v10, a2, 8 * v5);
    }
    else
    {
      v9 = 0;
    }
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
    if ( v9 )
    {
      v9 = v13[0] != 0LL;
      if ( v13[0] )
      {
        v9 = GrepTransformPoints((struct XDCOBJ *)v13, v10, v10, v5, a5);
        if ( v9 )
          GreProbeAndWriteToUntrustedVa(a3, 8LL * (int)v5, v10, 8LL * (int)v5, 1uLL);
      }
    }
    if ( v10 && v10 != &v14 )
      FreeTmpBuffer(v10);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  }
  return v9;
}
