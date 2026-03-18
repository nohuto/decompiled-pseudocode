/*
 * XREFs of RemoveSMSReceiveList @ 0x1C007F5F4
 * Callers:
 *     ClearSendMessages @ 0x1C00567F4 (ClearSendMessages.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     xxxReceiverDied @ 0x1C01067A8 (xxxReceiverDied.c)
 *     SuspendThreadQueue @ 0x1C01142D0 (SuspendThreadQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveSMSReceiveList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v2 = (_QWORD *)(a1 + 16);
  if ( *v2 )
  {
    --*(_DWORD *)(a2 + 488);
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
  }
}
