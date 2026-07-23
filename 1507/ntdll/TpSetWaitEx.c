/*
 * XREFs of TpSetWaitEx @ 0x18003C830
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18000B470 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x18000BE10 (RtlpTpWaitCheckReset.c)
 *     EtwpNotificationThread @ 0x18000C010 (EtwpNotificationThread.c)
 *     TpSetWait @ 0x18003C7C0 (TpSetWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007AFA4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007B4F0 (EtwpRegisterTpNotificationOnce.c)
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18007BDC0 (RtlRegisterWait.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003CDCC (TppWaitpValidateWait.c)
 *     TppSetupNextWait @ 0x18003D670 (TppSetupNextWait.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  char v12; // al
  signed int v13; // ebx
  _BOOL8 v14; // rbp
  char v16; // al
  signed int v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter(v9, v8, v10);
    return 0;
  }
  v11 = *((_QWORD *)Wait + 17);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
  v12 = TppCancelWait(Wait, v11 + 112, 0LL, &v17);
  v13 = v17;
  v14 = v17 != 0;
  if ( Handle && !*((_BYTE *)Wait + 347) )
  {
    if ( !v12 )
    {
      *((_BYTE *)Wait + 456) |= 1u;
      v16 = *((_BYTE *)Wait + 456);
      *((_QWORD *)Wait + 46) = Handle;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 456) = v16 | 2;
        *((LARGE_INTEGER *)Wait + 47) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 44) )
    {
      v13 += TppSetupNextWait(Wait, Handle, Timeout);
      v17 = v13;
LABEL_8:
      if ( v13 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v13);
        v13 = 0;
        v17 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
  if ( v13 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v13) == -v13 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v14;
}
