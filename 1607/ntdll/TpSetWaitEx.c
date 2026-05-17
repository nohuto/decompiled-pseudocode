/*
 * XREFs of TpSetWaitEx @ 0x18003BD60
 * Callers:
 *     TpSetWait @ 0x18003AC50 (TpSetWait.c)
 *     EtwpNotificationThread @ 0x180053D60 (EtwpNotificationThread.c)
 *     RtlDeregisterWaitEx @ 0x180064430 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180064AA0 (RtlRegisterWait.c)
 *     RtlpWnfNotificationThread @ 0x180065C30 (RtlpWnfNotificationThread.c)
 *     RtlpTpWaitCheckReset @ 0x18007FE88 (RtlpTpWaitCheckReset.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081530 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180082A94 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003BE78 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003BF98 (TppWaitpValidateWait.c)
 *     TppSetupNextWait @ 0x18003C714 (TppSetupNextWait.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char v13; // al
  signed int v14; // ebx
  BOOL v15; // ebp
  char v17; // al
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(a1, 0LL, a2 != 0) )
    return 0LL;
  if ( a4 )
  {
    TppRaiseInvalidParameter(v9, v8, v10, v11);
    return 0LL;
  }
  v12 = *(_QWORD *)(a1 + 144);
  RtlAcquireSRWLockExclusive(a1 + 240, v8, v10, v11);
  v13 = TppCancelWait(a1, v12 + 112, 0LL, &v18);
  v14 = v18;
  v15 = v18 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 355) )
  {
    if ( !v13 )
    {
      *(_BYTE *)(a1 + 464) |= 1u;
      v17 = *(_BYTE *)(a1 + 464);
      *(_QWORD *)(a1 + 376) = a2;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 464) = v17 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v14 += TppSetupNextWait(a1, a2, a3);
      v18 = v14;
LABEL_8:
      if ( v14 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14);
        v14 = 0;
        v18 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  if ( v14 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14) == -v14 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v15;
}
