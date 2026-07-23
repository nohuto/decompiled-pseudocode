/*
 * XREFs of KiContinuePreviousModeUser @ 0x14002B108
 * Callers:
 *     KiContinueEx @ 0x14002AEF0 (KiContinueEx.c)
 * Callees:
 *     KeVerifyContextRecord @ 0x14002B21C (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x140153EF0 (KeContextToKframes.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     RtlpReadExtendedContext @ 0x1403F00B0 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1403F035C (RtlpSanitizeContextFlags.c)
 */

NTSTATUS __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3)
{
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // r12
  NTSTATUS result; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  int v12; // edx
  int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF

  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  ContextFlags = *(_DWORD *)(a1 + 48);
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v8 = ContextLength + 15LL;
      if ( v8 <= ContextLength )
        v8 = 0xFFFFFFFFFFFFFF0LL;
      v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = alloca(v9);
      v11 = alloca(v9);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, &ContextEx);
      if ( result >= 0 )
      {
        LOBYTE(v12) = 1;
        result = RtlpReadExtendedContext(v13, v12, (_DWORD)ContextEx, ContextFlags, a1, 0LL);
        if ( result >= 0 )
        {
          result = KeVerifyContextRecord(CurrentThread, &ContextFlags);
          if ( result >= 0 )
          {
            LOBYTE(v14) = 1;
            KeContextToKframes(a3, v4, (unsigned int)&ContextFlags, ContextFlags, v14);
            return 0;
          }
        }
      }
    }
  }
  return result;
}
