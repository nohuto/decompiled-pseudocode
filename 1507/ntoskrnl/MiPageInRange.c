/*
 * XREFs of MiPageInRange @ 0x1401205C0
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiActivePageClaimCandidate @ 0x14005CD70 (MiActivePageClaimCandidate.c)
 *     MiSessionWsMetaPage @ 0x140120468 (MiSessionWsMetaPage.c)
 *     MiSystemWsMetaPage @ 0x1401204D0 (MiSystemWsMetaPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageInRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v4; // r11d
  unsigned __int64 v5; // r10

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  while ( v5 >= 0xFFFFF68000000000uLL
       && v5 <= 0xFFFFF6FFFFFFFFFFuLL
       && (a4 != 1 || ((v5 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL) )
  {
    if ( v5 <= a3 && v5 >= a2 )
      return (unsigned int)(v4 != 0) + 1;
    if ( v4 == 1 && a4 == 1 )
      break;
    ++v4;
    v5 = (__int64)(v5 << 25) >> 16;
    a2 &= 0xFFFFFFFFFFFFF000uLL;
  }
  return 0LL;
}
