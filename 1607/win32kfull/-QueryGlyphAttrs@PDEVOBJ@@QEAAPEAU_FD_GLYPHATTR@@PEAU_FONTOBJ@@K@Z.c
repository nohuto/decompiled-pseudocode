/*
 * XREFs of ?QueryGlyphAttrs@PDEVOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02BBC80
 * Callers:
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0283EB0 (FONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

struct _FD_GLYPHATTR *__fastcall PDEVOBJ::QueryGlyphAttrs(PDEVOBJ *this, struct _FONTOBJ *a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(struct _FONTOBJ *, _QWORD); // rbx
  __int64 v6; // rbx
  _BYTE v8[64]; // [rsp+20h] [rbp-68h] BYREF

  v5 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)this + 3400LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v8, this);
    if ( v5 )
    {
      v6 = v5(a2, a3);
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v8);
      return (struct _FD_GLYPHATTR *)v6;
    }
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v8);
  }
  return 0LL;
}
