/*
 * XREFs of ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C002A168
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0027E40 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B6618 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C02BC4D4 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryFontTree(
        PDEVOBJ *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v10)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *); // rbx
  _BYTE v12[64]; // [rsp+30h] [rbp-88h] BYREF

  v6 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)this
                                                                                                 + 2928LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v12, this);
    v6 = v10(a2, a3, a4, a5, a6);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v12);
  }
  return v6;
}
