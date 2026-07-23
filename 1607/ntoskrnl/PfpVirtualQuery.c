/*
 * XREFs of PfpVirtualQuery @ 0x140532B80
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  NTSTATUS result; // eax
  int v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+44h] [rbp-24h]
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  HANDLE Handle; // [rsp+58h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 24) != 32 )
    return -1073741306;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( (v4 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v4 + 32 > 0x7FFFFFFF0000LL || v4 + 32 < v4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v7, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
  if ( v7 != 1 )
    return -1073741811;
  v5 = 2;
  if ( (v8 & 1) != 0 && (v8 & 2) != 0 )
    return -1073741811;
  if ( (v8 & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( (v8 & 1) == 0 )
    v5 = (v8 & 2) != 0;
  result = MmQueryVirtualMemory(Handle, 0LL, 4, v9, v10, 0LL, v5);
  if ( result >= 0 )
    *a3 = 32;
  return result;
}
