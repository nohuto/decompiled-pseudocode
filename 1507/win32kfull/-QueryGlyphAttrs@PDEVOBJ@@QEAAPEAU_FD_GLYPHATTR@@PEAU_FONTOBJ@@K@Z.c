/*
 * XREFs of ?QueryGlyphAttrs@PDEVOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02B94CC
 * Callers:
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0285D30 (FONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032060 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00320A4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

struct _FD_GLYPHATTR *__fastcall PDEVOBJ::QueryGlyphAttrs(PDEVOBJ *this, struct _FONTOBJ *a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(struct _FONTOBJ *, _QWORD); // rbx
  __int64 v6; // rbx
  _BYTE v8[56]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)this + 3408LL);
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
