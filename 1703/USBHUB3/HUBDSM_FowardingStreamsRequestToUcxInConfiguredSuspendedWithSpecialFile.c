/*
 * XREFs of HUBDSM_FowardingStreamsRequestToUcxInConfiguredSuspendedWithSpecialFile @ 0x1C0018DD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_ForwardRequestToUCX @ 0x1C0021448 (HUBUCX_ForwardRequestToUCX.c)
 */

__int64 __fastcall HUBDSM_FowardingStreamsRequestToUcxInConfiguredSuspendedWithSpecialFile(__int64 a1)
{
  HUBUCX_ForwardRequestToUCX(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
