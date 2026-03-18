/*
 * XREFs of FreeHidData @ 0x14003ABB0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x14003A090 (-FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14009023C (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x1400942DC (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401724EC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x140172814 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140270360 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1402706C0 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401BA348 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

void __fastcall FreeHidData(__int64 a1)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = 0;
  v2 = _HMPheFromObjectWorker(a1);
  v3 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19792) && (unsigned int)GET_USERCRIT_DISPOSITION(v6) == 2 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19800) )
    {
      if ( v2 != *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19800) )
      {
        UserSessionState = W32GetUserSessionState(v12, v11);
        v3 = 0;
        ++*(_DWORD *)(UserSessionState + 19808);
      }
    }
    else
    {
      v3 = 1;
      v16 = 1;
      *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19800) = v2;
    }
  }
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    HMAssignmentUnlock(a1 + 24);
    HMFreeObject(a1);
    if ( v3 )
      *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19800) = 0LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v16);
  }
}
