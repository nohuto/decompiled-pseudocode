/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2C04
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E2E08 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  struct tagIMEUI *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp-78h]
  _QWORD v14[3]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v15[64]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v17; // [rsp+F0h] [rbp+28h]

  v17 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, (__int64)v15);
    KeAttachProcess(*a1[48]);
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v8 = (struct tagIMEUI *)W32UserProbeAddress;
  v13 = HMValidateHandleNoSecure(*((_QWORD *)v8 + 4), 1);
  if ( v13 )
  {
    v9 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v9);
    if ( v7 )
      KeDetachProcess();
    v14[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v14;
    v14[1] = v13;
    ++*(_DWORD *)(v13 + 8);
    _InterlockedIncrement(&glSendMessage);
    v17 = xxxSendTransformableMessageTimeout((struct tagWND *)v13, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v11, v10);
    if ( v7 )
    {
      if ( ((_DWORD)a1[56] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v15);
        return v17;
      }
      KeAttachProcess(*a1[48]);
    }
    _InterlockedDecrement(v9);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v17;
}
