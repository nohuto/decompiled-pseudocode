/*
 * XREFs of ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C002A210
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0064910 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B6618 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
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
  _BYTE v11[64]; // [rsp+30h] [rbp-88h] BYREF

  v5 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, unsigned __int64 *))(*(_QWORD *)this + 2920LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v11, this);
    v5 = v9(a2, a3, a4, a5);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v11);
  }
  return (struct _IFIMETRICS *)v5;
}
