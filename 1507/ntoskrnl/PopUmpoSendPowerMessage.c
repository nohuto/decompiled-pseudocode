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
  _BYTE SendMessageA[512]; // [rsp+40h] [rbp-218h] BYREF

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
      memset(SendMessageA, 0, sizeof(SendMessageA));
      *(_WORD *)SendMessageA = Size;
      *(_WORD *)&SendMessageA[2] = Size + 40;
      memmove(&SendMessageA[40], Src, Size);
      v5 = ZwAlpcSendWaitReceivePort(v4, 0x10000u, (PPORT_MESSAGE)SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1073741758;
  }
  PopReleaseUmpoPushLock();
  return v5;
}
