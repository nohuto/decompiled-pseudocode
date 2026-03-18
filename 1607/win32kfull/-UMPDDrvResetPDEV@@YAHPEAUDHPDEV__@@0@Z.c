/*
 * XREFs of ?UMPDDrvResetPDEV@@YAHPEAUDHPDEV__@@0@Z @ 0x1C02A0B10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

_BOOL8 __fastcall UMPDDrvResetPDEV(struct DHPDEV__ *a1, struct DHPDEV__ *a2)
{
  BOOL v4; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  _QWORD Src[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  memset(Src, 0, sizeof(Src));
  v4 = 0;
  if ( v8 )
  {
    Src[0] = 0x700000028LL;
    Src[2] = *(_QWORD *)v8;
    Src[3] = a1;
    Src[4] = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, Src, 40LL, &v7, Size) != -1 )
      v4 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v4;
}
