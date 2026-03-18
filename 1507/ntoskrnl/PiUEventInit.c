/*
 * XREFs of PiUEventInit @ 0x1407C01DC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     McGenEventRegister @ 0x1401703BC (McGenEventRegister.c)
 *     ExSubscribeWnfStateChange @ 0x14055B664 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall PiUEventInit(int a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // rax

  v1 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
      return v1;
    return McGenEventRegister(
             &Symbol_PnPMgrTriggerProvider,
             0LL,
             &Symbol_PnPMgrTriggerProvider_Context,
             &Microsoft_Windows_PnPMgrTriggerProviderHandle);
  }
  else
  {
    LODWORD(PiUEventClientRegistrationListLock) = 1;
    qword_14034AB88 = (__int64)&qword_14034AB80;
    v2 = 14LL;
    qword_14034AB80 = (__int64)&qword_14034AB80;
    qword_14034AB68 = 0LL;
    qword_14034AF48 = (__int64)&qword_14034AF40;
    v3 = 0LL;
    qword_14034AF40 = (__int64)&qword_14034AF40;
    qword_14034AFA8 = (__int64)&qword_14034AFA0;
    qword_14034AFA0 = (__int64)&qword_14034AFA0;
    dword_14034AB70 = 0;
    word_14034AB78 = 1;
    byte_14034AB7A = 6;
    dword_14034AB7C = 0;
    LODWORD(PiUEventUsermodeEventQueueLock) = 1;
    qword_14034AF28 = 0LL;
    dword_14034AF30 = 0;
    word_14034AF38 = 1;
    byte_14034AF3A = 6;
    dword_14034AF3C = 0;
    LODWORD(PiUEventBroadcastEventQueueLock) = 1;
    qword_14034AF88 = 0LL;
    dword_14034AF90 = 0;
    word_14034AF98 = 1;
    byte_14034AF9A = 6;
    dword_14034AF9C = 0;
    do
    {
      *(_QWORD *)((char *)&unk_14034ABA8 + v3) = (char *)&PiUEventDevInterfaceClientList + v3;
      *(_QWORD *)((char *)&PiUEventDevInterfaceClientList + v3) = (char *)&PiUEventDevInterfaceClientList + v3;
      *(_QWORD *)((char *)&unk_14034AC88 + v3) = (char *)&PiUEventDevInstanceClientList + v3;
      *(_QWORD *)((char *)&PiUEventDevInstanceClientList + v3) = (char *)&PiUEventDevInstanceClientList + v3;
      *(_QWORD *)((char *)&unk_14034AD68 + v3) = (char *)&PiUEventDevInstancePropertyClientList + v3;
      *(_QWORD *)((char *)&PiUEventDevInstancePropertyClientList + v3) = (char *)&PiUEventDevInstancePropertyClientList
                                                                       + v3;
      v4 = (_QWORD *)((char *)&PiUEventDevHandleClientList + v3);
      *(_QWORD *)((char *)&unk_14034AE48 + v3) = (char *)&PiUEventDevHandleClientList + v3;
      v3 += 16LL;
      *v4 = v4;
      --v2;
    }
    while ( v2 );
    qword_14034AF68 = (__int64)&PiUEventUsermodeEventQueue;
    PiUEventUsermodeEventQueue = (__int64)&PiUEventUsermodeEventQueue;
    qword_14034AFC8 = (__int64)&PiUEventBroadcastEventQueue;
    PiUEventBroadcastEventQueue = &PiUEventBroadcastEventQueue;
    return (unsigned int)ExSubscribeWnfStateChange(
                           (__int64)&PiUEventMetaNotificationHandle,
                           (__int64)&WNF_PNPA_DEVNODES_CHANGED,
                           2,
                           0,
                           (__int64)PiUEventMetaNotificationCallback,
                           0LL);
  }
}
