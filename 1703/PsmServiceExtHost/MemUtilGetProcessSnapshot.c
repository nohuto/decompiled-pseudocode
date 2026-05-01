/*
 * XREFs of MemUtilGetProcessSnapshot @ 0x1800039A0
 * Callers:
 *     MemUtilQueryProcessMetrics @ 0x18000382C (MemUtilQueryProcessMetrics.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall MemUtilGetProcessSnapshot(_QWORD *a1, int a2)
{
  ULONG v4; // edi
  SIZE_T v5; // rbx
  HANDLE v6; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  HANDLE v12; // rax
  _DWORD SystemInformation[4]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+30h] [rbp-18h]
  ULONG v15; // [rsp+38h] [rbp-10h]
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF

  memset_0(SystemInformation, 0, 0x20uLL);
  v4 = 8;
  SystemInformation[0] = 45;
  v5 = 9616LL;
  SystemInformation[2] = 8;
  ReturnLength = 9616;
  SystemInformation[1] = 1802856515;
  while ( 1 )
  {
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 0, v5);
    v9 = v8;
    if ( !v8 )
      break;
    memset_0(v8, 0, 0x70uLL);
    *v9 = 8;
    v9[1] = a2;
    v15 = ReturnLength;
    v14 = v9;
    v10 = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, &ReturnLength);
    if ( v10 >= 0 )
    {
      *a1 = v9;
      return 0;
    }
    if ( v10 != -1073741789 )
    {
      v4 = RtlNtStatusToDosError(v10);
      break;
    }
    v6 = GetProcessHeap();
    HeapFree(v6, 0, v9);
    v5 = ReturnLength;
  }
  if ( v9 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v9);
  }
  return v4;
}
