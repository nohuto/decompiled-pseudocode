/*
 * XREFs of ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180026690
 * Callers:
 *     ?OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180025F90 (-OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z @ 0x1800261F0 (-SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180026470 (-OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ??1MobileCursor@@MEAA@XZ @ 0x180026BA4 (--1MobileCursor@@MEAA@XZ.c)
 *     ?SetPosition@MobileCursor@@UEAAJJJ@Z @ 0x180026FE0 (-SetPosition@MobileCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x180026EC8 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MobileCursorBroker::ShowCursor(MobileCursorBroker *this, struct MobileCursor *a2, unsigned __int8 a3)
{
  __int64 v6; // rcx
  HMONITOR HMonitor; // rax
  int v8; // eax
  __int64 v9; // rcx

  if ( ((*(__int64 (__fastcall **)(struct MobileCursor *))(*(_QWORD *)a2 + 48LL))(a2) & 8) != 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 542, 87);
  }
  else
  {
    HMonitor = MobileCursor::GetHMonitor(a2);
    v8 = (*((__int64 (__fastcall **)(HMONITOR, _QWORD))this + 7))(HMonitor, a3);
    if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 545, v8);
  }
}
