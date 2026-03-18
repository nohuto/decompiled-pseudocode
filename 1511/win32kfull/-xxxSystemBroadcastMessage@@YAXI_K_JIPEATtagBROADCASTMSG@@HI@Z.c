/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C008D658
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp-68h]
  void (*v18)(void); // [rsp+58h] [rbp-60h]
  __int64 v19; // [rsp+60h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+68h] [rbp-50h]
  void (*v21)(void); // [rsp+70h] [rbp-48h]

  v8 = a4;
  PushW32ThreadLock(0LL, &v19, UserDereferenceObject);
  PushW32ThreadLock(0LL, &v16, UserDereferenceObject);
  v9 = (_QWORD *)grpWinStaList;
  v15 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v8 || (v10 = 1, v9 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL)) )
        v10 = v8;
      if ( v9 )
        ObfReferenceObject(v9);
      v11 = v20;
      v20 = v9;
      if ( v11 )
        v21();
      v12 = (_QWORD *)v9[2];
      if ( v12 )
      {
        do
        {
          ObfReferenceObject(v12);
          v13 = v17;
          v17 = v12;
          if ( v13 )
            v18();
          v14 = *(_QWORD *)(v12[1] + 16LL);
          if ( v14 )
            xxxBroadcastMessageEx(v14, a1, a2, a3, v10, a5, a6, a7);
          v12 = (_QWORD *)v12[2];
        }
        while ( v12 );
        v9 = v15;
        v8 = a4;
      }
      v9 = (_QWORD *)v9[1];
      v15 = v9;
    }
    while ( v9 );
  }
  PopAndFreeW32ThreadLock((__int64)&v16);
  PopAndFreeW32ThreadLock((__int64)&v19);
}
