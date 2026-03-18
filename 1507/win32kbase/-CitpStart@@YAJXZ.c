/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C0016F8C
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C007A378 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C00170BC (-CitpIsInteractiveSession@@YAEXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0052980 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0071164 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079728 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079924 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EC7C (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0083390 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00E3400 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E37A8 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 CitpStart(void)
{
  int v0; // ebx
  struct _CIT_IMPACT_CONTEXT *v2; // rax
  const char *v3; // rdx
  struct _CIT_IMPACT_CONTEXT *v4; // rdi
  unsigned __int64 v5; // rbx
  void *v6; // rdx
  union _LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-38h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_1C0101F81 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v2 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPool(784LL, 1231254357LL);
    v4 = v2;
    if ( v2 )
    {
      CitpContextInitialize(v2);
      v0 = CitpContextStart(v4);
      if ( v0 >= 0 )
      {
        v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        qword_1C0102000 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
        qword_1C0102008 = LocalTime.QuadPart;
        CitpTimeUpdate(v5);
        qword_1C0101FE0 = v4;
        v4 = 0LL;
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
          CitpPostUpdateUseInfoLoad(qword_1C0101FE0);
          CitpUpdateBootStats(qword_1C0101FE0);
          if ( BYTE2(dword_1C0101FD0) )
          {
            CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v9, *((void **)qword_1C0101FE0 + 52));
            CitpSavedDataLoad(qword_1C0101FE0, v6, (const struct _CIT_SAVE_KEY *)v9);
          }
        }
        v0 = 0;
      }
      if ( v4 )
      {
        CitpContextCleanup(v4);
        Win32FreePool(v4);
      }
    }
    else
    {
      v0 = -1073741670;
      CitpLogFailureWorker(-1073741670, v3, 0xA9u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v0;
}
