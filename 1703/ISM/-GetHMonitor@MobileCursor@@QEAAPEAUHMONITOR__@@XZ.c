/*
 * XREFs of ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x180026EC8
 * Callers:
 *     ?SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z @ 0x1800261F0 (-SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180026690 (-ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z.c)
 *     ?SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z @ 0x180026728 (-SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z.c)
 *     ??1MobileCursor@@MEAA@XZ @ 0x180026BA4 (--1MobileCursor@@MEAA@XZ.c)
 *     ?SetPosition@MobileCursor@@UEAAJJJ@Z @ 0x180026FE0 (-SetPosition@MobileCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursor::GetHMonitor(MobileCursor *this)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0LL;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 24LL))(v1, &v6);
  if ( v3 >= 0 )
    return v6;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 69, v3);
  return v2;
}
