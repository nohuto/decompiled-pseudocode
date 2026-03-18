/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140004B14
 * Callers:
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x140004EB8 (ExchangeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v7; // r14d
  struct tagTHREADINFO *v8; // rax
  struct tagTHREADINFO *v9; // rax
  _QWORD *v10; // rbx
  struct tagTHREADINFO *v11; // rax
  unsigned int v12; // esi
  _QWORD *v13; // rdi
  struct tagWND *v14; // rcx
  _QWORD *i; // [rsp+48h] [rbp-41h]
  _QWORD v16[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v17; // [rsp+60h] [rbp-29h]
  _QWORD v18[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v19; // [rsp+78h] [rbp-11h]

  v7 = a4;
  v8 = PtiCurrent();
  v18[0] = *((_QWORD *)v8 + 47);
  *((_QWORD *)v8 + 47) = v18;
  v19 = UserDereferenceObject;
  v18[1] = 0LL;
  v9 = PtiCurrent();
  v16[0] = *((_QWORD *)v9 + 47);
  *((_QWORD *)v9 + 47) = v16;
  v17 = UserDereferenceObject;
  v16[1] = 0LL;
  v10 = *(_QWORD **)(W32GetUserSessionState() + 63512);
  for ( i = v10; v10; i = v10 )
  {
    v11 = PtiCurrent();
    if ( v7 || (v12 = 1, v10 == *(_QWORD **)(*((_QWORD *)v11 + 61) + 40LL)) )
      v12 = v7;
    ObfReferenceObject(v10);
    ExchangeW32ThreadLock(v10, v18);
    v13 = (_QWORD *)v10[2];
    if ( v13 )
    {
      do
      {
        ObfReferenceObject(v13);
        ExchangeW32ThreadLock(v13, v16);
        v14 = *(struct tagWND **)(v13[1] + 24LL);
        if ( v14 )
          xxxBroadcastMessageEx(v14, a1, a2, a3, v12, a5, a6, a7);
        v13 = (_QWORD *)v13[4];
      }
      while ( v13 );
      v10 = i;
      v7 = a4;
    }
    v10 = (_QWORD *)v10[1];
  }
  if ( v17 != -1 )
  {
    PopAndFreeW32ThreadLock(v16);
    v17 = -1LL;
  }
  if ( v19 != -1 )
    PopAndFreeW32ThreadLock(v18);
}
