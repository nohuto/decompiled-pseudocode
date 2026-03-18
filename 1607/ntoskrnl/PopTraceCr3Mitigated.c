/*
 * XREFs of PopTraceCr3Mitigated @ 0x1402098E8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140146EF4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void PopTraceCr3Mitigated()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      TlgWrite(&pCallbackContext, &unk_14027D113, 0LL, 0LL, 3u, &pData);
    }
  }
}
