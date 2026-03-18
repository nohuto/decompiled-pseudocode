/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023A9E8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0093620 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023AB70 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C023AD40 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C004AD10 (xxxWaitForDITMouseInjectionFlush.c)
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C0239DFC (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C023AE50 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  if ( !qword_1C0322D20 && qword_1C0322CA0 )
  {
    dword_1C0322D28 &= ~1u;
    qword_1C0322D20 = gptiCurrent;
    v3 = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0322CA0);
    if ( v3 )
    {
      while ( 1 )
      {
        if ( (*((_DWORD *)v3 + 11) & 0x20) == 0
          || !gspwndMouseOwner
          || (v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)gspwndMouseOwner + 2) + 384LL) + 832LL),
              v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 384LL) + 832LL),
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
        PushW32ThreadLock((__int64)v3, v13, (__int64)SpbApcRundown);
        UserSessionSwitchLeaveCrit(v12, v11);
        xxxSendMousePromotion(v3, v10);
        EnterCrit(1LL);
        PopW32ThreadLock(v13);
        Win32FreePool(v3);
        v3 = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0322CA0);
        if ( !v3 )
          break;
        v4 = gptiCurrent;
      }
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned int)IsDwmInputThread(v2, v1, v4, v5) && gulAnyInputSinkInSubtree )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_22:
        qword_1C0322D20 = 0LL;
        return;
      }
    }
    else if ( v0 )
    {
      goto LABEL_22;
    }
    UserSessionSwitchLeaveCrit(v2, v1);
    ProcessQueuedMouseEvents();
    EnterCrit(1LL);
    goto LABEL_22;
  }
}
