/*
 * XREFs of RtlTestAndPublishWnfStateData @ 0x180077820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x180095410 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800C8D3C (RtlpWnfETWEventPublish.c)
 */

__int64 __fastcall RtlTestAndPublishWnfStateData(
        WNF_STATE_NAME a1,
        const WNF_TYPE_ID *a2,
        const void *a3,
        ULONG a4,
        void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp)
{
  NTSTATUS updated; // eax
  unsigned __int32 v8; // ebx
  WNF_STATE_NAME StateName; // [rsp+40h] [rbp-28h] BYREF

  StateName = a1;
  updated = ZwUpdateWnfStateData(&StateName, a3, a4, a2, ExplicitScope, MatchingChangeStamp, 1u);
  v8 = updated;
  if ( MEMORY[0x7FFE038E] && updated >= 0 )
    ((void (__fastcall *)(_QWORD, _QWORD))RtlpWnfETWEventPublish)(StateName, a4);
  return v8;
}
