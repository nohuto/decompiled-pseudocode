/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1402706C0
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 * Callees:
 *     FreeHidData @ 0x14003ABB0 (FreeHidData.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14009023C (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     AllocateHidData @ 0x140090364 (AllocateHidData.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@QEAUtagHIDDATA@@PEBUtagRAWMOUSE@@_N@Z @ 0x1400909EC (-DeliverRawInput@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@QEAUtagHIDDATA@@PEBUtagRAWMOUSE@@_N@Z.c)
 *     PtiMouseFromQ @ 0x1400980BC (PtiMouseFromQ.c)
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1401AB9D8 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x1401ABC8C (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     RawInputRequestedForMouse @ 0x1401ABFA8 (RawInputRequestedForMouse.c)
 *     ?SkipBackgroundListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@PEAXW4WhyBgInputSkipped@12@@Z @ 0x1401D2C84 (-SkipBackgroundListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@PEAXW4WhyBgInpu.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct tagRAWMOUSE *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct tagQ *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  void *v16; // rsi
  char v17; // bp
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  __int64 HidData; // rax
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rdx
  int v28; // r9d
  __int64 *v29; // r14
  __int64 i; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  const struct tagUIPI_INFO *v35; // r8
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // rcx
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 j; // rcx
  __int64 v45; // [rsp+90h] [rbp-68h] BYREF
  int v46; // [rsp+98h] [rbp-60h]
  __int64 v47; // [rsp+A0h] [rbp-58h] BYREF
  int v48; // [rsp+A8h] [rbp-50h]

  if ( !(unsigned int)RawInputRequestedForMouse(a1, a2) )
    return 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 92) == 2 )
      v11 = *(_QWORD *)(a1 + 80);
    else
      v11 = 0LL;
    v12 = *(struct tagQ **)(*(_QWORD *)(v11 + 16) + 464LL);
  }
  else
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18944) )
    {
      UserSessionState = W32GetUserSessionState(v14, v13);
      if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(*(_QWORD *)(UserSessionState + 18944)) )
        return 0LL;
    }
    v12 = *(struct tagQ **)(W32GetUserSessionState(v14, v13) + 18928);
  }
  if ( *(_DWORD *)a4 == 2 )
    v16 = *(void **)(a4 + 8);
  else
    v16 = 0LL;
  v17 = 1;
  if ( v12 )
  {
    v9 = *(_QWORD *)(PtiMouseFromQ((__int64)v12) + 456);
    v10 = *(_QWORD *)(v9 + 824);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 100) & 1) != 0 )
      {
        FlushThrottledRawMouseInput((struct tagPROCESS_HID_TABLE *)v10, a3, v18, v19);
        v20 = PtiMouseFromQ((__int64)v12);
        HidData = AllocateHidData(
                    v16,
                    0LL,
                    24LL,
                    0LL,
                    *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v20 + 456) + 824LL) + 64LL));
        v17 = 0;
        v22 = HidData;
        if ( HidData )
        {
          v23 = *(_QWORD *)(HidData + 24);
          v12 = *(struct tagQ **)(*(_QWORD *)(v23 + 16) + 464LL);
          InputTraceLogging::Mouse::DeliverRawInput(a2, *(HWND *)v23, (struct tagHIDDATA *const)HidData, a5, 0);
          *(_OWORD *)(v22 + 80) = *(_OWORD *)a5;
          *(_QWORD *)(v22 + 96) = *((_QWORD *)a5 + 2);
          if ( !(unsigned int)PostInputMessage(
                                v12,
                                (struct tagWND *)v23,
                                0xFFu,
                                0LL,
                                *(_QWORD *)v22,
                                a3,
                                0LL,
                                *((unsigned int *)a5 + 5),
                                0,
                                0LL,
                                0LL,
                                0LL,
                                0,
                                0,
                                0LL) )
          {
            FreeHidData(v22);
            v17 = 1;
          }
          goto LABEL_19;
        }
        return 0LL;
      }
    }
  }
LABEL_19:
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 16844) )
    return 1LL;
  v26 = 0LL;
  v29 = (__int64 *)(W32GetUserSessionState(v25, v24) + 224);
  v47 = 0LL;
  v48 = 0;
  if ( v12 )
  {
    v26 = *(_QWORD *)(PtiMouseFromQ((__int64)v12) + 456);
    v47 = *((_QWORD *)v12 + 59);
  }
  for ( i = *v29; (__int64 *)i != v29; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 100) & 4) == 0 )
      continue;
    v31 = *(_QWORD *)(i + 64);
    if ( !v31 || (v32 = *(_QWORD *)(v31 + 40), *(char *)(v32 + 20) < 0) || *(char *)(v32 + 19) < 0 )
    {
      v37 = 0;
      goto LABEL_40;
    }
    v33 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 464LL);
    v34 = *(_QWORD *)(W32GetUserSessionState(v32, v27) + 19176);
    v36 = *(_QWORD *)(i + 64);
    if ( *(_QWORD *)(v36 + 24) != v34 )
    {
      v37 = 1;
LABEL_40:
      v40 = (__int64)v16;
      v41 = i;
      goto LABEL_41;
    }
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 456LL) + 864LL),
            (const struct tagUIPI_INFO *)&v47,
            v35) )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(i + 64) + 16LL);
      if ( *(int *)(*(_QWORD *)(v38 + 456) + 12LL) >= 0 )
      {
        v45 = v47;
        v46 = v48;
        EtwTraceUIPIInputError(v38, 0LL, v33, &v45, 5);
        v37 = 2;
        goto LABEL_40;
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + 64) + 16LL) + 456LL) == v26 )
      continue;
    if ( (*(_DWORD *)(i + 100) & 8) != 0 && !v17 )
    {
      v37 = 3;
      goto LABEL_40;
    }
    v39 = ThrottleRawMouseInputToBackgroundListener((struct tagPROCESS_HID_TABLE *)i, v16, a5, a2, a3);
    v40 = (__int64)v16;
    v41 = i;
    if ( !v39 )
    {
      PostRawMouseInputToBackgroundListener((struct tagPROCESS_HID_TABLE *)i, v16, a5, a2, a3);
      continue;
    }
    v37 = 4;
LABEL_41:
    InputTraceLogging::RawInput::SkipBackgroundListener(v41, v40, v37, v28);
  }
  if ( (unsigned __int8)RawMouseThrottlingTimerActive() )
  {
    for ( j = *v29; (__int64 *)j != v29; j = *(_QWORD *)j )
    {
      if ( (*(_DWORD *)(j + 100) & 1) != 0 && *(_DWORD *)(j + 112) == 2 )
        return 1LL;
    }
    ArmRawMouseThrottlingTimer(0LL, 0LL);
  }
  return 1LL;
}
