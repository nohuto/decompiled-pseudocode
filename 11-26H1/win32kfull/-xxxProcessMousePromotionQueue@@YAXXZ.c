/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x140134268 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140134C48 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     xxxCheckPendingPromotePointer @ 0x140135CB0 (xxxCheckPendingPromotePointer.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1401364E0 (xxxCleanupThreadPointerInputInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1401338B8 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x140133B80 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401FDDC0 (xxxWaitForDITMouseInjectionFlush.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxProcessMousePromotionQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagMOUSE_PROMOTION_QUEUE *v6; // r14
  __int64 UserSessionState; // rbx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  char v13; // di
  struct tagMOUSE_PROMOTION_ENTRY *v14; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebp
  struct tagTHREADINFO *v22; // rax
  char v23; // bl
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rcx
  struct tagTHREADINFO *v29; // rax
  __int64 v30; // rax
  __int64 v31; // xmm0_8
  __int64 v32; // r8
  __int64 v33; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+28h] [rbp-40h]
  _QWORD v35[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 16664) )
  {
    v6 = (struct tagMOUSE_PROMOTION_QUEUE *)(W32GetUserSessionState(v3, v2) + 16536);
    if ( *(_QWORD *)v6 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      v9 = PtiCurrent(v8);
      *(_DWORD *)(UserSessionState + 16672) &= ~1u;
      *(_QWORD *)(UserSessionState + 16664) = v9;
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
        v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 18792) == 0;
      else
        v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 16332) == 0;
      if ( v12 || (v13 = 1, (unsigned __int8)IsInputThread()) )
        v13 = 0;
      while ( 1 )
      {
        v14 = DequeueMousePromotionEntry(v6);
        v15 = v14;
        if ( !v14 )
          break;
        v20 = *((unsigned int *)v14 + 11);
        if ( (v20 & 0x20) != 0
          && (unsigned __int8)HasCapture()
          && (v30 = *((_QWORD *)PtiCurrent(v20) + 57),
              v31 = *(_QWORD *)(v30 + 864),
              LODWORD(v30) = *(_DWORD *)(v30 + 872),
              v33 = v31,
              v34 = v30,
              !(unsigned int)CheckIntegrityAccessToCapture(&v33)) )
        {
          v13 = 1;
          v21 = 1;
        }
        else
        {
          v21 = 0;
        }
        v22 = PtiCurrent(v20);
        v23 = 0;
        v35[0] = *((_QWORD *)v22 + 47);
        *((_QWORD *)v22 + 47) = v35;
        v35[2] = FreePointerDeviceCalibrationInfo;
        v35[1] = v15;
        v25 = W32GetUserSessionState(v35, v24);
        if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v25 + 16)) == 1 )
        {
          v23 = 1;
          LeaveMitRitHazardCrit();
        }
        UserSessionSwitchLeaveCrit(v26);
        v27 = v21 | 0x100;
        if ( !v13 )
          v27 = v21;
        xxxSendMousePromotion((__int64)v15, v27);
        EnterCrit(1LL, 0LL);
        if ( v23 )
          EnterMitRitHazardCrit();
        v29 = PtiCurrent(v28);
        *((_QWORD *)v29 + 47) = v35[0];
        Win32FreePool(v15);
      }
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v13 )
        {
LABEL_10:
          xxxProcessMouseEvent();
LABEL_11:
          *(_QWORD *)(W32GetUserSessionState(v19, v18) + 16664) = 0LL;
          return;
        }
        if ( !*(_DWORD *)(W32GetUserSessionState(v17, v16) + 18792) )
          goto LABEL_11;
        if ( (unsigned __int8)IsInputThread() )
        {
          v32 = 1710LL;
          goto LABEL_35;
        }
      }
      else
      {
        if ( !v13 )
          goto LABEL_10;
        if ( !*(_DWORD *)(W32GetUserSessionState(v17, v16) + 16332) )
          goto LABEL_11;
        if ( (unsigned __int8)IsInputThread() )
        {
          v32 = 1726LL;
LABEL_35:
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v32);
        }
      }
      xxxWaitForDITMouseInjectionFlush();
      goto LABEL_11;
    }
  }
}
