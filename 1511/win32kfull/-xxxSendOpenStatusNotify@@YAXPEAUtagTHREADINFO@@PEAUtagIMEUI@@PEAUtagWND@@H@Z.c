/*
 * XREFs of ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E3298
 * Callers:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E2F14 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3094 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 */

void __fastcall xxxSendOpenStatusNotify(PRKPROCESS **a1, struct tagIMEUI *a2, struct tagWND *a3, int a4)
{
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+50h] [rbp-28h] BYREF

  v5 = (a4 != 0) + 1;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 2) + 552LL) >= 0x400u && *((_QWORD *)a3 + 31) )
  {
    v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v8;
    ++*((_DWORD *)a3 + 2);
    v8[1] = a3;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(a3, 642LL, v5, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v7, v6);
  }
  else
  {
    xxxSendMessageToUI(a1, a2, v5, v5);
  }
}
