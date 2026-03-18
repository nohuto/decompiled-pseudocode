/*
 * XREFs of PostDeviceNotification @ 0x140171974
 * Callers:
 *     EditionDevicePnpNotification @ 0x14016F940 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1401715D0 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x140222790 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x140054290 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14005527C (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x140170D7C (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402089BC (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1402538D4 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6)
{
  struct DEVICEINFO *v7; // rdi
  struct tagPROCESS_HID_REQUEST *v8; // r13
  __int64 UserSessionState; // rax
  void *v10; // rdx
  int v11; // r8d
  __int16 v12; // r15
  __int16 v13; // r12
  struct tagPROCESS_HID_TABLE *v14; // rbx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rax
  _QWORD **v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  struct tagWND *v21; // rdi
  _QWORD *v22; // r13
  struct tagQ *v23; // rbx
  _DWORD *v24; // rbx
  int CurrentWin32kSessionId; // eax
  int v26; // eax
  __int64 i; // rax
  struct tagPROCESS_HID_REQUEST *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // [rsp+88h] [rbp-19h] BYREF
  int v32[3]; // [rsp+8Ch] [rbp-15h] BYREF
  __int64 v33; // [rsp+98h] [rbp-9h] BYREF
  struct tagWND *v34; // [rsp+A0h] [rbp-1h] BYREF
  struct tagQ *v35; // [rsp+A8h] [rbp+7h] BYREF
  struct tagPROCESS_HID_TABLE *v36; // [rsp+B0h] [rbp+Fh]
  __int16 v39; // [rsp+108h] [rbp+67h]

  v7 = a2;
  v8 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = *((_DWORD *)v7 + 12);
  v12 = 0;
  v13 = 0;
  v39 = 0;
  v14 = *(struct tagPROCESS_HID_TABLE **)(UserSessionState + 224);
  v36 = v14;
  v15 = 2LL;
  if ( !v11 )
  {
    v12 = 1;
    v13 = 2;
    goto LABEL_7;
  }
  v16 = v11 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v17 = *((_QWORD *)v7 + 55);
      v12 = *(_WORD *)(v17 + 42);
      v13 = *(_WORD *)(v17 + 40);
LABEL_7:
      v39 = v12;
    }
  }
  else
  {
    v12 = 1;
    v39 = 1;
    v13 = 6;
  }
  if ( (*((_DWORD *)v7 + 46) & 0x80u) != 0 )
  {
    if ( a4 == 2 )
      Edgy::OnDeviceRemoval(*(Edgy **)v7, v10);
    if ( !a6 )
    {
      v34 = (struct tagWND *)*((_QWORD *)v7 + 57);
      v18 = (_QWORD **)(W32GetUserSessionState(v15, v10) + 16704);
      v20 = *v18;
      if ( *v18 != v18 )
      {
        v21 = v34;
        v22 = v18;
        while ( 1 )
        {
          v23 = *(struct tagQ **)(*(v20 - 2) + 16LL);
          v35 = v23;
          if ( a4 - 1 <= 1 )
          {
            v24 = *(_DWORD **)(*((_QWORD *)v23 + 61) + 40LL);
            CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v19);
            v19 = *v24 == CurrentWin32kSessionId;
            if ( *v24 == CurrentWin32kSessionId )
            {
              v23 = v35;
              goto LABEL_19;
            }
          }
          else
          {
            v19 = *(_QWORD *)(W32GetUserSessionState(v19, v10) + 19176);
            if ( *((_QWORD *)v23 + 61) == v19 )
            {
              v19 = 1LL;
LABEL_19:
              if ( *((_DWORD *)v21 + 6) == 7 )
                v19 = ShouldReceiveTouchpadMessages(v23, *(HWND *)*(v20 - 2));
              if ( (_DWORD)v19 )
              {
                v34 = (struct tagWND *)*(v20 - 2);
                v32[0] = 0;
                v31 = 0;
                v33 = *((_QWORD *)v34 + 2);
                v35 = *(struct tagQ **)(v33 + 464);
                if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                                     (__int64 *)&v35,
                                     (__int64 *)&v34,
                                     &v33,
                                     0x238u,
                                     0LL,
                                     v32,
                                     &v31) )
                  PostInputMessage(
                    v35,
                    v34,
                    0x238u,
                    a4,
                    *((_QWORD *)v21 + 99),
                    0,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    0LL,
                    v32[0],
                    v31,
                    v33);
              }
            }
          }
          v20 = (_QWORD *)*v20;
          if ( v20 == v22 )
          {
            v7 = a2;
            v12 = v39;
            v8 = a1;
            v14 = v36;
            break;
          }
        }
      }
      v15 = a5;
      if ( a5 )
      {
        if ( a4 == 1 )
        {
          v26 = 712;
        }
        else if ( a4 == 2 )
        {
          v26 = 713;
        }
        else
        {
          v26 = 0;
        }
        PostMessage(-1, v26, a5, 0);
      }
    }
  }
  if ( v8 )
  {
    if ( *((_WORD *)v8 + 9) == v13 && *((_WORD *)v8 + 8) == v12 )
      PostHidNotification(v8, v7);
  }
  else
  {
    for ( i = W32GetUserSessionState(v15, v10);
          v14 != (struct tagPROCESS_HID_TABLE *)(i + 224);
          i = W32GetUserSessionState(v30, v29) )
    {
      v28 = InProcessDeviceTypeRequestTable(v14, v12, v13);
      if ( v28 )
        PostHidNotification(v28, v7);
      v14 = *(struct tagPROCESS_HID_TABLE **)v14;
    }
  }
}
