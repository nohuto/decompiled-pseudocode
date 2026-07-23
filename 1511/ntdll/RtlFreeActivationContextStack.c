/*
 * XREFs of RtlFreeActivationContextStack @ 0x180075FF0
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x180075FB0 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpFreeActivationContextStackFrame @ 0x1800761D8 (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(__int64 **BaseAddress)
{
  __int64 *v1; // rbx
  __int64 **v3; // rbx
  __int64 **v4; // rbp
  __int64 **v5; // r8
  __int64 *v6; // rax
  __int64 *v7; // rsi

  if ( BaseAddress )
  {
    v1 = *BaseAddress;
    if ( *BaseAddress )
    {
      do
      {
        v7 = (__int64 *)*v1;
        if ( (v1[2] & 1) != 0 )
          RtlReleaseActivationContext((PACTIVATION_CONTEXT)v1[1]);
        if ( (v1[2] & 8) != 0 )
          RtlpFreeActivationContextStackFrame(BaseAddress, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *BaseAddress = 0LL;
    v3 = (__int64 **)BaseAddress[1];
    if ( v3 != BaseAddress + 1 )
    {
      do
      {
        v4 = (__int64 **)*v3;
        v5 = v3 - 1;
        v6 = v3[1];
        if ( (__int64 **)(*v3)[1] != v3 || (__int64 **)*v6 != v3 )
          __fastfail(3u);
        *v6 = (__int64)v4;
        v4[1] = v6;
        v3 = v4;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
      while ( v4 != BaseAddress + 1 );
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
}
