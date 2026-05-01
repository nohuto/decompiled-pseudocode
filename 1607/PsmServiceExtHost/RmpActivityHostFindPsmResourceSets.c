/*
 * XREFs of RmpActivityHostFindPsmResourceSets @ 0x18002F144
 * Callers:
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18002CA88 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180018C9C (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostFindPsmResourceSets(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rbx
  PVOID P; // [rsp+30h] [rbp-258h] BYREF
  wchar_t Destination[280]; // [rsp+40h] [rbp-248h] BYREF

  v4 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  RmpPsmAppInstanceIdInitializeFromCStr(
    Destination,
    (wchar_t *)a2,
    (void *)(a2 + 464),
    *(_DWORD *)(a2 + 532),
    *(_DWORD *)(a2 + 536),
    *(_QWORD *)(a2 + 544));
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(
              a1,
              0,
              (unsigned __int8 *)Destination,
              (volatile signed __int32 **)&P) >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v5 = (volatile signed __int32 *)P;
    if ( *((int *)P + 5) >= 0 )
      v4 = *((_QWORD *)P + 76);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpObjectRelease(v5);
  }
  return v4;
}
