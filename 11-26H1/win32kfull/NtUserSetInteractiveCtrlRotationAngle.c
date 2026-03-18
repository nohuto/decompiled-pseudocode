/*
 * XREFs of NtUserSetInteractiveCtrlRotationAngle @ 0x1402BCED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402F1FE0 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 */

__int64 __fastcall NtUserSetInteractiveCtrlRotationAngle(unsigned int a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v8; // rdx
  struct InteractiveControlManager *v9; // rax
  __int64 v10; // rcx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v8 = a2 - 1;
  v12 = a3;
  if ( (unsigned int)v8 > 7 )
    a2 = 3;
  v9 = InteractiveControlManager::Instance(3LL, v8);
  InteractiveControlManager::SetDeviceComponentResolution(v9, a1, a2, a4, &v12);
  UserSessionSwitchLeaveCrit(v10);
  return 1LL;
}
