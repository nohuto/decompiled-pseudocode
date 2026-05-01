/*
 * XREFs of MemUtilQueryMaxCommit @ 0x18000AA20
 * Callers:
 *     RmpPolicyGetCurrentUsageLimits @ 0x180006F48 (RmpPolicyGetCurrentUsageLimits.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

ULONG __fastcall MemUtilQueryMaxCommit(unsigned __int64 *a1)
{
  ULONG v1; // ebp
  unsigned int *v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // rsi
  int v6; // eax
  HANDLE ProcessHeap; // rax
  ULONG v8; // edi
  HANDLE v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rcx
  __int64 i; // rax
  HANDLE v13; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE SystemInformation[12]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-5Ch]

  v1 = 0;
  v3 = 0LL;
  v4 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( v4 < 0 )
    return RtlNtStatusToDosError(v4);
  v5 = (unsigned __int64)v17 << 12;
  v6 = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)144, 0LL, 0, ReturnLength);
  if ( v6 >= 0 )
  {
LABEL_8:
    if ( ReturnLength[0] )
    {
      v11 = v3;
      v5 += (unsigned __int64)v3[9] << 12;
      for ( i = *v3; (_DWORD)i; i = *v11 )
      {
        v11 = (unsigned int *)((char *)v11 + i);
        v5 += (unsigned __int64)v11[9] << 12;
      }
    }
    *a1 = v5;
  }
  else
  {
    while ( v6 == -1073741820 )
    {
      if ( v3 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v3);
      }
      v8 = ReturnLength[0];
      v9 = GetProcessHeap();
      v10 = (unsigned int *)HeapAlloc(v9, 0, v8);
      v3 = v10;
      if ( !v10 )
        return 8;
      v6 = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)144, v10, v8, ReturnLength);
      if ( v6 >= 0 )
        goto LABEL_8;
    }
    v1 = RtlNtStatusToDosError(v6);
  }
  if ( v3 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v3);
  }
  return v1;
}
