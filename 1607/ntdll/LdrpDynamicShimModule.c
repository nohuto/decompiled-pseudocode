/*
 * XREFs of LdrpDynamicShimModule @ 0x18002D724
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x18007DED8 (LdrpSendShimEngineInitialNotifications.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D21A0 (LdrpGetProcApphelpCheckModule.c)
 */

__int64 __fastcall LdrpDynamicShimModule(_QWORD *a1)
{
  int v1; // esi
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // r8
  char v6; // al
  _WORD *i; // rdi
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned __int8 (__fastcall *v11)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_18014F660;
  v3 = 0;
  if ( dword_18014F660 && g_pShimmedModuleList )
  {
    dword_18014F660 = 0;
    v3 = LdrpGetProcApphelpCheckModule(&v11);
    if ( v3 >= 0 )
    {
      for ( i = g_pShimmedModuleList; *i; i += v8 + 1 )
      {
        LOBYTE(v5) = 1;
        if ( !v11(i, 0LL, v5) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v8 = -1LL;
        do
          ++v8;
        while ( i[v8] );
      }
      v9 = MEMORY[0x7FFE0330];
      v10 = __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&LdrpDllNotificationLock);
      if ( LdrInitState < 3 && (*(_DWORD *)(*a1 - 56LL) & 0x800) == 0 )
        LdrpSendShimEngineInitialNotifications(a1, v10 ^ v9);
      RtlLeaveCriticalSection(&LdrpDllNotificationLock);
    }
    else
    {
      v6 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2731,
          (unsigned int)"LdrpDynamicShimModule",
          0,
          (__int64)"Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v3);
        v6 = LdrpDebugFlags;
      }
      if ( (v6 & 0x10) != 0 )
        __debugbreak();
      v3 = 0;
    }
  }
LABEL_3:
  if ( g_pShimmedModuleList && v1 == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
    g_pShimmedModuleList = 0LL;
    g_pShimmedModuleListLength = 0LL;
  }
  result = (unsigned int)v3;
  dword_18014F660 = v1;
  return result;
}
