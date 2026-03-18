/*
 * XREFs of PopReleaseAdaptiveLock @ 0x14055DBB8
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x140569878 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x140582E9C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140598BF8 (PopAdaptivePowerSettingCallback.c)
 *     PopUserPresentOverride @ 0x1406BCD58 (PopUserPresentOverride.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
 *     PopSensorActiveInput @ 0x1406BCC74 (PopSensorActiveInput.c)
 *     PopSetWin32kInputTimeout @ 0x1406BCCE0 (PopSetWin32kInputTimeout.c)
 *     PopSendSessionInfo @ 0x1406BCDBC (PopSendSessionInfo.c)
 */

void PopReleaseAdaptiveLock()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v3; // ax
  __int128 v4; // xmm0
  int v5; // edi
  unsigned int v6; // ebx
  _BYTE v7[24]; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v9[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+44h] [rbp-3Ch]
  __int64 v11; // [rsp+4Ch] [rbp-34h]
  int v12; // [rsp+54h] [rbp-2Ch]
  GUID v13; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp-18h]

  v9[0] = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v7[0] = 0;
  memset(&v7[4], 0, 20);
  PopAdpmLockThread = 0LL;
  if ( (_BYTE)PopLazyContext )
  {
    v4 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    *(_OWORD *)v7 = v4;
    *(_QWORD *)&v7[16] = qword_14032D390;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v3;
  if ( !v3
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v7[0] )
  {
    v5 = *(_DWORD *)&v7[4];
    if ( v7[18] )
    {
      PopSensorActiveInput(v7);
      v6 = *(_DWORD *)&v7[8];
    }
    else
    {
      v6 = *(_DWORD *)&v7[8];
      if ( v7[16] )
        PopSetWin32kInputTimeout(*(unsigned int *)&v7[4], *(unsigned int *)&v7[8]);
      if ( v7[17] )
      {
        v14 = *(_DWORD *)&v7[12];
        v13 = GUID_CONSOLE_VIDEO_TIMEOUT;
        PopSendSessionInfo(*(unsigned int *)&v7[4], v0, v1, &v13);
      }
    }
    v8 = v5;
    HIDWORD(v11) = 7;
    PopDispatchStateCallout(v9, &v8);
    if ( v7[19] )
      PopSetWin32kInputTimeout(0xFFFFFFFFLL, v6);
  }
}
