/*
 * XREFs of RtlFreeActivationContextStack @ 0x180077870
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x180077830 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180077A58 (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 **v3; // rbx
  __int64 **v4; // rbp
  unsigned __int64 v5; // r8
  __int64 *v6; // rax
  __int64 *v7; // rsi

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      do
      {
        v7 = (__int64 *)*v1;
        if ( (v1[2] & 1) != 0 )
          RtlReleaseActivationContext((volatile signed __int32 *)v1[1]);
        if ( (v1[2] & 8) != 0 )
          RtlpFreeActivationContextStackFrame(a1, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *a1 = 0LL;
    v3 = (__int64 **)a1[1];
    if ( v3 != a1 + 1 )
    {
      do
      {
        v4 = (__int64 **)*v3;
        v5 = (unsigned __int64)(v3 - 1);
        v6 = v3[1];
        if ( (__int64 **)(*v3)[1] != v3 || (__int64 **)*v6 != v3 )
          __fastfail(3u);
        *v6 = (__int64)v4;
        v4[1] = v6;
        v3 = v4;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
      }
      while ( v4 != a1 + 1 );
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  }
}
