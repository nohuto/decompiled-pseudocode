/*
 * XREFs of IopRemovePageDumpRange @ 0x1401C76A0
 * Callers:
 *     IopDumpCallRemovePagesCallbacks @ 0x1401C7128 (IopDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IoFreeDumpRange @ 0x1401C5DF0 (IoFreeDumpRange.c)
 */

__int64 __fastcall IopRemovePageDumpRange(__int64 a1, char *a2)
{
  int v4; // eax
  __int64 result; // rax
  char v6; // si
  int v7; // ecx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, 0x30uLL);
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( (v4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v4 >= 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    *(_DWORD *)(a1 + 8) = v4 & 0x7FFFFFFF;
  }
  v7 = *(_DWORD *)(a1 + 8);
  if ( ((v7 - 1) & v7) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 24);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v7 & 1) != 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 2;
    v9 >>= 12;
  }
  v11 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v12[0] = *(_QWORD *)(v11 + 48);
  v12[1] = v11 + 56;
  v13[2] = v12;
  result = IoFreeDumpRange((__int64)v13, (char *)v9, v8, v10);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}
