/*
 * XREFs of PfpRpIsRehashNeeded @ 0x1400ED6A4
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x1404F61C0 (PfpRpFileKeyUpdate.c)
 *     PfpRpRehashIfNeeded @ 0x1404F6714 (PfpRpRehashIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpIsRehashNeeded(_DWORD *a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax

  if ( *a1 < (unsigned int)(2 * (a1[1] >> 5)) )
    return 0LL;
  v3 = 2 * ((unsigned __int64)(unsigned int)a1[1] >> 5);
  if ( v3 > 0xFFFFFFFF )
    return 0LL;
  if ( !(_DWORD)v3 )
    LODWORD(v3) = 64;
  *a2 = v3;
  return 1LL;
}
