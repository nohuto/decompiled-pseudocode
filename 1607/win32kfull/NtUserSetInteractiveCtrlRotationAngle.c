/*
 * XREFs of NtUserSetInteractiveCtrlRotationAngle @ 0x1C0219C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023BC38 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 */

__int64 __fastcall NtUserSetInteractiveCtrlRotationAngle(unsigned int a1, unsigned int a2, int a3, unsigned int a4)
{
  struct InteractiveControlManager *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v12 = a3;
  if ( a2 - 1 > 7 )
    a2 = 3;
  v8 = InteractiveControlManager::Instance();
  InteractiveControlManager::SetDeviceComponentResolution(v8, a1, a2, a4, &v12);
  UserSessionSwitchLeaveCrit(v10, v9);
  return 1LL;
}
