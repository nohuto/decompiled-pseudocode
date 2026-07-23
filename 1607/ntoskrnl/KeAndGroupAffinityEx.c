/*
 * XREFs of KeAndGroupAffinityEx @ 0x140132BB0
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140007EE0 (PnpSetDeviceAffinityThread.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14007D310 (KeQueryLogicalProcessorRelationship.c)
 *     PpmEventDomainPerfStateChange @ 0x1401322C4 (PpmEventDomainPerfStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall KeAndGroupAffinityEx(unsigned __int16 *a1, __int64 a2, char *a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rdx
  char v6; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v6;
  }
  v3 = *(_WORD *)(a2 + 8);
  if ( *a1 <= v3 )
  {
    *(_QWORD *)a3 = 0LL;
    return 0LL;
  }
  v4 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v3 + 4];
  *(_QWORD *)a3 = v4;
  return v4 != 0;
}
