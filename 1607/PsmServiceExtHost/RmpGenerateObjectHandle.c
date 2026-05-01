/*
 * XREFs of RmpGenerateObjectHandle @ 0x18001E6C4
 * Callers:
 *     RmpActivityHostAllocateAndInitialize @ 0x180005064 (RmpActivityHostAllocateAndInitialize.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18001E608 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800304C4 (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpGenerateObjectHandle(int a1, signed __int64 *a2)
{
  __int64 v3; // rbx
  signed __int64 v4; // rdi
  __int64 result; // rax
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a1;
  v4 = _InterlockedIncrement64((volatile signed __int64 *)&(&RmpNextHandleValues)[a1]);
  if ( (v4 & 0xF000000000000000uLL) != 0 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  result = 0x1000000000000000LL;
  *a2 = v4 | (v3 << 58) | 0x1000000000000000LL;
  return result;
}
