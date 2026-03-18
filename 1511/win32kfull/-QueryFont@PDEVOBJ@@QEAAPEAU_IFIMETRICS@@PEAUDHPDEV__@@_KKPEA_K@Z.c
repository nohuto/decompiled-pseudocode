/*
 * XREFs of ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C001CD38
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C011A3D0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B2BF0 (GreMakeFontDir.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B34D8 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C001B08C (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C001B0D0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
