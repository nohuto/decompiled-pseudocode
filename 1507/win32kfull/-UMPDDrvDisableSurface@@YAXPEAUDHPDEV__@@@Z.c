/*
 * XREFs of ?UMPDDrvDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C029D550
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  size_t v2; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v3; // [rsp+30h] [rbp-38h] BYREF
  _QWORD Src[4]; // [rsp+38h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  memset(Src, 0, sizeof(Src));
  if ( v3 )
  {
    LODWORD(v2) = 0;
    Src[0] = 0x400000020LL;
    Src[2] = *(_QWORD *)v3;
    Src[3] = a1;
    UMPDOBJ::Thunk(v3, Src, 0x20u, 0LL, v2);
  }
  XUMPDOBJ::~XUMPDOBJ(&v3);
}
