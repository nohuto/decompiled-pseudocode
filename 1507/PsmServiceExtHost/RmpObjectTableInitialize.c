/*
 * XREFs of RmpObjectTableInitialize @ 0x18001A190
 * Callers:
 *     RmpActivityHostInitializeModule @ 0x18001A2B0 (RmpActivityHostInitializeModule.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeapForHashTable @ 0x180039AC0 (RmpFreeHeapForHashTable.c)
 */

__int64 __fastcall RmpObjectTableInitialize(__int64 a1)
{
  unsigned int v1; // esi
  _BYTE *v2; // r14
  __int64 **v3; // r15
  char v5; // bp
  unsigned __int64 v6; // rdi
  __int64 *Heap; // r9
  __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 *v14; // rcx
  __int64 *v16; // r12
  __int64 *v17; // r11
  __int64 v18; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h]

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
      if ( (unsigned int)v6 < 4 )
        v6 = 4LL;
      Heap = (__int64 *)RmpAllocateHeap(8LL * (unsigned int)v6);
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
        v8 = Heap;
        v9 = 0LL;
        if ( (unsigned int)v6 > 0x4000000 )
          v6 = 0x4000000LL;
        v10 = a1 | 1;
        v11 = (8 * v6 + 7) >> 3;
        if ( Heap > &Heap[v6] )
          v11 = 0LL;
        if ( v11 )
        {
          do
          {
            ++v9;
            *v8++ = v10;
          }
          while ( v9 < v11 );
        }
        v12 = 0LL;
        v13 = -1LL << (*v2 & 0x1F);
        if ( (*(_DWORD *)v2 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v16 = *v3;
            while ( 1 )
            {
              v17 = (__int64 *)v16[(unsigned int)v12];
              if ( ((unsigned __int8)v17 & 1) != 0 )
                break;
              v16[(unsigned int)v12] = *v17;
              v19 = v13 & v17[1];
              v18 = (37
                   * (BYTE6(v19)
                    + 37
                    * (BYTE5(v19)
                     + 37
                     * (BYTE4(v19)
                      + 37
                      * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                   + HIBYTE(v19)) & (unsigned int)(v6 - 1);
              *v17 = Heap[v18];
              Heap[v18] = (__int64)v17;
            }
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < *(_DWORD *)v2 >> 5 );
        }
        *(_DWORD *)v2 &= 0x1Fu;
        v14 = *v3;
        *(_DWORD *)v2 |= 32 * v6;
        *v3 = Heap;
        if ( v14 )
          RmpFreeHeapForHashTable(v14, 0LL, v12);
      }
      else if ( (*(_DWORD *)v2 & 0xFFFFFFE0) == 0 )
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v1;
}
