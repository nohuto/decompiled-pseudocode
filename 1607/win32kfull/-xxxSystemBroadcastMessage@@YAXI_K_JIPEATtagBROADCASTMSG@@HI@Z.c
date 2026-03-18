/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0099664
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C009C914 (ExchangeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  int v13; // esi
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+20h] [rbp-98h]
  _QWORD *v20; // [rsp+40h] [rbp-78h]
  _BYTE v21[24]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v22[88]; // [rsp+60h] [rbp-58h] BYREF

  v8 = a4;
  PushW32ThreadLock(0LL, v22, UserDereferenceObject);
  PushW32ThreadLock(0LL, v21, UserDereferenceObject);
  v12 = (_QWORD *)grpWinStaList;
  v20 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v8 || (v13 = 1, v12 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL)) )
        v13 = v8;
      if ( v12 )
        ObfReferenceObject(v12);
      ExchangeW32ThreadLock(v12, v22);
      v14 = (_QWORD *)v12[2];
      if ( v14 )
      {
        do
        {
          ObfReferenceObject(v14);
          ExchangeW32ThreadLock(v14, v21);
          v15 = *(_QWORD *)(v14[1] + 16LL);
          if ( v15 )
          {
            LODWORD(v19) = v13;
            xxxBroadcastMessageEx(v15, a1, a2, a3, v19, a5, a6, a7);
          }
          v14 = (_QWORD *)v14[2];
        }
        while ( v14 );
        v12 = v20;
        v8 = a4;
      }
      v12 = (_QWORD *)v12[1];
      v20 = v12;
    }
    while ( v12 );
  }
  PopAndFreeW32ThreadLock((__int64)v21, v9, v10, v11);
  PopAndFreeW32ThreadLock((__int64)v22, v16, v17, v18);
}
