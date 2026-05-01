/*
 * XREFs of RmpPolicyResizeScratchBuffers @ 0x1800053B0
 * Callers:
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpActivityHostAllocateAndInitialize @ 0x180005064 (RmpActivityHostAllocateAndInitialize.c)
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyResizeScratchBuffers(__int64 a1, unsigned int a2, int a3)
{
  ULONG v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  PVOID v15; // r15
  PVOID v16; // rax
  void *v17; // rbp
  void *v18; // r8
  void *v19; // r8
  ULONG *Heap; // rdi
  void *v21; // r8

  v5 = (a3 + 32) & 0xFFFFFFE0;
  if ( v5 > *(_DWORD *)(a1 + 16) )
  {
    Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5 >> 3);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v21 = *(void **)(a1 + 24);
    if ( v21 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 16), Heap, v5);
  }
  v6 = *(_DWORD *)(a1 + 32);
  if ( v6 <= a2 )
  {
    if ( a2 )
    {
      v10 = 4;
      if ( v6 > 4 )
        v10 = *(_DWORD *)(a1 + 32);
      while ( v10 < a2 )
      {
        v13 = v10;
        v10 = -1;
        v14 = 2 * v13;
        if ( v14 <= 0xFFFFFFFF )
          v10 = v14;
      }
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 32);
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 32);
    do
    {
      v8 = v7;
      v9 = 4;
      v7 >>= 1;
      if ( 2 * a2 > 4 )
        v9 = 2 * a2;
    }
    while ( v7 >= v9 );
    v10 = v8;
  }
  if ( v10 == v6 )
    return 0;
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10 << 6);
  v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 24LL * v10);
  v17 = v16;
  if ( v15 && v16 )
  {
    v18 = *(void **)a1;
    *(_QWORD *)a1 = v15;
    if ( v18 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    v19 = *(void **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v17;
    if ( v19 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
    *(_DWORD *)(a1 + 32) = v10;
    return 0;
  }
  v11 = *(_DWORD *)(a1 + 32) < a2 ? 0xC0000017 : 0;
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( v17 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  return v11;
}
