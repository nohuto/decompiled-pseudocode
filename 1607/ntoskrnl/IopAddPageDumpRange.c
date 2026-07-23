/*
 * XREFs of IopAddPageDumpRange @ 0x1401C6AFC
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1401C7004 (IopDumpCallAddPagesCallbacks.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IoSetDumpRange @ 0x1401C61F4 (IoSetDumpRange.c)
 */

__int64 __fastcall IopAddPageDumpRange(__int64 a1, char *a2)
{
  int v4; // r9d
  int v5; // eax
  __int64 result; // rax
  char v7; // si
  int v8; // ecx
  unsigned __int64 v9; // r8
  char *v10; // rdx
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, 0x30uLL);
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8) & 0xFF0;
  *(_DWORD *)(a1 + 8) ^= v4;
  v5 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v5 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    *(_DWORD *)(a1 + 8) = v5 & 0x7FFFFFFF;
  }
  v8 = *(_DWORD *)(a1 + 8);
  if ( ((v8 - 1) & v8) != 0 )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 24);
  if ( !v9 )
    return 0LL;
  if ( (v8 & 1) == 0 )
    v4 |= 2u;
  v10 = *(char **)(a1 + 16);
  v12[3] = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v11[0] = *(_QWORD *)(v12[3] + 48LL);
  v11[1] = v12[3] + 56LL;
  v12[2] = v11;
  result = IoSetDumpRange((__int64)v12, v10, v9, v4);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v7;
  }
  return result;
}
