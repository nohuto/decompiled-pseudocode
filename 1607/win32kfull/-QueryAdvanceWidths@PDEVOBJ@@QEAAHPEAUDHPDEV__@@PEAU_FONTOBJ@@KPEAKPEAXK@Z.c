/*
 * XREFs of ?QueryAdvanceWidths@PDEVOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C002917C
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002DB58 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryAdvanceWidths(
        PDEVOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        __int64 a4,
        unsigned int *a5,
        void *a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  __int64 (__fastcall *v10)(struct DHPDEV__ *, struct _FONTOBJ *, __int64, unsigned int *, void *, unsigned int); // rbx
  _BYTE v12[64]; // [rsp+40h] [rbp-78h] BYREF

  v7 = 0;
  v10 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, __int64, unsigned int *, void *, unsigned int))(*(_QWORD *)this + 3136LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v12, this);
    v7 = v10(a2, a3, 1LL, a5, a6, a7);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v12);
  }
  return v7;
}
