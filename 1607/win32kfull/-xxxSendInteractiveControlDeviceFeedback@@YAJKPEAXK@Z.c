/*
 * XREFs of ?xxxSendInteractiveControlDeviceFeedback@@YAJKPEAXK@Z @ 0x1C0229804
 * Callers:
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C0219110 (NtUserSendInteractiveControlHapticsReport.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023BAB0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z.c)
 *     ?SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATION@@@Z @ 0x1C023BF88 (-SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATI.c)
 */

int __fastcall xxxSendInteractiveControlDeviceFeedback(
        unsigned int a1,
        struct _GERERIC_HAPTICS_CONFIGURATION *a2,
        int a3)
{
  int v6; // eax
  InteractiveControlManager *v7; // rax
  InteractiveControlManager *v8; // rax

  if ( a3 != 28 )
    return -1073741811;
  v6 = *((_DWORD *)a2 + 6);
  if ( v6 == 1 )
  {
    v7 = InteractiveControlManager::Instance();
    return InteractiveControlManager::SendDeviceHapticsOutput(
             v7,
             a1,
             (struct _GERERIC_HAPTICS_CONFIGURATION *)((char *)a2 + 8));
  }
  else if ( v6 == 2 )
  {
    v8 = InteractiveControlManager::Instance();
    return InteractiveControlManager::SetDeviceHapticsConfiguration(v8, a1, a2);
  }
  else
  {
    return -1073741637;
  }
}
