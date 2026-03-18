/*
 * XREFs of IopAddPageDumpRange @ 0x1401F41F4
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1401F465C (IopDumpCallAddPagesCallbacks.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     IoSetDumpRange @ 0x1401F3904 (IoSetDumpRange.c)
 */

__int64 __fastcall IopAddPageDumpRange(__int64 a1, char *a2)
{
  signed int v4; // eax
  unsigned int v5; // edi
  char v7; // bp
  int v8; // ecx
  unsigned __int64 v9; // r8
  char *v10; // rdx
  __int64 v11; // r15
  int v12; // r12d
  int v13; // r13d
  unsigned int v14; // r14d
  int i; // ebx
  unsigned __int64 v16; // r8
  char *v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  _QWORD v20[6]; // [rsp+30h] [rbp-58h] BYREF

  memset(v20, 0, 40);
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8) & 0xFFFFFF0F;
  v5 = (*(_DWORD *)(a1 + 8) >> 4) & 0xF;
  *(_DWORD *)(a1 + 8) = v4;
  if ( (v4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v4 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    *(_DWORD *)(a1 + 8) = v4 & 0x7FFFFFFF;
  }
  v8 = *(_DWORD *)(a1 + 8);
  if ( ((v8 - 1) & v8) != 0 )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 24);
  if ( !v9 )
    return 0LL;
  v10 = *(char **)(a1 + 16);
  v11 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v12 = 2 * ((v8 & 1) == 0);
  v18 = *(_QWORD *)(v11 + 48);
  v19 = v11 + 56;
  v20[2] = &v18;
  v13 = IoSetDumpRange((__int64)v20, v10, v9, v12);
  if ( v13 >= 0 )
  {
    if ( a2 )
      *a2 = v7;
  }
  v14 = 56;
  for ( i = (((unsigned __int64)(*(_QWORD *)(v11 + 48) + 7LL) >> 3) + 7) & 0xFFFFFFF8; v5; v5 >>= 1 )
  {
    v14 += i;
    if ( (v5 & 1) != 0 )
    {
      if ( v14 + i > (unsigned __int64)(*(_QWORD *)(v11 + 32) - 0x2000LL) )
        return (unsigned int)v13;
      v16 = *(_QWORD *)(a1 + 24);
      v17 = *(char **)(a1 + 16);
      v19 = v11 + v14;
      IoSetDumpRange((__int64)v20, v17, v16, v12);
    }
  }
  return (unsigned int)v13;
}
