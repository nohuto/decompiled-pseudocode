/*
 * XREFs of EtwpUpdateSchematizedFilterData @ 0x1406A9454
 * Callers:
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateSchematizedFilterData(__int64 a1, char a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  void *v8; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rsi
  unsigned int v11; // eax

  v4 = 0;
  if ( a4 )
  {
    v8 = *(void **)(a1 + 64);
    if ( !v8 )
      return v4;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 8) < 0x18u )
      return (unsigned int)-1073741811;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a3 + 8), 0x46777445u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memmove(PoolWithTag, *(const void **)a3, *(unsigned int *)(a3 + 8));
    v11 = *(_DWORD *)(a3 + 8);
    v10[1] = 1LL << a2;
    v10[2] = v11;
    v8 = *(void **)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v10;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v4;
}
