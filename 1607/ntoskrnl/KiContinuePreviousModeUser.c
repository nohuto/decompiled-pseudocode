/*
 * XREFs of KiContinuePreviousModeUser @ 0x1400F6624
 * Callers:
 *     KiContinueEx @ 0x1400CC8AC (KiContinueEx.c)
 * Callees:
 *     KeVerifyContextRecord @ 0x1400F2FB0 (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F490C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x14015D630 (KeContextToKframes.c)
 *     __chkstk @ 0x140167650 (__chkstk.c)
 *     RtlpReadExtendedContext @ 0x140517E70 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1405187CC (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3)
{
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // r12
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  int v12; // edx
  int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-10h]
  unsigned int v15; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp+4h]
  __int64 v17; // [rsp+38h] [rbp+8h] BYREF

  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  v15 = *(_DWORD *)(a1 + 48);
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&v15, a2);
  if ( (int)result >= 0 )
  {
    result = RtlGetExtendedContextLength(v15);
    if ( (int)result >= 0 )
    {
      v8 = v16 + 15LL;
      if ( v8 <= v16 )
        v8 = 0xFFFFFFFFFFFFFF0LL;
      v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = alloca(v9);
      v11 = alloca(v9);
      result = RtlInitializeExtendedContext((__int64)&v15, v15, &v17);
      if ( (int)result >= 0 )
      {
        LOBYTE(v12) = 1;
        result = RtlpReadExtendedContext(v13, v12, v17, v15, a1, 0LL);
        if ( (int)result >= 0 )
        {
          result = KeVerifyContextRecord((__int64)CurrentThread, (__int64)&v15);
          if ( (int)result >= 0 )
          {
            LOBYTE(v14) = 1;
            KeContextToKframes(a3, v4, (unsigned int)&v15, v15, v14);
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
