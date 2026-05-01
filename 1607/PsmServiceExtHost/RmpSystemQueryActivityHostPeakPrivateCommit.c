/*
 * XREFs of RmpSystemQueryActivityHostPeakPrivateCommit @ 0x180037B8C
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RmpSystemQueryActivityHostPeakPrivateCommit(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  NTSTATUS result; // eax
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  _BYTE JobInformation[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 48);
  if ( !v4 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, _QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 72LL) + 40LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
               a1 + 56,
               a1 + 520,
               *(unsigned int *)(a1 + 588),
               *(_DWORD *)(a1 + 592),
               *(_QWORD *)(a1 + 24),
               &v7);
    if ( result < 0 )
      return result;
    v6 = v7;
    goto LABEL_8;
  }
  if ( v4 != 1 )
    return -1073741585;
  result = NtQueryInformationJobObject(*(HANDLE *)(a1 + 736), MaxJobObjectInfoClass|0x10, JobInformation, 0x10u, 0LL);
  if ( result >= 0 )
  {
    v6 = v9;
LABEL_8:
    *a2 = v6;
    return 0;
  }
  return result;
}
