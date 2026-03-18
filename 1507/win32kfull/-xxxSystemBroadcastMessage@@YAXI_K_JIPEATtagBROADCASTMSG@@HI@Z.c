/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C004E0FC
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     ExchangeW32ThreadLock @ 0x1C004E394 (ExchangeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        unsigned __int64 a2,
        struct _LARGE_STRING *a3,
        unsigned int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // [rsp+40h] [rbp-78h]
  _BYTE v14[24]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v15[88]; // [rsp+60h] [rbp-58h] BYREF

  v8 = a4;
  PushW32ThreadLock(0LL, v15, UserDereferenceObject);
  PushW32ThreadLock(0LL, v14, UserDereferenceObject);
  v9 = (_QWORD *)grpWinStaList;
  v13 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v8 || (v10 = 1, v9 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) )
        v10 = v8;
      if ( v9 )
        ObfReferenceObject(v9);
      ExchangeW32ThreadLock(v9, v15);
      v11 = (_QWORD *)v9[2];
      if ( v11 )
      {
        do
        {
          ObfReferenceObject(v11);
          ExchangeW32ThreadLock(v11, v14);
          v12 = *(_QWORD *)(v11[1] + 16LL);
          if ( v12 )
            xxxBroadcastMessageEx(v12, a1, a2, a3, v10, a5, a6, a7);
          v11 = (_QWORD *)v11[2];
        }
        while ( v11 );
        v9 = v13;
        v8 = a4;
      }
      v9 = (_QWORD *)v9[1];
      v13 = v9;
    }
    while ( v9 );
  }
  PopAndFreeW32ThreadLock(v14);
  PopAndFreeW32ThreadLock(v15);
}
