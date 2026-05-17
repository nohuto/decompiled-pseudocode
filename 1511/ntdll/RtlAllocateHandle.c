/*
 * XREFs of RtlAllocateHandle @ 0x180044190
 * Callers:
 *     RtlpInsertStringAtom @ 0x1800440FC (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180023CF0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 */

unsigned __int64 *__fastcall RtlAllocateHandle(__int64 a1, _DWORD *a2)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // r14
  void *ProcessHeap; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 *v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v19 = 0LL;
  v2 = (unsigned __int64 *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v11 = *(_DWORD *)(a1 + 12);
      if ( v11 <= *(_DWORD *)a1 )
      {
        v12 = *(_DWORD *)(a1 + 4);
        v13 = *(_QWORD *)(a1 + 24);
        v14 = v11 * v12;
        v15 = v11 * v12 + 8 * v12;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v17 = v13
            ? RtlReAllocateHeap((__int64)ProcessHeap, 8u, v13, (unsigned int)v15)
            : RtlAllocateHeap((__int64)ProcessHeap, 8u, v14 + 8 * v12);
        v20 = v17;
        if ( v17 )
        {
          *(_DWORD *)(a1 + 12) += 8;
          *(_QWORD *)(a1 + 24) = v17;
          v9 = v17 + v14;
          v19 = (unsigned __int64 *)v9;
          *(_QWORD *)(a1 + 32) = v15 + v17;
LABEL_12:
          v10 = v2;
          while ( v9 < *(_QWORD *)(a1 + 32) )
          {
            *v10 = v9;
            v10 = v19;
            v9 = (unsigned __int64)v19 + *(unsigned int *)(a1 + 4);
            v19 = (unsigned __int64 *)v9;
          }
          goto LABEL_2;
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v7 = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
        v20 = 0LL;
        v21 = v7;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v20, 0LL, &v21, 0x2000, 4) < 0 )
          return 0LL;
        v8 = v20;
        *(_QWORD *)(a1 + 24) = v20;
        *(_QWORD *)(a1 + 32) = v8;
        *(_QWORD *)(a1 + 40) = v21 + v8;
      }
      v19 = *(unsigned __int64 **)(a1 + 32);
      if ( (unsigned __int64)v19 < *(_QWORD *)(a1 + 40) )
      {
        v18 = 4096LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v19, 0LL, &v18, 4096, 4) >= 0 )
        {
          v9 = (unsigned __int64)v19;
          *(_QWORD *)(a1 + 32) = (char *)v19 + v18;
          goto LABEL_12;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = (unsigned __int64 *)*v2;
  v19 = v5;
  *v2 = *v5;
  *v5 = 0LL;
  if ( a2 )
    *a2 = ((__int64)v19 - *(_QWORD *)(a1 + 24)) / *(unsigned int *)(a1 + 4);
  return v19;
}
