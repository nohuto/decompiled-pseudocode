/*
 * XREFs of KiContinuePreviousModeUser @ 0x1400F4474
 * Callers:
 *     KiContinueEx @ 0x1400CA74C (KiContinueEx.c)
 * Callees:
 *     KeVerifyContextRecord @ 0x1400F0E00 (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F275C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x14015DBA0 (KeContextToKframes.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     RtlpReadExtendedContext @ 0x1404FB260 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1404FBBBC (RtlpSanitizeContextFlags.c)
 */

int __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3)
{
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // r12
  int result; // eax
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
          result = KeVerifyContextRecord((__int64)CurrentThread, (__int64)&ContextFlags);
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
