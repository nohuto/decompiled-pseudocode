/*
 * XREFs of MemUtilGetProcessSnapshot @ 0x1800070AC
 * Callers:
 *     MemUtilQueryProcessMetrics @ 0x180006F30 (MemUtilQueryProcessMetrics.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall MemUtilGetProcessSnapshot(_QWORD *a1, int a2)
{
  ULONG v4; // edi
  SIZE_T v5; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v9; // eax
  HANDLE v11; // rax
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
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    v8 = v7;
    if ( !v7 )
      break;
    memset_0(v7, 0, 0x70uLL);
    *v8 = 8;
    v8[1] = a2;
    v15 = ReturnLength;
    v14 = v8;
    v9 = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, &ReturnLength);
    if ( v9 >= 0 )
    {
      *a1 = v8;
      return 0;
    }
    if ( v9 != -1073741789 )
    {
      v4 = RtlNtStatusToDosError(v9);
      break;
    }
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v8);
    v5 = ReturnLength;
  }
  if ( v8 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v8);
  }
  return v4;
}
