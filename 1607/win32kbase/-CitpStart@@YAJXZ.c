/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C005110C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C005100C (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0011AA0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F078 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F458 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F7EC (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F8AC (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0050378 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0051778 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00F6D48 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 CitpStart(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rax
  const char *v1; // rdx
  struct _CIT_IMPACT_CONTEXT *v2; // rdi
  int v3; // ebx
  unsigned __int64 v4; // rbx
  void *v6; // rdx
  union _LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-38h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_1C011E561 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v0 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPool();
    v2 = v0;
    if ( v0 )
    {
      CitpContextInitialize(v0);
      v3 = CitpContextStart(v2);
      if ( v3 >= 0 )
      {
        v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        qword_1C011E5F0 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
        qword_1C011E5F8 = LocalTime.QuadPart;
        CitpTimeUpdate(v4);
        qword_1C011E5D0 = v2;
        v2 = 0LL;
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
          if ( byte_1C011E5BD )
          {
            CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v9, *((void **)qword_1C011E5D0 + 52));
            CitpSavedDataLoad(qword_1C011E5D0, v6, (const struct _CIT_SAVE_KEY *)v9);
          }
          CitpPostUpdateUseInfoLoad(qword_1C011E5D0);
          CitpUpdateBootStats(qword_1C011E5D0);
        }
        v3 = 0;
      }
      if ( v2 )
      {
        CitpContextCleanup(v2);
        Win32FreePool();
      }
    }
    else
    {
      v3 = -1073741670;
      CitpLogFailureWorker(-1073741670, v1, 0xA8u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
