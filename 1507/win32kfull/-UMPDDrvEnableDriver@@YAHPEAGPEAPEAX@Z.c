/*
 * XREFs of ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C011B690
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C011B468 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C011C840 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

_BOOL8 __fastcall UMPDDrvEnableDriver(unsigned __int16 *a1, void **a2)
{
  UMPDOBJ *v4; // rbx
  BOOL v5; // edi
  size_t Size; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD Src[4]; // [rsp+38h] [rbp-40h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  memset(Src, 0, sizeof(Src));
  v4 = v8;
  v5 = 0;
  if ( v8 )
  {
    if ( a1 )
    {
      Src[0] = 0x6800000020LL;
      Src[2] = *(_QWORD *)v8;
      Src[3] = a1;
      if ( (unsigned int)UMPDOBJ::ThunkStringW(v8, (unsigned __int16 **)&Src[3]) )
      {
        LODWORD(Size) = 8;
        v5 = UMPDOBJ::Thunk(v4, Src, 0x20u, a2, Size) != -1;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v8);
  return v5;
}
