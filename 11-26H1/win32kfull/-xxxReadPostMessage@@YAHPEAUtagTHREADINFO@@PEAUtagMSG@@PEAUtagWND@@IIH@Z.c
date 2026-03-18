/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1401DAF58
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     FindQMsg @ 0x1400955A0 (FindQMsg.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     ?CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z @ 0x140097FB0 (-CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401F16F8 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402089BC (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x14024686C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v10; // r15d
  unsigned int v11; // edi
  struct tagMLIST *v12; // r12
  __int64 v13; // rcx
  __int64 *QMsg; // r14
  bool v16; // zf
  unsigned int v17; // eax
  __int64 v18; // rax
  int v19; // ecx
  _QWORD *v20; // rax
  int v21; // ecx
  _OWORD *v22; // [rsp+30h] [rbp-58h]

  v10 = a6;
  v11 = 0;
  if ( (unsigned int)CheckQuitMessage(a1, a2, a6) )
    return 1LL;
  v12 = (struct tagTHREADINFO *)((char *)a1 + 840);
  QMsg = FindQMsg((__int64)a1, (__int64 *)a1 + 105, a3, a4, a5, 0);
  if ( QMsg )
  {
    v16 = (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v13) == 0;
    v17 = *((_DWORD *)QMsg + 6) - 571;
    if ( v16 )
    {
      if ( v17 <= 1 && !ShouldReceiveTouchpadMessages(a1, (HWND)QMsg[2]) )
        v10 = 1;
    }
    else if ( v17 <= 1 && (*((_QWORD *)a1 + 170) & 0x2000002000LL) == 0 && QMsg[5] == 1 )
    {
      v10 = 1;
    }
    EtwTraceRetrievePostMessage(QMsg, v10);
    *((_DWORD *)a1 + 150) = *((_DWORD *)QMsg + 12);
    if ( *(_QWORD *)((char *)a1 + 788) != *(__int64 *)((char *)QMsg + 52) )
      _InterlockedOr((volatile signed __int32 *)a1 + 130, 0x100000u);
    *((_DWORD *)a1 + 197) = *((_DWORD *)QMsg + 13);
    *((_DWORD *)a1 + 198) = *((_DWORD *)QMsg + 14);
    v22 = QMsg + 2;
    v18 = HMValidateHandleNoSecure(QMsg[2], 1);
    if ( v18 )
      v19 = *(_DWORD *)(*(_QWORD *)(v18 + 40) + 288LL);
    else
      v19 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 268LL);
    *((_DWORD *)a1 + 199) = v19;
    *((_QWORD *)a1 + 100) = QMsg[10];
    *((_QWORD *)a1 + 76) = QMsg;
    *(_QWORD *)(*((_QWORD *)a1 + 58) + 448LL) = QMsg[9];
    tagTHREADINFO::UpdateInputSource(a1, (const struct tagINPUT_MESSAGE_SOURCE *)((char *)QMsg + 124));
    *(_OWORD *)a2 = *v22;
    *((_OWORD *)a2 + 1) = *((_OWORD *)QMsg + 2);
    *((_OWORD *)a2 + 2) = *((_OWORD *)QMsg + 3);
    if ( v10 )
    {
      v20 = (_QWORD *)*((_QWORD *)a1 + 64);
      if ( (*((_DWORD *)QMsg + 25) & 1) != 0 )
        *v20 |= 0x1000uLL;
      else
        *v20 &= ~0x1000uLL;
      if ( *(_DWORD *)(*(_QWORD *)v12 + 24LL) == 786 )
        CheckRemoveHotkeyBit(a1, v12);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 0x400) != 0
        && (int)CheckProcessForeground(a1) < 0 )
      {
        return 0LL;
      }
      DelQEntry((__int64)v12, (__int64)QMsg, 1);
    }
    else
    {
      *((_QWORD *)a1 + 76) = 1LL;
    }
    v21 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v21 + 2147482655) <= 7 )
    {
      *((_DWORD *)a2 + 2) = v21 & 0x7FFFFFFF;
      xxxDDETrackGetMessageHook(a2);
      if ( !v10 && QMsg == FindQMsg((__int64)a1, (__int64 *)v12, a3, a4, a5, 0) )
      {
        *v22 = *(_OWORD *)a2;
        *((_OWORD *)QMsg + 2) = *((_OWORD *)a2 + 1);
        *((_OWORD *)QMsg + 3) = *((_OWORD *)a2 + 2);
      }
    }
  }
  else if ( (unsigned int)CheckQuitMessage(a1, a2, a6) )
  {
    return 1LL;
  }
  if ( !*((_DWORD *)a1 + 214)
    && (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 0x40000000) == 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 60) + 8LL), 0xFFFFFEF7);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 60) + 4LL), 0xFFFFFEFF);
  }
  LOBYTE(v11) = QMsg != 0LL;
  return v11;
}
