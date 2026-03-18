/*
 * XREFs of PostInputMessage @ 0x1400904E8
 * Callers:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x140054290 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14009023C (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     PostDeviceNotification @ 0x140171974 (PostDeviceNotification.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401724EC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x140172814 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     PostPointerEventMessage @ 0x1401F1830 (PostPointerEventMessage.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1402080B8 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140270360 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1402706C0 (EditionPostRawMouseInputMessage.c)
 *     EditionPostInputMessage @ 0x140277240 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x1402773C0 (EditionPostMouseMoveToQ.c)
 *     EditionPostMouseWheelToForeground @ 0x140277510 (EditionPostMouseWheelToForeground.c)
 *     EditionHandleAndPostKeyEvent @ 0x14027AA50 (EditionHandleAndPostKeyEvent.c)
 *     ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402D0F94 (-PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x140059968 (IsAdaptiveQueueDetachExempted.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x140095008 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x140099110 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     IsPointerInputMessageWithState @ 0x140159250 (IsPointerInputMessageWithState.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1401A7F5C (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401EDD40 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall PostInputMessage(
        struct tagQ *a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        void *a11,
        struct tagUIPI_INFO *a12,
        int a13,
        int a14,
        __int64 a15)
{
  int v15; // edi
  struct tagINPUT_MESSAGE_SOURCE *v20; // r12
  __int64 v21; // rsi
  const struct tagQMSG *CoalesceableMouseMessage; // rax
  __int64 v23; // rsi
  char v24; // r13
  unsigned __int64 v25; // rdx
  int v26; // ecx
  int v27; // eax
  __int64 UserSessionState; // rax
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // ecx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // r8
  int v37; // eax
  int v38; // edi
  _QWORD *v39; // rbx
  __int64 v40; // rax
  struct _KEVENT *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  union _SLIST_HEADER *v44; // rdi
  struct tagTHREADINFO *v45; // [rsp+70h] [rbp-48h]
  int v46; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v47; // [rsp+D8h] [rbp+20h] BYREF

  v47 = a4;
  v15 = a13;
  v45 = (struct tagTHREADINFO *)(a15 & -(__int64)(a13 != 0));
  if ( a3 == 255 && a13 && (a15 & -(__int64)(a13 != 0)) != 0 )
  {
    a13 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4691LL);
    return 0LL;
  }
  v20 = a10;
  if ( !a10 || (v46 = 1, *((_DWORD *)a10 + 1) != 2) )
    v46 = 0;
  v21 = *((_QWORD *)a1 + 4);
  if ( (*((_DWORD *)a1 + 109) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  if ( (a9 & 1) == 0
    && v21
    && (*(_DWORD *)(v21 + 100) & 2) == 0
    && (a3 == 512 || a3 == 522 || a3 == 526)
    && (CoalesceableMouseMessage = (const struct tagQMSG *)GetCoalesceableMouseMessage(a3, &v47, v21, v20),
        (v23 = (__int64)CoalesceableMouseMessage) != 0) )
  {
    InputTraceLogging::Delivery::CoalesceMessage(CoalesceableMouseMessage, a7);
    CleanInputMessage(a3, (struct tagQMSG *)v23);
    v24 = 0;
  }
  else
  {
    v24 = 0;
    v23 = AllocQEntryEx((char *)a1 + 24, 0LL, 1LL);
    if ( !v23 )
      return 0LL;
  }
  v25 = a7;
  v26 = a14 << 27;
  v27 = a14 << 27;
  *(_QWORD *)(v23 + 144) = a7;
  *(_DWORD *)(v23 + 100) = v26 ^ (*(_DWORD *)(v23 + 100) ^ (32 * v15)) & 0xF7FFFFDF ^ ((32 * v15) ^ v27) & 0xF7FFFFFF;
  if ( v25 )
  {
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      v24 = 1;
    }
    LOBYTE(a13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      LOBYTE(v29) = v24;
      LOBYTE(v30) = a13;
      WPP_RECORDER_AND_TRACE_SF_qiqdd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v30,
        *(_QWORD *)(UserSessionState + 69152));
      v25 = a7;
    }
  }
  if ( a2 )
    v31 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL);
  else
    v31 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(a1) + 456) + 268LL);
  v32 = a5;
  StoreQMessage((struct tagQMSG *)v23, a2, a3, v47, a5, a6, v25, 0, a8, a9, v20, v31, a11, a12);
  InputTraceLogging::Delivery::PostInputMessage((const struct tagQMSG *)v23, a1);
  if ( (unsigned int)IsPointerInputMessageWithState(a3) )
  {
    v35 = W32GetUserSessionState(v34, v33);
    CTouchProcessor::MarkPointerMessageGenerated(
      *(CTouchProcessor **)(v35 + 3256),
      a3,
      *(_QWORD *)(v23 + 40),
      -__CFSHR__(*(_DWORD *)(v23 + 100), 6),
      (void *)v23);
  }
  if ( (unsigned int)IsMiPMouseMessage(a3) )
  {
    if ( v20 )
    {
      if ( (unsigned int)IsGenuineMouseInput(v20) )
      {
        *(_DWORD *)(v23 + 100) |= 0x400u;
        if ( a2 )
        {
          v37 = InputTransform::OnInput(a2, *(struct tagWND **)(v23 + 136), v36);
          *(_DWORD *)(v23 + 100) = (v37 << 12) ^ (*(_DWORD *)(v23 + 100) ^ (v37 << 12)) & 0xFFFFEFFF;
        }
      }
    }
  }
  if ( v46 )
  {
    if ( a3 != 255 )
      goto LABEL_68;
LABEL_65:
    v43 = HMValidateHandleNoSecure(v32, 18);
    v44 = *(union _SLIST_HEADER **)(v43 + 16);
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(v43 + 48) &= ~1u;
    ExpInterlockedPushEntrySList(v44 + 72, (PSLIST_ENTRY)(v43 + 32));
    goto LABEL_68;
  }
  if ( a3 == 255 )
    goto LABEL_65;
  if ( tagQ::AreMultipleThreadsAttached(a1) )
  {
    v38 = 0;
    if ( a2 && (v39 = (_QWORD *)*((_QWORD *)a2 + 2), a2 == (struct tagWND *)v39[198]) )
    {
      v38 = 1;
    }
    else
    {
      v40 = *((_QWORD *)a1 + 16);
      if ( !v40 )
        goto LABEL_68;
      v39 = *(_QWORD **)(v40 + 16);
      if ( v40 != v39[198] )
        goto LABEL_68;
    }
    if ( v39 && !(unsigned int)IsAdaptiveQueueDetachExempted((__int64)v39) )
    {
      switch ( a3 )
      {
        case 0x104u:
        case 0x201u:
        case 0x204u:
        case 0x207u:
        case 0x20Au:
        case 0x20Bu:
        case 0x20Eu:
          goto LABEL_63;
        case 0x245u:
          if ( v38 )
          {
            v41 = *(struct _KEVENT **)(*((_QWORD *)a2 + 2) + 1576LL);
LABEL_60:
            KeSetEvent(v41, 1, 0);
            break;
          }
          v42 = v39[88];
          if ( !v42 || (*(_DWORD *)(v42 + 200) & 0x8000) == 0 )
            break;
LABEL_63:
          v41 = (struct _KEVENT *)v39[197];
          goto LABEL_60;
        case 0x246u:
          goto LABEL_63;
      }
    }
  }
LABEL_68:
  WakeSomeone(a1, v45, a3, (struct tagQMSG *)v23);
  return 1LL;
}
