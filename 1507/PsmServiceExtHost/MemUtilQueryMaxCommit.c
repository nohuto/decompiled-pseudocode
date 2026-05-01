/*
 * XREFs of MemUtilQueryMaxCommit @ 0x18001B188
 * Callers:
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001A574 (RmpGetResourceManagerRuntimeConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall MemUtilQueryMaxCommit(unsigned __int64 *a1)
{
  unsigned int *v2; // rbx
  int SystemInformation; // eax
  ULONG v4; // r8d
  unsigned __int64 v5; // rdi
  void *i; // rdx
  HANDLE ProcessHeap; // rax
  ULONG v8; // esi
  HANDLE v9; // rax
  LPVOID v10; // rax
  int v11; // eax
  unsigned int *v12; // rcx
  __int64 j; // rax
  ULONG v14; // edi
  HANDLE v15; // rax
  SIZE_T dwBytes[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v18[16]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0LL;
  SystemInformation = NtQuerySystemInformation(SystemBasicInformation, v18, 0x40u, 0LL);
  if ( SystemInformation < 0 )
  {
    return RtlNtStatusToDosError(SystemInformation);
  }
  else
  {
    v4 = 0;
    v5 = (unsigned __int64)v18[3] << 12;
    for ( i = 0LL; ; i = v10 )
    {
      v11 = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)144, i, v4, (PULONG)dwBytes);
      if ( v11 >= 0 )
        break;
      if ( v11 != -1073741820 )
      {
        v14 = RtlNtStatusToDosError(v11);
        goto LABEL_13;
      }
      if ( v2 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v2);
      }
      v8 = dwBytes[0];
      v9 = GetProcessHeap();
      v10 = HeapAlloc(v9, 0, v8);
      v2 = (unsigned int *)v10;
      if ( !v10 )
      {
        v14 = 8;
        goto LABEL_13;
      }
      v4 = v8;
    }
    if ( LODWORD(dwBytes[0]) )
    {
      v12 = v2;
      v5 += (unsigned __int64)v2[9] << 12;
      for ( j = *v2; (_DWORD)j; j = *v12 )
      {
        v12 = (unsigned int *)((char *)v12 + j);
        v5 += (unsigned __int64)v12[9] << 12;
      }
    }
    *a1 = v5;
    v14 = 0;
LABEL_13:
    if ( v2 )
    {
      v15 = GetProcessHeap();
      HeapFree(v15, 0, v2);
    }
  }
  return v14;
}
