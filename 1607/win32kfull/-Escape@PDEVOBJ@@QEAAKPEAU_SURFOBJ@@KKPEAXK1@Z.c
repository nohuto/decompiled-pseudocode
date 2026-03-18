/*
 * XREFs of ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02BBA74
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C026561C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscapeHelper@@YAXPEAX@Z @ 0x1C0266B80 (-iOpenGLExtEscapeHelper@@YAXPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266BC0 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02959E0 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     GreNamedEscape @ 0x1C0299864 (GreNamedEscape.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::Escape(
        PDEVOBJ *this,
        struct _SURFOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7)
{
  unsigned int v7; // edi
  __int64 (__fastcall *v11)(struct _SURFOBJ *, _QWORD, _QWORD, void *, unsigned int, void *); // rbx
  _BYTE v13[64]; // [rsp+40h] [rbp-88h] BYREF

  v7 = 0;
  v11 = *(__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)this
                                                                                                  + 2904LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v13, this);
    v7 = v11(a2, a3, a4, a5, a6, a7);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v13);
  }
  return v7;
}
