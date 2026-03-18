/*
 * XREFs of ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C0145F2C
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C0145DB8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
    LOBYTE(v4) = UMPDOBJ::Thunk(v7, Src, 0x20u, a2, Size) != -1;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v7);
  return v4;
}
