/*
 * XREFs of PopDispatchNotificationsToList @ 0x1404B4D24
 * Callers:
 *     PopDispatchNotifications @ 0x1404B4CE4 (PopDispatchNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     PopMarshalSettingValues @ 0x140456F14 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x1404F4A74 (PopFreeRegistration.c)
 */

BOOLEAN __fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  WNF_STATE_NAME *v3; // r14
  unsigned int *v4; // rsi
  BOOLEAN result; // al
  int v6; // ebx
  ULONG v7; // r8d
  NTSTATUS updated; // ebx
  WNF_STATE_NAME v9; // rcx
  WNF_STATE_NAME **v10; // rax
  ULONG v11; // [rsp+40h] [rbp-58h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-50h] BYREF
  _DWORD Buffer[10]; // [rsp+50h] [rbp-48h] BYREF

  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2;
    v4 = (unsigned int *)&v2[6] + 1;
    while ( (*v4 & 1) != 0 && (*v4 & 2) == 0 )
    {
      StateName = v2[7];
      *v4 = *v4 & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues((__int64)v2, Buffer, 0x24u, &v11);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v11;
      if ( v6 < 0 )
        v7 = 0;
      v11 = v7;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v7, 0LL, 0LL, 0, 0);
      if ( KeAreApcsDisabled() )
        __fastfail(0x20u);
      ExAcquireFastMutex(&PopSettingLock);
      *v4 &= ~2u;
      if ( updated < 0 )
      {
        *v4 |= 1u;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (*v4 & 2) == 0 && (*v4 & 4) != 0 )
    {
      v9 = *v3;
      v10 = (WNF_STATE_NAME **)v3[1];
      if ( *(WNF_STATE_NAME **)(*(_QWORD *)v3 + 8LL) != v3 || *v10 != v3 )
        __fastfail(3u);
      *v10 = (WNF_STATE_NAME *)v9;
      *(_QWORD *)(*(_QWORD *)&v9 + 8LL) = v10;
      PopFreeRegistration(v3);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
