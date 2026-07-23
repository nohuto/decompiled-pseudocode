/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x1403CB4A0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkHiberNotCachedPages(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 *i; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r10
  ULONG_PTR v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  if ( (unsigned __int64)a2 <= a3 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      if ( a4 )
      {
        v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
        if ( !MiIsPfn((v7 >> 12) & 0xFFFFFFFFFLL) || (*(_BYTE *)(48LL * (_QWORD)v8 - 0x58000000000LL + 34) & 0x40) != 0 )
          continue;
        v9 = 512LL;
        if ( a4 > 1 )
        {
          v10 = a4 - 1;
          do
          {
            v9 <<= 9;
            --v10;
          }
          while ( v10 );
        }
      }
      else
      {
        v11 = *i;
        if ( (*i & 1) == 0 || (((v11 >> 4) & 1) != 0 || (v11 & 8) == 0) && ((v11 >> 4) & 1) == 0 )
          continue;
        v12 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)i);
        if ( !MiIsPfn(v12) )
          continue;
        v9 = 1LL;
      }
      PoSetHiberRange(0LL, 0x14000u, v8, v9, 0x636E6D4Du);
    }
  }
}
