/*
 * XREFs of MiPrefetchJumpVad @ 0x1401D6AD0
 * Callers:
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePrefetchPriority @ 0x140070C90 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  int v5; // ecx
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 48);
  v7 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (v5 & 0x80000) == 0 )
  {
    result = v5 & 7;
    if ( (_DWORD)result != 1 )
    {
      if ( (v5 & 0x8000) != 0 )
      {
        if ( (((_DWORD)result - 3) & 0xFFFFFFFD) != 0 )
        {
          v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v9 > (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
            v9 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          while ( v10 < v9 )
          {
            v11 = MI_READ_PTE_LOCK_FREE((__int64 *)v10);
            v10 += 8LL;
            if ( v11 )
            {
              if ( (v11 & 1) != 0 )
                goto LABEL_10;
              if ( (v11 & 0x400) != 0 )
                break;
              if ( (v11 & 0x800) != 0 )
              {
LABEL_10:
                MiUpdatePrefetchPriority(a1, v4, v11, a2);
              }
              else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v11) )
              {
                break;
              }
            }
            v4 += 4096LL;
          }
          v7 = (__int64)(v10 << 25) >> 16;
        }
      }
      else if ( (*(_BYTE *)(a2 + 67) & 1) == 0 )
      {
        return result;
      }
    }
  }
  result = MiLeapPrefetch((_QWORD *)a1, v7);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
