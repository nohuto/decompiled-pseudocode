/*
 * XREFs of RtlAllocateHandle @ 0x1800526C0
 * Callers:
 *     RtlpInsertStringAtom @ 0x18005262C (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
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
  unsigned int v13; // esi
  __int64 v14; // r14
  void *ProcessHeap; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 *v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v18 = 0LL;
  v2 = (unsigned __int64 *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v11 = *(_DWORD *)(a1 + 12);
      if ( v11 <= *(_DWORD *)a1 )
      {
        v12 = *(_DWORD *)(a1 + 4);
        v13 = v11 * v12;
        v14 = v11 * v12 + 8 * v12;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v16 = *(_QWORD *)(a1 + 24)
            ? RtlReAllocateHeap((__int64)ProcessHeap)
            : RtlAllocateHeap((__int64)ProcessHeap, 8u, v13 + 8 * v12);
        v19 = v16;
        if ( v16 )
        {
          *(_DWORD *)(a1 + 12) += 8;
          *(_QWORD *)(a1 + 24) = v16;
          v9 = v16 + v13;
          v18 = (unsigned __int64 *)v9;
          *(_QWORD *)(a1 + 32) = v14 + v16;
LABEL_12:
          v10 = v2;
          while ( v9 < *(_QWORD *)(a1 + 32) )
          {
            *v10 = v9;
            v10 = v18;
            v9 = (unsigned __int64)v18 + *(unsigned int *)(a1 + 4);
            v18 = (unsigned __int64 *)v9;
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
        v19 = 0LL;
        v20 = v7;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v19, 0LL, &v20, 0x2000, 4) < 0 )
          return 0LL;
        v8 = v19;
        *(_QWORD *)(a1 + 24) = v19;
        *(_QWORD *)(a1 + 32) = v8;
        *(_QWORD *)(a1 + 40) = v20 + v8;
      }
      v18 = *(unsigned __int64 **)(a1 + 32);
      if ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 40) )
      {
        v17 = 4096LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v17, 4096, 4) >= 0 )
        {
          v9 = (unsigned __int64)v18;
          *(_QWORD *)(a1 + 32) = (char *)v18 + v17;
          goto LABEL_12;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = (unsigned __int64 *)*v2;
  v18 = v5;
  *v2 = *v5;
  *v5 = 0LL;
  if ( a2 )
    *a2 = ((__int64)v18 - *(_QWORD *)(a1 + 24)) / *(unsigned int *)(a1 + 4);
  return v18;
}
