/*
 * XREFs of MiPrefetchJumpVad @ 0x1401E85C4
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePrefetchPriority @ 0x1400E4510 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x1401E828C (MiLeapPrefetch.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  int v5; // ecx
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 48);
  v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (v5 & 0x80000) == 0 )
  {
    result = v5 & 7;
    if ( (_DWORD)result != 1 )
    {
      if ( (v5 & 0x8000) != 0 )
      {
        if ( (((_DWORD)result - 3) & 0xFFFFFFFD) != 0 )
        {
          v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v9 > (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
            v9 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          while ( v8 < v9 )
          {
            v10 = MI_READ_PTE_LOCK_FREE(v8);
            v8 += 8LL;
            if ( v10 )
            {
              if ( (v10 & 1) != 0 )
                goto LABEL_10;
              if ( (v10 & 0x400) != 0 )
                break;
              if ( (v10 & 0x800) != 0 )
              {
LABEL_10:
                MiUpdatePrefetchPriority(a1, v4);
              }
              else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v10, v11, v12, v13) )
              {
                break;
              }
            }
            v4 += 4096LL;
          }
          v6 = (__int64)(v8 << 25) >> 16;
        }
      }
      else if ( (*(_BYTE *)(a2 + 67) & 1) == 0 )
      {
        return result;
      }
    }
  }
  result = MiLeapPrefetch((_QWORD *)a1, v6);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
