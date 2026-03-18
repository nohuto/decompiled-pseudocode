/*
 * XREFs of ?QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C02B9554
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032060 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00320A4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryTrueTypeOutline(
        PDEVOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        unsigned int a7,
        struct tagTTPOLYGONHEADER *a8)
{
  unsigned int v8; // edi
  __int64 (__fastcall *v11)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *); // rbx
  _BYTE v13[56]; // [rsp+40h] [rbp-68h] BYREF

  v8 = -1;
  v11 = *(__int64 (__fastcall **)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *))(*(_QWORD *)this + 3112LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v13, this);
    v8 = v11(0LL, a3, a4, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v13);
  }
  return v8;
}
