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

BOOLEAN __fastcall PopDispatchNotificationsToList(_QWORD **a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r14
  unsigned int *v4; // rsi
  BOOLEAN result; // al
  int v6; // ebx
  __int64 v7; // r8
  int updated; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned int v11; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v13[10]; // [rsp+50h] [rbp-48h] BYREF

  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != a1 )
  {
    v3 = v2;
    v4 = (unsigned int *)v2 + 13;
    while ( (*v4 & 1) != 0 && (*v4 & 2) == 0 )
    {
      v12 = v2[7];
      *v4 = *v4 & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues((__int64)v2, v13, 0x24u, &v11);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v11;
      if ( v6 < 0 )
        v7 = 0LL;
      v11 = v7;
      updated = ZwUpdateWnfStateData((__int64)&v12, (__int64)v13, v7);
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
    v2 = (_QWORD *)*v2;
    if ( (*v4 & 2) == 0 && (*v4 & 4) != 0 )
    {
      v9 = *v3;
      v10 = (_QWORD *)v3[1];
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v10 != v3 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      PopFreeRegistration(v3);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
