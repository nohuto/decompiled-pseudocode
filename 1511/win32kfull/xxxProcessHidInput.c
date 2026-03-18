/*
 * XREFs of xxxProcessHidInput @ 0x1C01D6080
 * Callers:
 *     ProcessHidRawInput @ 0x1C01D5550 (ProcessHidRawInput.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DCB44 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     DitTouchInject @ 0x1C01E0074 (DitTouchInject.c)
 * Callees:
 *     UpdateInputGlobalsEx @ 0x1C0084630 (UpdateInputGlobalsEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01D4238 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D43F0 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v1; // r15
  int v2; // r14d
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagPROCESS_HID_REQUEST *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  struct tagPROCESS_HID_TABLE *v18; // rdi
  struct tagPROCESS_HID_REQUEST *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // rdx
  bool v26; // zf
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0;
  v4 = 1;
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) != 0 )
    return result;
  if ( (result & 0x4000) != 0 )
  {
    if ( !*((_DWORD *)a1 + 77) )
      return result;
    result = *((_QWORD *)a1 + 50);
    if ( *(_DWORD *)(result + 40) != 851973 )
      return result;
  }
  if ( *((int *)a1 + 62) < 0 )
    return result;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v32);
  if ( !LODWORD(aDeviceTemplate[154]) && *((_DWORD *)a1 + 77) )
  {
    EtwTracePointerDeviceReadStart();
    if ( *(_DWORD *)(*((_QWORD *)a1 + 52) + 24LL) == 8 )
      xxxProcessPTPDeviceInput(a1);
    else
      xxxProcessPointerDeviceInput((__int64)a1);
    EtwTracePointerDeviceReadStop();
  }
  v7 = gpqForeground;
  if ( gpqForeground )
  {
    v8 = *(_QWORD *)(gpqForeground + 80LL);
    v9 = v8 ? *(_QWORD *)(v8 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    v1 = *(_QWORD *)(v9 + 376);
    v10 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v1 + 784));
    if ( v10 )
    {
      v7 = gpqForeground;
      v13 = *((_QWORD *)v10 + 4);
      v14 = gpqForeground;
      if ( !v13 || (v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 384LL), *(char *)(v13 + 44) >= 0) )
      {
        if ( (*((_BYTE *)a1 + 64) & 0x40) == 0
          || (v15 = *(unsigned int *)(*((_QWORD *)a1 + 52) + 252LL), (v15 & 0x40) != 0)
          || (!(unsigned int)IsDwmInputThread(v15, v6, v11, v12)
            ? (v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL))
            : (v16 = *(_QWORD *)(*((_QWORD *)a1 + 52) + 1552LL)),
              (v6 = gbEnforceUIPI, v7 = *(_QWORD *)(v14 + 372), !gbEnforceUIPI)
           || (unsigned int)v16 > (unsigned int)v7
           || (_DWORD)v16 == (_DWORD)v7
           && ((v17 = HIDWORD(v16), v7 >>= 32, (_DWORD)v17 == (_DWORD)v7) || (_DWORD)v17 == -1 || (_DWORD)v7 == -1)) )
        {
          if ( (unsigned int)PostHidInput(a1, (struct tagQ *)v14, (struct tagWND *)v13, 0LL) )
          {
            v2 = 1;
            v4 = 0;
          }
        }
      }
    }
  }
  if ( LODWORD(aDeviceTemplate[154]) )
    v18 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  else
    v18 = qword_1C03274E8;
  while ( 1 )
  {
    result = (__int64)(LODWORD(aDeviceTemplate[154]) ? &RawInputManagerObject::gHidRequestTable[4] : &qword_1C03274E8);
    if ( v18 == (struct tagPROCESS_HID_TABLE *)result )
      break;
    if ( *((int *)v18 + 20) <= 0 )
      goto LABEL_79;
    v19 = HidIsRequestedByThisProcess(a1, v18);
    if ( !v19 )
      goto LABEL_79;
    v7 = *((unsigned int *)v19 + 5);
    if ( (v7 & 1) == 0 || (v7 & 2) != 0 && !v4 )
      goto LABEL_79;
    v6 = *((_QWORD *)v19 + 5);
    if ( v6 )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v19 + 5))(a1);
      goto LABEL_79;
    }
    v20 = *((_QWORD *)v19 + 4);
    v21 = *(_QWORD *)(v20 + 16);
    v22 = *(_QWORD *)(v21 + 376);
    if ( v22 == v1 )
      goto LABEL_79;
    v7 = grpdeskRitInput;
    if ( *(_QWORD *)(v20 + 24) != grpdeskRitInput || *(char *)(v20 + 44) < 0 || *(char *)(v20 + 43) < 0 )
      goto LABEL_79;
    v23 = *((_QWORD *)a1 + 51);
    v24 = *(_WORD *)(v23 + 16);
    v25 = *(unsigned __int16 *)(v23 + 18);
    if ( v24 == 12 )
    {
      v26 = (_WORD)v25 == 1;
      goto LABEL_52;
    }
    if ( v24 == 1 )
    {
      v26 = (_WORD)v25 == 9;
LABEL_52:
      if ( v26 )
        goto LABEL_77;
      goto LABEL_57;
    }
    if ( v24 >= 0xFF00u )
      goto LABEL_77;
LABEL_57:
    if ( gpqForeground )
    {
      v25 = *(_QWORD *)(gpqForeground + 372LL);
      v27 = *(_QWORD *)(*(_QWORD *)(v21 + 384) + 372LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v27 <= (unsigned int)v25 )
        {
          if ( (_DWORD)v27 != (_DWORD)v25
            || (v28 = HIDWORD(v27), v25 >>= 32, (_DWORD)v28 != (_DWORD)v25) && (_DWORD)v28 != -1 && (_DWORD)v25 != -1 )
          {
            if ( *(int *)(v22 + 12) >= 0 )
            {
              EtwTraceUIPIInputError(*(_QWORD *)(v20 + 16), 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 5);
              goto LABEL_79;
            }
          }
        }
      }
    }
    if ( (*((_BYTE *)a1 + 64) & 0x40) == 0 )
      goto LABEL_77;
    v29 = *(unsigned int *)(*((_QWORD *)a1 + 52) + 252LL);
    if ( (v29 & 0x40) != 0 )
      goto LABEL_77;
    v30 = (unsigned int)IsDwmInputThread(v29, v25, gpqForeground, v22)
        ? *(_QWORD *)(*((_QWORD *)a1 + 52) + 1552LL)
        : *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL);
    v21 = *(_QWORD *)(v20 + 16);
    v6 = gbEnforceUIPI;
    v7 = *(_QWORD *)(*(_QWORD *)(v21 + 384) + 372LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v30 > (unsigned int)v7
      || (_DWORD)v30 == (_DWORD)v7
      && ((v31 = HIDWORD(v30), v7 >>= 32, (_DWORD)v31 == (_DWORD)v7)
       || (v6 = 0xFFFFFFFFLL, (_DWORD)v31 == -1)
       || (_DWORD)v7 == -1) )
    {
LABEL_77:
      result = PostHidInput(a1, *(struct tagQ **)(v21 + 384), (struct tagWND *)v20, 1LL);
      if ( !(_DWORD)result )
        break;
      v2 = 1;
    }
LABEL_79:
    v18 = *(struct tagPROCESS_HID_TABLE **)v18;
  }
  if ( v2 )
  {
    result = *((unsigned int *)a1 + 83);
    if ( (result & 2) == 0 )
      result = UpdateInputGlobalsEx(
                 (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                 0,
                 2u,
                 0);
  }
  if ( !v32 )
    return UserSessionSwitchLeaveCrit(v7, v6);
  return result;
}
