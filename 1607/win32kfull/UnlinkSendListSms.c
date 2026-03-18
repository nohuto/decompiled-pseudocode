/*
 * XREFs of UnlinkSendListSms @ 0x1C0058070
 * Callers:
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     xxxReceiverDied @ 0x1C01067A8 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0106828 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     SuspendThreadQueue @ 0x1C01142D0 (SuspendThreadQueue.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C005810C (IsPointerInputMessageWithState.c)
 *     _FreeTouchInputInfo @ 0x1C01D48A0 (_FreeTouchInputInfo.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1)
{
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // rcx
  __int64 **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 26);
  if ( v2 == 576 )
  {
    FreeTouchInputInfo(a1[12], 0LL);
  }
  else if ( v2 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0
    && ((unsigned int)IsPointerInputMessageWithState(*((unsigned int *)a1 + 26))
     || v3 == 528 && *((_WORD *)a1 + 44) == 582) )
  {
    PointerList::UnreferenceMsgData(a1[12], 6LL);
  }
  v4 = (__int64 *)*a1;
  v5 = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  HMAssignmentUnlock(a1 + 14);
  v8 = a1[15];
  if ( v8 )
    Win32FreePool(v8, v6, v7);
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
