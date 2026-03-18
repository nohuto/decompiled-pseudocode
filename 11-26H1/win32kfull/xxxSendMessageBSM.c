/*
 * XREFs of xxxSendMessageBSM @ 0x140004CE0
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1400F82DC (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1402A1BF0 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x140004EB8 (ExchangeW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?TraceLoggingBroadcastSystemMessage@@YAXPEBUtagWND@@I_KKK@Z @ 0x1400056B0 (-TraceLoggingBroadcastSystemMessage@@YAXPEBUtagWND@@I_KKK@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v10; // r14d
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *i; // rdi
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  _QWORD v18[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h]

  v10 = 0;
  TraceLoggingBroadcastSystemMessage(a1, a2, a3, *(_DWORD *)a5, *((_DWORD *)a5 + 1));
  if ( (*(_DWORD *)a5 & 0x10) == 0 )
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  v11 = PtiCurrent();
  v18[0] = *((_QWORD *)v11 + 47);
  *((_QWORD *)v11 + 47) = v18;
  v19 = UserDereferenceObject;
  v18[1] = 0LL;
  v12 = PtiCurrent();
  v16[0] = *((_QWORD *)v12 + 47);
  *((_QWORD *)v12 + 47) = v16;
  v17 = UserDereferenceObject;
  v16[1] = 0LL;
  v13 = *(_QWORD **)(W32GetUserSessionState() + 63512);
LABEL_3:
  if ( !v13 )
  {
    if ( v17 != -1 )
    {
      PopAndFreeW32ThreadLock(v16);
      v17 = -1LL;
    }
    if ( v19 != -1 )
      PopAndFreeW32ThreadLock(v18);
    return v10;
  }
  ObfReferenceObject(v13);
  ExchangeW32ThreadLock(v13, v18);
  for ( i = (_QWORD *)v13[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v13 = (_QWORD *)v13[1];
      goto LABEL_3;
    }
    ObfReferenceObject(i);
    ExchangeW32ThreadLock(i, v16);
    v10 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 24LL), a2, a3, a4, a5, a6);
    if ( !v10 && (*((_DWORD *)a5 + 1) & 1) != 0 )
      break;
  }
  if ( v17 != -1 )
  {
    PopAndFreeW32ThreadLock(v16);
    v17 = -1LL;
  }
  if ( v19 != -1 )
    PopAndFreeW32ThreadLock(v18);
  return 0LL;
}
