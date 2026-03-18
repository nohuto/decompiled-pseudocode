/*
 * XREFs of ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DCB44
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DCA10 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DD214 (xxxInjectTouchInput.c)
 * Callees:
 *     WakeDIT @ 0x1C0009CEC (WakeDIT.c)
 *     xxxProcessHidInput @ 0x1C01D6080 (xxxProcessHidInput.c)
 *     CreateTouchInputBuffer @ 0x1C01DF9B0 (CreateTouchInputBuffer.c)
 */

void __fastcall xxxSendToTouchStack(struct DEVICEINFO *a1, unsigned int a2, struct tagPOINTER_TOUCH_INFO *a3, ULONG a4)
{
  unsigned int v4; // esi
  int v6; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 CurrentProcessWin32Process; // rax

  *((_DWORD *)a1 + 62) = 0;
  v4 = 0;
  v6 = (int)a3;
  for ( *((_QWORD *)a1 + 32) = *(unsigned __int16 *)(*((_QWORD *)a1 + 50) + 44LL); v4 < a2; v4 += 4 )
  {
    if ( v4 )
      CreateTouchInputBuffer((int)a1, a2, v6, v4, 0);
    else
      CreateTouchInputBuffer((int)a1, a2, v6, 0, a4);
    if ( LODWORD(aDeviceTemplate[154]) )
    {
      v12 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v9) + 848);
      v13 = *(_QWORD *)(v12 + 80);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      RIMInjectInput(
        v13,
        *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 848) + 88LL),
        0LL,
        *(_QWORD *)(*((_QWORD *)a1 + 50) + 24LL),
        *(unsigned __int16 *)(*((_QWORD *)a1 + 50) + 44LL));
    }
    else if ( gbDIT && *((_DWORD *)a1 + 77) && gulAnyInputSinkInSubtree )
    {
      *((_DWORD *)a1 + 22) |= 0x80u;
      gbTouchInjectionBlockedOnDIT = 1;
      WakeDIT(0x20u);
      UserSessionSwitchLeaveCrit(v11, v10);
      KeWaitForSingleObject(gpkeDITTouchInjectionResponseEvent, UserRequest, 1, 1u, 0LL);
      EnterCrit(0LL, 1LL);
      *((_DWORD *)a1 + 22) &= ~0x80u;
      gbTouchInjectionBlockedOnDIT = 0;
    }
    else
    {
      xxxProcessHidInput(a1);
    }
  }
}
