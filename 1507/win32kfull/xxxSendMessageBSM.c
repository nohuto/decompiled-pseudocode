/*
 * XREFs of xxxSendMessageBSM @ 0x1C004E260
 * Callers:
 *     xxxWrapSendMessageBSM @ 0x1C00F9760 (xxxWrapSendMessageBSM.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C012FB50 (xxxUserPowerStateCalloutWorker.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C014A01C (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C004E394 (ExchangeW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // rbx
  _QWORD *i; // rdi
  _BYTE v13[24]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[24]; // [rsp+48h] [rbp-40h] BYREF

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) != 0 )
  {
    PushW32ThreadLock(0LL, v14, UserDereferenceObject);
    PushW32ThreadLock(0LL, v13, UserDereferenceObject);
    v10 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      while ( 2 )
      {
        ObfReferenceObject(v10);
        ExchangeW32ThreadLock(v10, v14);
        for ( i = (_QWORD *)v10[2]; i; i = (_QWORD *)i[2] )
        {
          ObfReferenceObject(i);
          ExchangeW32ThreadLock(i, v13);
          v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 16LL), a2, a3, a4, a5, a6);
          if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
          {
            PopAndFreeW32ThreadLock(v13);
            PopAndFreeW32ThreadLock(v14);
            return 0LL;
          }
        }
        v10 = (_QWORD *)v10[1];
        if ( v10 )
          continue;
        break;
      }
    }
    PopAndFreeW32ThreadLock(v13);
    PopAndFreeW32ThreadLock(v14);
  }
  else
  {
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  }
  return v6;
}
