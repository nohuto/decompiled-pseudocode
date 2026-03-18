/*
 * XREFs of ?QueryTrueTypeTable@PDEVOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0030ED0
 * Callers:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C002F7F8 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C029BA70 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032060 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00320A4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryTrueTypeTable(
        PDEVOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  unsigned int v9; // esi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  _BYTE v15[56]; // [rsp+50h] [rbp-88h] BYREF

  v9 = -1;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(*(_QWORD *)this + 3104LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v15, this);
    if ( a7 )
      *a7 = 0;
    if ( v13 )
      v9 = v13(a2, a3, a4, a5, a6, a7, a8, a9);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v15);
  }
  return v9;
}
