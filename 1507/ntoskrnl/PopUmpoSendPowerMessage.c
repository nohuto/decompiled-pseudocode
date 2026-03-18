/*
 * XREFs of PopUmpoSendPowerMessage @ 0x1400D11BC
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D0A84 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendReapplyBrightnessSettings @ 0x14017023C (PopUmpoSendReapplyBrightnessSettings.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1404E62B4 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopUmpoSendLegacyEvent @ 0x14056C170 (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessLoop @ 0x1405C0B10 (PopMonitorProcessLoop.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401800F0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x1404E6304 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1404E6394 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size)
{
  HANDLE v4; // rdi
  unsigned int v5; // ebx
  _WORD v7[256]; // [rsp+40h] [rbp-218h] BYREF

  PopAcquireUmpoPushLock(0LL);
  v4 = PopAlpcClientPort;
  if ( PopAlpcClientPort )
  {
    if ( Size > 0x1D8 )
    {
      v5 = -2147483643;
    }
    else
    {
      memset(v7, 0, sizeof(v7));
      v7[0] = Size;
      v7[1] = Size + 40;
      memmove(&v7[20], Src, Size);
      v5 = ZwAlpcSendWaitReceivePort(v4, 0x10000LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1073741758;
  }
  PopReleaseUmpoPushLock();
  return v5;
}
