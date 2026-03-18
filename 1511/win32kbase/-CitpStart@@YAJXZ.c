/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C0068724
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0067DF4 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064EB0 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065340 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065E04 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0068854 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079454 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EA44 (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00E4E0C (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 */

__int64 CitpStart(void)
{
  int v0; // ebx
  struct _CIT_IMPACT_CONTEXT *v2; // rax
  const char *v3; // rdx
  struct _CIT_IMPACT_CONTEXT *v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // r8d
  unsigned __int64 v7; // rbx
  void *v8; // rdx
  union _LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-38h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( byte_1C0107111 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v2 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPool();
    v4 = v2;
    if ( v2 )
    {
      CitpContextInitialize(v2);
      v0 = CitpContextStart(v4);
      if ( v0 >= 0 )
      {
        v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        qword_1C01071A0 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
        qword_1C01071A8 = LocalTime.QuadPart;
        CitpTimeUpdate(v7);
        qword_1C0107180 = v4;
        v4 = 0LL;
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
          if ( byte_1C010716E )
          {
            CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v11, *((void **)qword_1C0107180 + 52));
            CitpSavedDataLoad(qword_1C0107180, v8, (const struct _CIT_SAVE_KEY *)v11);
          }
          CitpPostUpdateUseInfoLoad(qword_1C0107180);
          CitpUpdateBootStats(qword_1C0107180);
        }
        v0 = 0;
      }
      if ( v4 )
      {
        CitpContextCleanup(v4, v5, v6);
        Win32FreePool();
      }
    }
    else
    {
      v0 = -1073741670;
      CitpLogFailureWorker(-1073741670, v3, 0xA8u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v0;
}
