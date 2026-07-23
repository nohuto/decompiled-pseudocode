/*
 * XREFs of MmInitializeMemoryLimits @ 0x1407AB404
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x1407AB6F0 (IopInitializeResourceMap.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MmInitializeMemoryLimits(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rax
  unsigned int v5; // ebp
  _DWORD *result; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rax
  char *PoolWithTag; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  v5 = 0;
  while ( v4 != v2 )
  {
    v4 = (_QWORD *)*v4;
    ++v5;
  }
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v5 - 1 + 2LL), 0x6C4D6D4Du);
  v7 = result;
  if ( result )
  {
    *result = v5;
    v8 = 0;
    v9 = (_QWORD *)*v2;
    v10 = 0LL;
    v11 = -1LL;
    if ( (_QWORD *)*v2 == v2 )
      goto LABEL_18;
    do
    {
      v12 = *((int *)v9 + 4);
      if ( (int)v12 < 35 && *(_BYTE *)(v12 + a2) )
      {
        v15 = v9[4];
        v16 = v9[3];
        v10 += v15;
        if ( v16 == v11 )
        {
          v7[2 * v8 + 1] += v15;
          v11 += v9[4];
        }
        else
        {
          v17 = 2LL * v8++;
          v7[v17 + 2] = v16;
          v18 = v9[4];
          v7[v17 + 3] = v18;
          v11 = v18 + v16;
        }
      }
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != v2 );
    if ( !v8 )
    {
LABEL_18:
      v7[2] = 0LL;
      v7[3] = 0LL;
    }
    else if ( v5 > v8 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v8 - 1 + 2LL), 0x6C4D6D4Du);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag + 16, v7 + 2, 16LL * v8);
        ExFreePoolWithTag(v7, 0);
        v7 = v14;
      }
    }
    *(_DWORD *)v7 = v8;
    result = v7;
    v7[1] = v10;
  }
  return result;
}
