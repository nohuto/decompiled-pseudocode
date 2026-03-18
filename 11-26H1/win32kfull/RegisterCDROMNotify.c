/*
 * XREFs of RegisterCDROMNotify @ 0x1402584F8
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

int __fastcall RegisterCDROMNotify(__int64 a1)
{
  unsigned __int64 Context; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  Context = (unsigned int)W32GetCurrentWin32kSessionId(a1);
  UserSessionState = W32GetUserSessionState(v3, v2);
  if ( !*(_QWORD *)(UserSessionState + 69872) )
  {
    v7 = W32GetUserSessionState(v6, v5);
    LODWORD(UserSessionState) = IoRegisterPlugPlayNotification(
                                  EventCategoryDeviceInterfaceChange,
                                  1u,
                                  &GUID_DEVINTERFACE_CDROM,
                                  gpWin32kDriverObject,
                                  DeviceClassCDROMNotify,
                                  (PVOID)Context,
                                  (PVOID *)(v7 + 69872));
  }
  return UserSessionState;
}
