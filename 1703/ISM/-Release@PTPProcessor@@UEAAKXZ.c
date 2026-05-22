/*
 * XREFs of ?Release@PTPProcessor@@UEAAKXZ @ 0x180001BA0
 * Callers:
 *     ?Release@DWMCursor@@W7EAAKXZ @ 0x180005590 (-Release@DWMCursor@@W7EAAKXZ.c)
 *     ?Release@GestureTargetingComponent@@WBA@EAAKXZ @ 0x1800055A0 (-Release@GestureTargetingComponent@@WBA@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WMA@EAAKXZ @ 0x18005C270 (-Release@PTPProcessor@@WMA@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WMI@EAAKXZ @ 0x18005C2B0 (-Release@PTPProcessor@@WMI@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WLA@EAAKXZ @ 0x18005C2F0 (-Release@PTPProcessor@@WLA@EAAKXZ.c)
 *     ?Release@PTPProcessor@@WLI@EAAKXZ @ 0x18005C330 (-Release@PTPProcessor@@WLI@EAAKXZ.c)
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180060A50 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ??1?$RefPtr@VWGIRawInputProvider@@@@QEAA@XZ @ 0x180061704 (--1-$RefPtr@VWGIRawInputProvider@@@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::Release(PTPProcessor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 16);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 6) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 16);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
