/*
 * XREFs of PopFreeRegistration @ 0x140533F70
 * Callers:
 *     PopDispatchNotificationsToList @ 0x14052B6C0 (PopDispatchNotificationsToList.c)
 *     PopFreeSessionState @ 0x140533EC8 (PopFreeSessionState.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x14015BB90 (ZwDeleteWnfStateName.c)
 *     PopUnreferencePowerSetting @ 0x1403F4B18 (PopUnreferencePowerSetting.c)
 */

void __fastcall PopFreeRegistration(WNF_STATE_NAME *a1)
{
  WNF_STATE_NAME *v2; // rbx
  __int64 v3; // rsi

  v2 = a1 + 8;
  v3 = 3LL;
  do
  {
    if ( *v2 )
      PopUnreferencePowerSetting(*v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( a1[7].Data[0] || a1[7].Data[1] )
    ZwDeleteWnfStateName(a1 + 7);
  ExFreePoolWithTag(a1, 0x74655350u);
}
