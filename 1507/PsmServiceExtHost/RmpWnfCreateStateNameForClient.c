/*
 * XREFs of RmpWnfCreateStateNameForClient @ 0x180021324
 * Callers:
 *     RmpActivatorRegister @ 0x180020510 (RmpActivatorRegister.c)
 * Callees:
 *     RmpGetWnfPublisherSid @ 0x180003D50 (RmpGetWnfPublisherSid.c)
 *     ?RmpCreateWnfStateNameForIpc@@YAJPEAT_RM_SID@@0PEAU_WNF_STATE_NAME@@@Z @ 0x180021388 (-RmpCreateWnfStateNameForIpc@@YAJPEAT_RM_SID@@0PEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfCreateStateNameForClient(PSID a1, struct _WNF_STATE_NAME *a2)
{
  __int64 result; // rax
  _BYTE DestinationSid[80]; // [rsp+20h] [rbp-68h] BYREF

  result = RmpGetWnfPublisherSid(DestinationSid);
  if ( (int)result >= 0 )
    return RmpCreateWnfStateNameForIpc(DestinationSid, a1, a2);
  return result;
}
