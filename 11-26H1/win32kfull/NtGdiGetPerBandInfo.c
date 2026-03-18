/*
 * XREFs of NtGdiGetPerBandInfo @ 0x14024B390
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z @ 0x14024B460 (-GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ??$GreProbeAndReadFromUntrustedVa@U_PERBANDINFO@@@@YAXPEAU_PERBANDINFO@@PEBU0@_K@Z @ 0x140310398 (--$GreProbeAndReadFromUntrustedVa@U_PERBANDINFO@@@@YAXPEAU_PERBANDINFO@@PEBU0@_K@Z.c)
 *     ??$GreProbeAndWriteToUntrustedVa@U_PERBANDINFO@@@@YAXPEAU_PERBANDINFO@@PEBU0@_K@Z @ 0x1403103CC (--$GreProbeAndWriteToUntrustedVa@U_PERBANDINFO@@@@YAXPEAU_PERBANDINFO@@PEBU0@_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetPerBandInfo(HDC a1, __int64 a2)
{
  unsigned int PerBandInfo; // ebx
  _QWORD v6[14]; // [rsp+20h] [rbp-98h] BYREF
  _PERBANDINFO v7; // [rsp+90h] [rbp-28h] BYREF

  memset(&v7, 0, sizeof(v7));
  PerBandInfo = 0;
  if ( a2 )
    GreProbeAndReadFromUntrustedVa<_PERBANDINFO>(&v7);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0] )
    PerBandInfo = GrepGetPerBandInfo((struct XDCOBJ *)v6, &v7);
  if ( PerBandInfo - 1 <= 0xFFFFFFFD )
    GreProbeAndWriteToUntrustedVa<_PERBANDINFO>(a2, &v7);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return PerBandInfo;
}
