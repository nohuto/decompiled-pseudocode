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

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rdx
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
  v12 = *(_QWORD *)(a1 + 136);
  RtlAcquireSRWLockExclusive(a1 + 232);
  v13 = TppCancelWait(a1, v12 + 112, 0LL, &v18);
  v14 = v18;
  v15 = v18 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 347) )
  {
    if ( !v13 )
    {
      *(_BYTE *)(a1 + 456) |= 1u;
      v17 = *(_BYTE *)(a1 + 456);
      *(_QWORD *)(a1 + 368) = a2;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 456) = v17 | 2;
        *(_QWORD *)(a1 + 376) = *a3;
      }
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(a1 + 352) )
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
  RtlReleaseSRWLockExclusive(a1 + 232);
  if ( v14 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14) == -v14 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v15;
}
