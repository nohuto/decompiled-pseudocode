/*
 * XREFs of AllocateHidData @ 0x140090364
 * Callers:
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14009023C (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401724EC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x140172814 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140270360 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1402706C0 (EditionPostRawMouseInputMessage.c)
 *     CopyHidData @ 0x14029AA94 (CopyHidData.c)
 * Callees:
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12@@Z @ 0x1401BCA5C (-AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12.c)
 *     ?AllocateHidData_NoTarget@RawInput@InputTraceLogging@@SAXQEAUtagQ@@PEAX@Z @ 0x140296CF8 (-AllocateHidData_NoTarget@RawInput@InputTraceLogging@@SAXQEAUtagQ@@PEAX@Z.c)
 */

__int64 __fastcall AllocateHidData(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // rdi
  unsigned int ThreadId; // ebx
  unsigned int v7; // esi
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  PETHREAD *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdi
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+88h] [rbp+10h]

  v22 = a2;
  v5 = a5;
  ThreadId = 0;
  v7 = a3;
  if ( a5 )
  {
    v9 = 0;
  }
  else
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928);
    v5 = *(__int64 **)(v11 + 120);
    if ( !v5 )
    {
      v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18928);
      v5 = *(__int64 **)(v13 + 128);
      if ( !v5 )
      {
        UserSessionState = W32GetUserSessionState(v13, v12);
        InputTraceLogging::RawInput::AllocateHidData_NoTarget(*(struct tagQ *const *)(UserSessionState + 18928), a1);
        return 0LL;
      }
    }
    v9 = 1;
  }
  v16 = (PETHREAD *)v5[2];
  v17 = v7 + 80;
  if ( (unsigned int)v17 < v7 || v7 + 24 < v7 )
    return 0LL;
  LOBYTE(a3) = 18;
  v18 = HMAllocObject(v5[2], 0LL, a3, v17);
  v19 = v18;
  if ( v18 )
  {
    v21[1] = v5;
    *(_QWORD *)(v18 + 24) = 0LL;
    v21[0] = v18 + 24;
    HMAssignmentLock(v21, 1LL);
    *(_DWORD *)(v19 + 56) = v22;
    *(_QWORD *)(v19 + 72) = a4;
    *(_DWORD *)(v19 + 60) = v7 + 24;
    *(_QWORD *)(v19 + 64) = a1;
    *(_QWORD *)(v19 + 32) = 0LL;
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(v19 + 48) |= 1u;
    if ( v9 == 1 )
      *(_DWORD *)(v19 + 48) |= 4u;
    v20 = *v5;
    if ( v16 )
      ThreadId = (unsigned int)PsGetThreadId(*v16);
    InputTraceLogging::RawInput::AllocateHidData(v19, ThreadId, v20, a1, v9);
  }
  return v19;
}
