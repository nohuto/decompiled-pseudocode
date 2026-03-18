/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1404C50D8
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403B55B0 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x1404F2D64 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1404F537C (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14050BA7C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x14053D648 (PopAdaptivePowerSettingCallback.c)
 *     PopUserPresentOverride @ 0x14063C6E8 (PopUserPresentOverride.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 *     PopSensorActiveInput @ 0x14063C618 (PopSensorActiveInput.c)
 *     PopSetWin32kInputTimeout @ 0x14063C684 (PopSetWin32kInputTimeout.c)
 *     PopSendSessionInfo @ 0x14063C7BC (PopSendSessionInfo.c)
 */

__int64 PopReleaseAdaptiveLock()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int128 v3; // xmm0
  int v4; // edi
  unsigned int v5; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-60h] BYREF
  int v7; // [rsp+38h] [rbp-48h] BYREF
  int v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+44h] [rbp-3Ch]
  __int64 v10; // [rsp+4Ch] [rbp-34h]
  int v11; // [rsp+54h] [rbp-2Ch]
  GUID v12; // [rsp+58h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp-18h]

  LOBYTE(v8) = 0;
  PopAdpmLockThread = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v6[0] = 0;
  memset(&v6[4], 0, 20);
  if ( (_BYTE)PopLazyContext )
  {
    v3 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    *(_OWORD *)v6 = v3;
    *(_QWORD *)&v6[16] = qword_1402DCFB0;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6[0] )
  {
    v4 = *(_DWORD *)&v6[4];
    if ( v6[18] )
    {
      PopSensorActiveInput(v6);
      v5 = *(_DWORD *)&v6[8];
    }
    else
    {
      v5 = *(_DWORD *)&v6[8];
      if ( v6[16] )
        PopSetWin32kInputTimeout(*(unsigned int *)&v6[4], *(unsigned int *)&v6[8]);
      if ( v6[17] )
      {
        v13 = *(_DWORD *)&v6[12];
        v12 = GUID_CONSOLE_VIDEO_TIMEOUT;
        PopSendSessionInfo(*(unsigned int *)&v6[4], v1, v2, &v12);
      }
    }
    v7 = v4;
    HIDWORD(v10) = 7;
    result = PopDispatchStateCallout(&v8, (__int64)&v7);
    if ( v6[19] )
      return PopSetWin32kInputTimeout(0xFFFFFFFFLL, v5);
  }
  return result;
}
