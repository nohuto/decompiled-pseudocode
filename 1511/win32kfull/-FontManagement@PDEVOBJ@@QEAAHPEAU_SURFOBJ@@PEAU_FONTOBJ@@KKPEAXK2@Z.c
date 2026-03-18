/*
 * XREFs of ?FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02B878C
 * Callers:
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02A231C (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     NtGdiGetETM @ 0x1C02B2DC0 (NtGdiGetETM.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C001B08C (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C001B0D0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::FontManagement(
        PDEVOBJ *this,
        struct _SURFOBJ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8)
{
  unsigned int v8; // edi
  __int64 (__fastcall *v12)(struct _SURFOBJ *, struct _FONTOBJ *, _QWORD, _QWORD, void *, unsigned int, void *); // rbx
  _BYTE v14[56]; // [rsp+40h] [rbp-78h] BYREF

  v8 = 0;
  v12 = *(__int64 (__fastcall **)(struct _SURFOBJ *, struct _FONTOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)this + 3096LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v14, this);
    if ( v12 )
      v8 = v12(a2, a3, a4, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v14);
  }
  return v8;
}
