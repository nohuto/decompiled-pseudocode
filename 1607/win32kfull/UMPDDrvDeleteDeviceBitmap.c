/*
 * XREFs of UMPDDrvDeleteDeviceBitmap @ 0x1C02A2DC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDDrvDeleteDeviceBitmap(__int64 a1, __int64 a2)
{
  size_t v4; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD Src[5]; // [rsp+38h] [rbp-40h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  if ( v5 )
  {
    memset(Src, 0, sizeof(Src));
    LODWORD(v4) = 0;
    Src[0] = 0xB00000028LL;
    Src[2] = *(_QWORD *)v5;
    Src[3] = a1;
    Src[4] = a2;
    UMPDOBJ::Thunk(v5, Src, 40LL, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
