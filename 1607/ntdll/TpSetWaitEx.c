/*
 * XREFs of TpSetWaitEx @ 0x18003BD50
 * Callers:
 *     TpSetWait @ 0x18003AC40 (TpSetWait.c)
 *     EtwpNotificationThread @ 0x180053D50 (EtwpNotificationThread.c)
 *     RtlDeregisterWaitEx @ 0x180064420 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180064A90 (RtlRegisterWait.c)
 *     RtlpWnfNotificationThread @ 0x180065C20 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x18007FE78 (RtlpTpWaitCheckReset.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081520 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180082A84 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003BE68 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003BF88 (TppWaitpValidateWait.c)
 *     TppSetupNextWait @ 0x18003C704 (TppSetupNextWait.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char v13; // al
  signed int v14; // ebx
  _BOOL8 v15; // rbp
  char v17; // al
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter(v9, v8, v10, v11);
    return 0;
  }
  v12 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v13 = TppCancelWait(Wait, v12 + 112, 0LL, &v18);
  v14 = v18;
  v15 = v18 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v13 )
    {
      *((_BYTE *)Wait + 464) |= 1u;
      v17 = *((_BYTE *)Wait + 464);
      *((_QWORD *)Wait + 47) = Handle;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v17 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v14 += TppSetupNextWait(Wait, Handle, Timeout);
      v18 = v14;
LABEL_8:
      if ( v14 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v14);
        v14 = 0;
        v18 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v14 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v14) == -v14 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v15;
}
