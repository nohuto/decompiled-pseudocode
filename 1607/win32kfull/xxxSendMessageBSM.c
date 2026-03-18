/*
 * XREFs of xxxSendMessageBSM @ 0x1C009C7E0
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0093E04 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1C0111A90 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C009C914 (ExchangeW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C009C938 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rbx
  _QWORD *i; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[24]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-40h] BYREF

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) != 0 )
  {
    PushW32ThreadLock(0LL, v23, UserDereferenceObject);
    PushW32ThreadLock(0LL, v22, UserDereferenceObject);
    v13 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      while ( 2 )
      {
        ObfReferenceObject(v13);
        ExchangeW32ThreadLock(v13, v23);
        for ( i = (_QWORD *)v13[2]; i; i = (_QWORD *)i[2] )
        {
          ObfReferenceObject(i);
          ExchangeW32ThreadLock(i, v22);
          v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 16LL), a2, a3, a4, a5, a6);
          if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
          {
            PopAndFreeW32ThreadLock((__int64)v22, v10, v11, v12);
            PopAndFreeW32ThreadLock((__int64)v23, v19, v20, v21);
            return 0LL;
          }
        }
        v13 = (_QWORD *)v13[1];
        if ( v13 )
          continue;
        break;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v22, v10, v11, v12);
    PopAndFreeW32ThreadLock((__int64)v23, v15, v16, v17);
  }
  else
  {
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  }
  return v6;
}
