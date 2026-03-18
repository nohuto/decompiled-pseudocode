/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01D9958
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01D9B5C (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, __int64 a4)
{
  struct tagIMEUI *v5; // rsi
  int v7; // ebx
  struct tagIMEUI *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagWND *v16; // [rsp+50h] [rbp-78h]
  _QWORD v17[3]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v18[64]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v20; // [rsp+F0h] [rbp+28h]

  v5 = a2;
  v20 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, (__int64)v18);
    KeAttachProcess(*a1[47]);
  }
  v8 = v5;
  if ( (unsigned __int64)v5 >= W32UserProbeAddress )
    v8 = (struct tagIMEUI *)W32UserProbeAddress;
  LOBYTE(a2) = 1;
  v16 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v8 + 4), (__int64)a2, a3, a4);
  if ( v16 )
  {
    v9 = (volatile signed __int32 *)((char *)v5 + 40);
    _InterlockedIncrement(v9);
    if ( v7 )
      KeDetachProcess();
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v16;
    ++*((_DWORD *)v16 + 2);
    _InterlockedIncrement(&glSendMessage);
    v20 = xxxSendTransformableMessageTimeout(v16, 642LL, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v11, v10);
    if ( v7 )
    {
      if ( ((_DWORD)a1[55] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v18, v12, v13, v14);
        return v20;
      }
      KeAttachProcess(*a1[47]);
    }
    _InterlockedDecrement(v9);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v20;
}
