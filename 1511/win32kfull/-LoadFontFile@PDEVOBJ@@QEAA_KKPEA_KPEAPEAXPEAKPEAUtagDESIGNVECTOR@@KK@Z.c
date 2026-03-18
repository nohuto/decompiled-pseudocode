/*
 * XREFs of ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C001D0E4
 * Callers:
 *     KmfdLoadFontFileView @ 0x1C0011294 (KmfdLoadFontFileView.c)
 *     UmfdLoadFontFileView @ 0x1C025CFF4 (UmfdLoadFontFileView.c)
 *     GreMakeFontDir @ 0x1C02B2BF0 (GreMakeFontDir.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C001B08C (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C001B0D0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::LoadFontFile(
        PDEVOBJ *this,
        unsigned int a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v12)(_QWORD, unsigned __int64 *, void **, unsigned int *, struct tagDESIGNVECTOR *, unsigned int, unsigned int); // rbx
  _BYTE v14[56]; // [rsp+40h] [rbp-78h] BYREF

  v8 = 0LL;
  v12 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, void **, unsigned int *, struct tagDESIGNVECTOR *, unsigned int, unsigned int))(*(_QWORD *)this + 3080LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v14, this);
    v8 = v12(a2, a3, a4, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v14);
  }
  return v8;
}
