/*
 * XREFs of RmpPolicyScratchResizeIntelligently @ 0x180009D00
 * Callers:
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     RmpActivityHostAllocateAndInitialize @ 0x180009B58 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 */

__int64 __fastcall RmpPolicyScratchResizeIntelligently(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  void *Heap; // r15
  __int64 v14; // rax
  void *v15; // rbp
  void *v16; // rcx
  void *v17; // rcx

  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 <= a2 )
  {
    if ( a2 )
    {
      v8 = 4;
      if ( v4 > 4 )
        v8 = v4;
      while ( v8 < a2 )
      {
        v11 = v8;
        v8 = -1;
        v12 = 2 * v11;
        if ( v12 <= 0xFFFFFFFF )
          v8 = v12;
      }
    }
    else
    {
      v8 = v4;
    }
  }
  else
  {
    v5 = v4;
    do
    {
      v6 = v5;
      v7 = 4;
      v5 >>= 1;
      if ( 2 * a2 > 4 )
        v7 = 2 * a2;
    }
    while ( v5 >= v7 );
    v8 = v6;
  }
  if ( v8 == v4 )
    return 0;
  Heap = (void *)RmpAllocateHeap(48LL * v8);
  v14 = RmpAllocateHeap(8LL * v8);
  v15 = (void *)v14;
  if ( Heap && v14 )
  {
    v16 = *(void **)a1;
    *(_QWORD *)a1 = Heap;
    if ( v16 )
      RmpFreeHeap(v16);
    v17 = *(void **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v15;
    if ( v17 )
      RmpFreeHeap(v17);
    *(_DWORD *)(a1 + 16) = v8;
    return 0;
  }
  v9 = *(_DWORD *)(a1 + 16) < a2 ? 0xC0000017 : 0;
  if ( Heap )
    RmpFreeHeap(Heap);
  if ( v15 )
    RmpFreeHeap(v15);
  return v9;
}
