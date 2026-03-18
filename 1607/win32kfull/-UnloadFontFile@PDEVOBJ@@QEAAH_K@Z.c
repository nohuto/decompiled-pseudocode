/*
 * XREFs of ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C002A2A8
 * Callers:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C002177C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::UnloadFontFile(PDEVOBJ *this, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rbx
  unsigned int v4; // ebx
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 3080LL);
  if ( !gpepCSRSS )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v6, this);
  v4 = v3(a2);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v6);
  return v4;
}
