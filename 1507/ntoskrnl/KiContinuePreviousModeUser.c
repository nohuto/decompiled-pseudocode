/*
 * XREFs of KiContinuePreviousModeUser @ 0x140020448
 * Callers:
 *     KiContinueEx @ 0x140020234 (KiContinueEx.c)
 * Callees:
 *     KeVerifyContextRecord @ 0x14002055C (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002073C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x140182880 (KeContextToKframes.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     RtlpReadExtendedContext @ 0x14045047C (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140450724 (RtlpSanitizeContextFlags.c)
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
  unsigned int v16; // [rsp+34h] [rbp+4h] BYREF
  __int64 v17; // [rsp+38h] [rbp+8h] BYREF

  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  v15 = *(_DWORD *)(a1 + 48);
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&v15, a2);
  if ( (int)result >= 0 )
  {
    result = RtlGetExtendedContextLength(v15, &v16);
    if ( (int)result >= 0 )
    {
      v8 = v16 + 15LL;
      if ( v8 <= v16 )
        v8 = 0xFFFFFFFFFFFFFF0LL;
      v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = alloca(v9);
      v11 = alloca(v9);
      result = RtlInitializeExtendedContext(&v15, v15, &v17);
      if ( (int)result >= 0 )
      {
        LOBYTE(v12) = 1;
        result = RtlpReadExtendedContext(v13, v12, v17, v15, a1, 0LL);
        if ( (int)result >= 0 )
        {
          result = KeVerifyContextRecord(CurrentThread, &v15);
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
