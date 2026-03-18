/*
 * XREFs of PostPointerEventMessage @ 0x1401F1830
 * Callers:
 *     PostPointerDeviceInRangeMessage @ 0x1401F17F0 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1401F1810 (PostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400543E4 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     CalcWakeMask @ 0x140055540 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140055DDC (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     PHIDTtoPT @ 0x1401D8DD4 (PHIDTtoPT.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402089BC (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PostPointerEventMessage(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  int v4; // r14d
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  const struct tagTHREADINFO *v13; // rbp
  _DWORD *v14; // rbx
  int CurrentWin32kSessionId; // eax
  struct tagWND *v16; // rbx
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // r11
  __int64 v20; // r13
  int v21; // ebp
  unsigned __int8 v22; // al
  bool v23; // zf
  struct tagTHREADINFO *InputDelegate; // rax
  struct tagTHREADINFO *v25; // rbp
  __int64 v26; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v28; // ecx
  __int64 v29; // [rsp+90h] [rbp-38h]

  v4 = a4;
  v6 = a2;
  result = W32GetUserSessionState(a1, a2);
  v10 = (_QWORD *)(result + 16704);
  v11 = *(_QWORD **)(result + 16704);
  v29 = result + 16704;
  if ( !v4 )
  {
    result = PHIDTtoPT(a1);
    a3 = (int)result;
  }
  if ( v11 != v10 )
  {
    result = (__int64)v10;
    do
    {
      v12 = *(v11 - 2);
      v13 = *(const struct tagTHREADINFO **)(v12 + 16);
      if ( v4 )
      {
        if ( v6 == 568 && a3 - 1 <= 1 )
        {
          v14 = *(_DWORD **)(*((_QWORD *)v13 + 61) + 40LL);
          CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(0LL);
          v9 = *v14 == CurrentWin32kSessionId;
          if ( *v14 != CurrentWin32kSessionId )
            goto LABEL_9;
        }
        else
        {
          v9 = *(_QWORD *)(W32GetUserSessionState(0LL, v9) + 19176);
          if ( *((_QWORD *)v13 + 61) != v9 )
            goto LABEL_9;
          v9 = 1LL;
        }
        if ( *(_DWORD *)(a1 + 24) == 7 )
          v9 = ShouldReceiveTouchpadMessages(v13, *(HWND *)*(v11 - 2));
        if ( !(_DWORD)v9 )
          goto LABEL_9;
        v16 = (struct tagWND *)*(v11 - 2);
        v17 = 0;
        LODWORD(v18) = 0;
        v19 = *((_QWORD *)v16 + 2);
        v20 = *(_QWORD *)(v19 + 464);
        if ( v6 != 255 )
        {
          v21 = CalcWakeMask(v6, v6, 0);
          if ( *(_QWORD *)(v20 + 144) )
          {
            if ( v6 == 514 || v6 == 517 )
            {
              v16 = *(struct tagWND **)(v20 + 144);
              v22 = (v6 == 514) - 3;
              v23 = (v22 & *(_BYTE *)(v20 + 152)) == 0;
              *(_BYTE *)(v20 + 152) &= v22;
              if ( v23 )
              {
                v16 = (struct tagWND *)HMAssignmentUnlock(v20 + 144);
                if ( !v16 )
                {
                  v4 = a4;
                  goto LABEL_9;
                }
              }
            }
            else if ( v6 == 512 )
            {
              v16 = *(struct tagWND **)(v20 + 144);
            }
          }
          InputDelegate = GetInputDelegate(v16, v21);
          v25 = InputDelegate;
          if ( InputDelegate )
          {
            vAdjustDelegatePriority(InputDelegate);
            v17 = 1;
            v20 = *((_QWORD *)v25 + 58);
            v19 = (__int64)v25;
            v18 = (*((_QWORD *)v25 + 170) >> 37) & 1LL;
          }
          else
          {
            v17 = 0;
          }
        }
        PostInputMessage(
          (struct tagQ *)v20,
          v16,
          v6,
          a3,
          *(_QWORD *)(a1 + 792),
          0,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          0LL,
          v17,
          v18,
          v19);
        v4 = a4;
      }
      else
      {
        if ( !*((_DWORD *)v11 - 2) )
          goto LABEL_10;
        v26 = *(_QWORD *)(W32GetUserSessionState(0LL, v9) + 19176);
        if ( *((_QWORD *)v13 + 61) == v26 )
        {
          IsEnabledDeviceUsageNoInline = Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v26);
          v28 = *(_DWORD *)(a1 + 24);
          if ( IsEnabledDeviceUsageNoInline )
          {
            if ( v28 == 7 && !ShouldReceiveTouchpadMessages(v13, *(HWND *)v12) )
              goto LABEL_9;
          }
          else if ( v28 == 7 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 484LL);
          }
          PostMessage(v12, v6, a3, *(_QWORD *)(a1 + 792));
        }
      }
LABEL_9:
      result = v29;
LABEL_10:
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != (_QWORD *)result );
  }
  return result;
}
