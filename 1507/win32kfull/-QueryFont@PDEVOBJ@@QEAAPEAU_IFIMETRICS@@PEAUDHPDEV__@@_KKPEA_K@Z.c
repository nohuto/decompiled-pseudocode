/*
 * XREFs of ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C0141494
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013EA70 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B3AAC (GreMakeFontDir.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B4510 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032060 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00320A4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

struct _IFIMETRICS *__fastcall PDEVOBJ::QueryFont(
        PDEVOBJ *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v9)(struct DHPDEV__ *, __int64, _QWORD, unsigned __int64 *); // rbx
  _BYTE v11[56]; // [rsp+30h] [rbp-78h] BYREF

  v5 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, unsigned __int64 *))(*(_QWORD *)this + 2928LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v11, this);
    v5 = v9(a2, a3, a4, a5);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v11);
  }
  return (struct _IFIMETRICS *)v5;
}
