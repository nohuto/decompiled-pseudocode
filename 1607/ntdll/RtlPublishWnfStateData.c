/*
 * XREFs of RtlPublishWnfStateData @ 0x180082DC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1800A9B50 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800D9B04 (RtlpWnfETWEventPublish.c)
 */

__int64 __fastcall RtlPublishWnfStateData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF

  v9 = a1;
  updated = ZwUpdateWnfStateData(&v9, a3, a4, a2, a5, 0, 0);
  v7 = updated;
  if ( MEMORY[0x7FFE038E] && updated >= 0 )
    RtlpWnfETWEventPublish(v9, a4);
  return v7;
}
