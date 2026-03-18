/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x14039F7E0
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkHiberNotCachedPages(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 *i; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r10
  ULONG_PTR v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax

  if ( (unsigned __int64)a2 <= a3 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      if ( a4 )
      {
        v7 = MI_READ_PTE_LOCK_FREE(i);
        if ( !MI_IS_PFN((v7 >> 12) & 0xFFFFFFFFFLL)
          || (*(_BYTE *)(48LL * (_QWORD)v8 - 0x58000000000LL + 34) & 0x40) != 0 )
        {
          continue;
        }
        v9 = 512LL;
      }
      else
      {
        v10 = *i;
        if ( (*i & 1) == 0 || (((v10 >> 4) & 1) != 0 || (v10 & 8) == 0) && ((v10 >> 4) & 1) == 0 )
          continue;
        v11 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)i);
        if ( !MI_IS_PFN(v11) )
          continue;
        v9 = 1LL;
      }
      PoSetHiberRange(0LL, 0x14000u, v8, v9, 0x636E6D4Du);
    }
  }
}
