/*
 * XREFs of ?DoStackCapture@@YAXJI@Z @ 0x180003D40
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x180001A58 (-WaitForLsa@@YAJXZ.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001B0C (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001C10 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001F40 (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180002000 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002634 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000290C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002F00 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x1800030E0 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x1800032F0 (DwmpNotifyUserLogoff.c)
 *     DwmpTerminateSessionProcess @ 0x180003350 (DwmpTerminateSessionProcess.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x1800039F8 (-StartLaunchAppService@@YAJXZ.c)
 *     DwmpSignalSessionShutdown @ 0x1800046A0 (DwmpSignalSessionShutdown.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004914 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004A90 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004C60 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCapture(int a1, int a2)
{
  DoStackCapture(0, a1, a2);
}
