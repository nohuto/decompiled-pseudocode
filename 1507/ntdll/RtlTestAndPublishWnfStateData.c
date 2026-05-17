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
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF

  v10 = a1;
  updated = ZwUpdateWnfStateData(&v10, a3, a4, a2, a5, a6, 1);
  v8 = updated;
  if ( MEMORY[0x7FFE038E] && updated >= 0 )
    RtlpWnfETWEventPublish(v10, a4);
  return v8;
}
