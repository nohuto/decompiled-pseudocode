/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0232668
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0107DE0 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023285C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C0232A2C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00E0460 (xxxWaitForDITMouseInjectionFlush.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C0231AE4 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0232B3C (-xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  if ( !qword_1C0328CB0 && qword_1C0328C30 )
  {
    dword_1C0328CB8 &= ~1u;
    qword_1C0328CB0 = gptiCurrent;
    v3 = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30);
    if ( v3 )
    {
      while ( 1 )
      {
        if ( (*((_DWORD *)v3 + 11) & 0x20) == 0
          || !gspwndMouseOwner
          || (v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)gspwndMouseOwner + 2) + 376LL) + 824LL),
              v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 376LL) + 824LL),
              !gbEnforceUIPI)
          || (unsigned int)v7 > (unsigned int)v6
          || (_DWORD)v7 == (_DWORD)v6
          && ((v8 = HIDWORD(v7), v9 = HIDWORD(v6), (_DWORD)v8 == (_DWORD)v9) || (_DWORD)v8 == -1 || (_DWORD)v9 == -1) )
        {
          v10 = 0;
        }
        else
        {
          v10 = 1;
          v0 = 1;
        }
        PushW32ThreadLock((__int64)v3, v18, (__int64)SpbApcRundown, v5);
        if ( gdwInAtomicOperation )
        {
          v11 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v11, gdwInAtomicOperation);
        xxxSendMousePromotion(v3, v10);
        EnterCrit(0LL, 1LL);
        PopW32ThreadLock(v18, v12, v13, v14);
        Win32FreePool(v3, v15, v16);
        v3 = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30);
        if ( !v3 )
          break;
        v4 = gptiCurrent;
      }
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned int)IsDwmInputThread(v2, v1) && gulAnyInputSinkInSubtree )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_28:
        qword_1C0328CB0 = 0LL;
        return;
      }
    }
    else
    {
      if ( v0 )
        goto LABEL_28;
      v17 = gdwInAtomicOperation;
      if ( gdwInAtomicOperation )
      {
        v2 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    UserSessionSwitchLeaveCrit(v2, v17);
    ProcessQueuedMouseEvents();
    EnterCrit(0LL, 1LL);
    goto LABEL_28;
  }
}
