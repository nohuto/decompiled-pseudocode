/*
 * XREFs of _PostThreadMessageEx @ 0x1401D3210
 * Callers:
 *     _PostThreadMessage @ 0x1401D31A0 (_PostThreadMessage.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x140099110 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x14019C53C (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140262518 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x14029723C (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ProcessSuspendedPostMessage @ 0x1402A7248 (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5)
{
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  bool v17; // r9
  int v18; // ecx
  UIPrivilegeIsolation *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  LARGE_INTEGER *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx

  v8 = a1;
  if ( !a1
    || (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 0x1000000) == 0
    || (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 1) != 0 )
  {
    v18 = 1444;
    goto LABEL_51;
  }
  if ( a2 < 0x400 )
  {
    a1 = (struct tagTHREADINFO *)MessageTable;
    if ( _bittest16(&MessageTable[a2], 9u) )
      goto LABEL_27;
    if ( a2 == 537 )
      goto LABEL_7;
  }
  if ( a2 == 536 )
  {
LABEL_7:
    if ( (a3.LowPart & 0x8000) == 0 )
      goto LABEL_8;
LABEL_27:
    v18 = 1159;
LABEL_51:
    UserSetLastError(v18);
    return 0LL;
  }
LABEL_8:
  v9 = *((_QWORD *)v8 + 57);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v11 = -*(_QWORD *)CurrentProcessWin32Process;
    v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( v9 == v12 )
    goto LABEL_17;
  if ( a2 > 0xD0 )
  {
    if ( a2 != 272 )
    {
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_17;
      goto LABEL_33;
    }
    goto LABEL_38;
  }
  switch ( a2 )
  {
    case 0xD0u:
    case 0xCu:
      goto LABEL_33;
    case 0xDu:
      goto LABEL_17;
    case 0x4Eu:
LABEL_38:
      v18 = 5;
      goto LABEL_51;
  }
  if ( a2 != 188 )
    goto LABEL_17;
LABEL_33:
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v11)
    && (!UIPrivilegeIsolation::Enforced(v19) || *(_QWORD *)v9 == *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40))
    && (*(_DWORD *)(v9 + 764) != *(_DWORD *)(v12 + 764) || *(_DWORD *)(v9 + 768) != *(_DWORD *)(v12 + 768)) )
  {
    goto LABEL_38;
  }
LABEL_17:
  if ( a2 == 576 || a2 == 281 || IsPointerInputMessage(a2) )
  {
    v18 = 1002;
    goto LABEL_51;
  }
  if ( a2 == 255 )
  {
    v13 = HMValidateHandleNoSecure(a4, 18);
    IsEnabledDeviceUsageNoInline = Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline();
    if ( v13 )
    {
      if ( IsEnabledDeviceUsageNoInline )
      {
        v15 = *(unsigned int *)(v13 + 48);
        if ( (v15 & 1) != 0 )
        {
          v16 = PtiCurrent(v15);
          TrySmuggleHidData(v16, v8, (struct tagHIDDATA *)v13, v17);
        }
      }
      else
      {
        Old_TrySmuggleHidData(v8, (struct tagHIDDATA *)v13, 1);
      }
    }
  }
  AdjustForCoalescing((struct tagTHREADINFO *)((char *)v8 + 840), 0LL, a2);
  if ( v8 != PtiCurrent(v21)
    && tagPROCESSINFO::SyncAndTestFreeze(*((tagPROCESSINFO **)v8 + 57))
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ProcessSuspendedPostMessage)(
                        v8,
                        0LL,
                        a2,
                        (LARGE_INTEGER)a3.QuadPart,
                        a4) )
  {
    return 0LL;
  }
  v22 = (LARGE_INTEGER *)AllocQEntryEx((__int64)v8 + 840, 0LL, 1);
  if ( !v22 )
    return 0LL;
  v23 = PtiKbdFromQ(*((_QWORD *)v8 + 58));
  StoreQMessage(v22, 0LL, a2, a3, a4, 0, 0LL, 0, 0LL, 0, a5, *(_DWORD *)(*(_QWORD *)(v23 + 456) + 268LL), 0LL, 0LL);
  SetWakeBit((__int64)v8, 264LL);
  if ( a2 == 786 )
    SetWakeBit((__int64)v8, 128LL);
  v24 = *((_QWORD *)v8 + 58);
  if ( v8 == *(struct tagTHREADINFO **)(v24 + 72) )
    *(_QWORD *)(v24 + 80) = v22;
  return 1LL;
}
