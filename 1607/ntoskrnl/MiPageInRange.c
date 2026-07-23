/*
 * XREFs of MiPageInRange @ 0x140103ED0
 * Callers:
 *     MiActivePageClaimCandidate @ 0x1401037E0 (MiActivePageClaimCandidate.c)
 *     MiSessionWsMetaPage @ 0x140103DF0 (MiSessionWsMetaPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageInRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  int v7; // r10d

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v7 = 0;
  if ( v6 >= 0xFFFFF68000000000uLL )
  {
    while ( v6 <= 0xFFFFF6FFFFFFFFFFuLL && (a4 != 1 || ((v6 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL) )
    {
      if ( v6 >= a2 && v6 <= a3 )
      {
        LOBYTE(v5) = v7 != 0;
        return (unsigned int)(v5 + 1);
      }
      if ( v7 != 1 || a4 != 1 )
      {
        ++v7;
        a2 &= 0xFFFFFFFFFFFFF000uLL;
        v6 = (__int64)(v6 << 25) >> 16;
        if ( v6 >= 0xFFFFF68000000000uLL )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
