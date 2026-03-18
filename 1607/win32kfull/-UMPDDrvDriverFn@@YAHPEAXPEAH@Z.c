/*
 * XREFs of ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C029D654
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C02A3D50 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

__int64 __fastcall UMPDDrvDriverFn(void *a1, int *a2)
{
  unsigned int v4; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v7; // [rsp+30h] [rbp-38h] BYREF
  _QWORD Src[4]; // [rsp+38h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  memset(Src, 0, sizeof(Src));
  v4 = 0;
  if ( v7 )
  {
    Src[0] = 0x6B00000020LL;
    Src[2] = *(_QWORD *)v7;
    Src[3] = a1;
    LODWORD(Size) = 412;
    LOBYTE(v4) = (unsigned int)UMPDOBJ::Thunk(v7, Src, 32LL, a2, Size) != -1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v7);
  return v4;
}
