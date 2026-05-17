/*
 * XREFs of RtlGetCurrentUmsThread @ 0x180061AA0
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800DDF20 (RtlEnterUmsSchedulingMode.c)
 *     RtlExecuteUmsThread @ 0x1800DE000 (RtlExecuteUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCurrentUmsThread(struct _TEB ***a1)
{
  __int64 result; // rax
  struct _TEB *v3; // r8
  struct _TEB **v4; // rcx

  result = 0LL;
  if ( a1 )
  {
    v3 = NtCurrentTeb();
    v4 = (struct _TEB **)v3->TlsSlots[4];
    if ( v4 )
    {
      if ( v4[156] == v3 )
        goto LABEL_6;
      v4 = 0LL;
    }
    result = 3221225659LL;
LABEL_6:
    *a1 = v4;
    return result;
  }
  return 3221225485LL;
}
