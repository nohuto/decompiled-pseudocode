/*
 * XREFs of RtlPublishWnfStateData @ 0x180073290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x180095410 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800C8D3C (RtlpWnfETWEventPublish.c)
 */

NTSTATUS __cdecl RtlPublishWnfStateData(
        WNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *Buffer,
        ULONG Length,
        const void *ExplicitScope)
{
  NTSTATUS updated; // eax
  NTSTATUS v7; // ebx
  WNF_STATE_NAME StateNamea; // [rsp+40h] [rbp-28h] BYREF

  StateNamea = StateName;
  updated = ZwUpdateWnfStateData(&StateNamea, Buffer, Length, TypeId, ExplicitScope, 0, 0);
  v7 = updated;
  if ( MEMORY[0x7FFE038E] && updated >= 0 )
    ((void (__fastcall *)(_QWORD, _QWORD))RtlpWnfETWEventPublish)(StateNamea, Length);
  return v7;
}
