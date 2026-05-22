/*
 * XREFs of ?SetPosition@MobileCursor@@UEAAJJJ@Z @ 0x180026FE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180026690 (-ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x180026EC8 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursor::SetPosition(MobileCursor *this, int a2, int a3)
{
  MobileCursorBroker *v3; // r14
  HMONITOR HMonitor; // r15
  int v6; // eax
  unsigned int v7; // ebx
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-58h] BYREF

  v3 = (MobileCursorBroker *)*((_QWORD *)this + 3);
  *((_DWORD *)this + 18) = a3;
  *((_DWORD *)this + 17) = a2;
  HMonitor = (HMONITOR)MobileCursor::GetHMonitor(this);
  if ( *((_DWORD *)this + 16) == 1 )
  {
    *((_DWORD *)this + 16) = 0;
    MobileCursorBroker::ShowCursor(v3, this, *((_BYTE *)this + 56));
  }
  if ( (gdwMitConfig & 1) != 0 )
  {
    memset(&mi.rcMonitor, 0, 0x24uLL);
    mi.cbSize = 40;
    GetMonitorInfoW(HMonitor, &mi);
  }
  v6 = (*((__int64 (__fastcall **)(HMONITOR))v3 + 8))(HMonitor);
  v7 = v6;
  if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq((unsigned int)Microsoft_OneCore_MinInputEnableBits, &MinInput_Warning_CheckResult, 0, 370, v6);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((unsigned int)Microsoft_OneCore_MinInputEnableBits, &MinInput_Warning_CheckResult, 0, 120, v7);
  }
  return v7;
}
