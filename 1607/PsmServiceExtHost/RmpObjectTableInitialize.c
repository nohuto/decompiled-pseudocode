/*
 * XREFs of RmpObjectTableInitialize @ 0x18001E06C
 * Callers:
 *     RmpActivityHostAllocateModuleState @ 0x18001DD50 (RmpActivityHostAllocateModuleState.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 */

__int64 __fastcall RmpObjectTableInitialize(__int64 a1)
{
  unsigned int v1; // esi
  _BYTE *v2; // r14
  __int64 **v3; // r15
  char v5; // bp
  unsigned __int64 v6; // rdi
  struct _PEB *v7; // rcx
  __int64 *Heap; // r9
  __int64 *v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // r10
  __int64 *v15; // rcx
  __int64 *v17; // r12
  __int64 *v18; // r11
  __int64 v19; // rdx
  __int64 v20; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v2 = (_BYTE *)(a1 + 4);
  v3 = (__int64 **)(a1 + 8);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 4) = 0;
  RtlInitializeSRWLock(a1 + 16);
  if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)v2 >> 5)) )
  {
    v5 = -1;
    v6 = 2 * ((unsigned __int64)*(unsigned int *)v2 >> 5);
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = NtCurrentPeb();
      if ( (unsigned int)v6 < 4 )
        v6 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(v7->ProcessHeap, 0, 8LL * (unsigned int)v6);
      if ( Heap )
      {
        if ( (((_DWORD)v6 - 1) & (unsigned int)v6) != 0 )
        {
          do
          {
            ++v5;
            LODWORD(v6) = (unsigned int)v6 >> 1;
          }
          while ( (_DWORD)v6 );
          v6 = (unsigned int)(1 << v5);
        }
        v9 = Heap;
        v10 = 0LL;
        if ( (unsigned int)v6 > 0x4000000 )
          v6 = 0x4000000LL;
        v11 = a1 | 1;
        v12 = (8 * v6 + 7) >> 3;
        if ( Heap > &Heap[v6] )
          v12 = 0LL;
        if ( v12 )
        {
          do
          {
            ++v10;
            *v9++ = v11;
          }
          while ( v10 < v12 );
        }
        v13 = 0;
        v14 = -1LL << (*v2 & 0x1F);
        if ( (*(_DWORD *)v2 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v17 = *v3;
            while ( 1 )
            {
              v18 = (__int64 *)v17[v13];
              if ( ((unsigned __int8)v18 & 1) != 0 )
                break;
              v17[v13] = *v18;
              v20 = v14 & v18[1];
              v19 = (37
                   * (BYTE6(v20)
                    + 37
                    * (BYTE5(v20)
                     + 37
                     * (BYTE4(v20)
                      + 37
                      * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
                   + HIBYTE(v20)) & (unsigned int)(v6 - 1);
              *v18 = Heap[v19];
              Heap[v19] = (__int64)v18;
            }
            ++v13;
          }
          while ( v13 < *(_DWORD *)v2 >> 5 );
        }
        *(_DWORD *)v2 &= 0x1Fu;
        v15 = *v3;
        *(_DWORD *)v2 |= 32 * v6;
        *v3 = Heap;
        if ( v15 )
          RmpFreeHeapForHashTable(v15);
      }
      else if ( (*(_DWORD *)v2 & 0xFFFFFFE0) == 0 )
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v1;
}
