/*
 * XREFs of PopFreeRegistration @ 0x1404F4A74
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1404B4D24 (PopDispatchNotificationsToList.c)
 *     PopFreeSessionState @ 0x1404F49CC (PopFreeSessionState.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x140151F80 (ZwDeleteWnfStateName.c)
 *     PopUnreferencePowerSetting @ 0x14045705C (PopUnreferencePowerSetting.c)
 */

void __fastcall PopFreeRegistration(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD **v4; // rbx
  __int64 v5; // rsi

  v4 = (_DWORD **)(a1 + 16);
  v5 = 3LL;
  do
  {
    if ( *v4 )
      PopUnreferencePowerSetting(*v4);
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( a1[14] || a1[15] )
    ZwDeleteWnfStateName((__int64)(a1 + 14), a2, a3);
  ExFreePoolWithTag(a1, 0x74655350u);
}
