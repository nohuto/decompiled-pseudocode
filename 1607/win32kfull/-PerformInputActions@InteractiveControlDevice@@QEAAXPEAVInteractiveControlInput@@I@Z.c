/*
 * XREFs of ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023DA94
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     UpdateInputGlobalsEx @ 0x1C00A3FC0 (UpdateInputGlobalsEx.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x1C0134F20 (GetUserHandedness.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023CB30 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023CE9C (-DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023CEE4 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023E030 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_GERERIC_HAPTICS_OUTPUT@@@Z.c)
 */

void __fastcall InteractiveControlDevice::PerformInputActions(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        __int16 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 0x240) != 0 )
    UpdateInputGlobalsEx(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      0,
      2u,
      1);
  if ( !*((_DWORD *)this + 68) )
    InteractiveControlDevice::DetectPressAndHoldGesture(this, a2, a3);
  if ( (a3 & 0x40) != 0 )
  {
    v10[3] = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[0] = 5;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _GERERIC_HAPTICS_OUTPUT *)v10);
  }
  if ( (a3 & 0x80u) != 0
    && !*((_DWORD *)this + 26)
    && *((_DWORD *)InteractiveControlManager::Instance() + 21)
    && !*((_DWORD *)this + 27) )
  {
    v11[3] = 0;
    v11[1] = 0;
    v11[2] = 0;
    v11[0] = 3;
    InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _GERERIC_HAPTICS_OUTPUT *)v11);
  }
  if ( *((_QWORD *)this + 50) != -1LL )
  {
    if ( (unsigned int)GetUserHandedness() != *((_DWORD *)this + 98) )
    {
      InteractiveControlDevice::DestroyDeadzone(this);
      InteractiveControlDevice::CreateDeadzone(this);
    }
    if ( (a3 & 0x400) != 0 || (a3 & 0x1000) != 0 )
    {
      v6 = *((_QWORD *)this + 35);
      if ( v6 )
      {
        v7 = *((_QWORD *)this + 50);
        if ( v7 != -1 )
          RIMUpdatePointerDeviceDeadzoneOrigin(v6 + 64, v7, *((_QWORD *)a2 + 8));
      }
    }
    if ( (a3 & 0x400) != 0 || (a3 & 0x800) != 0 )
    {
      v8 = *((_QWORD *)this + 35);
      if ( v8 )
      {
        v9 = *((_QWORD *)this + 50);
        if ( v9 != -1 )
          RIMActivatePointerDeviceDeadzone(v8 + 64, v9, (*((unsigned __int8 *)a2 + 72) >> 1) & 1);
      }
    }
  }
}
