/*
 * XREFs of TpSetWaitEx @ 0x18000A960
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180005410 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x180005ED8 (RtlpTpWaitCheckReset.c)
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180007100 (RtlRegisterWait.c)
 *     TpSetWait @ 0x1800091F0 (TpSetWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x180051338 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180051D60 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpNotificationThread @ 0x180052810 (EtwpNotificationThread.c)
 * Callees:
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18000AC08 (TppWaitpValidateWait.c)
 *     TppSetupNextWait @ 0x18000B9E4 (TppSetupNextWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  char v11; // al
  signed int v12; // ebx
  _BOOL8 v13; // rbp
  char v15; // al
  signed int v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter(v9, v8);
    return 0;
  }
  v10 = *((_QWORD *)Wait + 17);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
  v11 = TppCancelWait(Wait, v10 + 112, 0LL, &v16);
  v12 = v16;
  v13 = v16 != 0;
  if ( Handle && !*((_BYTE *)Wait + 347) )
  {
    if ( !v11 )
    {
      *((_BYTE *)Wait + 456) |= 1u;
      v15 = *((_BYTE *)Wait + 456);
      *((_QWORD *)Wait + 46) = Handle;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 456) = v15 | 2;
        *((LARGE_INTEGER *)Wait + 47) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 44) )
    {
      v12 += TppSetupNextWait(Wait, Handle, Timeout);
      v16 = v12;
LABEL_8:
      if ( v12 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v12);
        v12 = 0;
        v16 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
  if ( v12 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v12) == -v12 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v13;
}
