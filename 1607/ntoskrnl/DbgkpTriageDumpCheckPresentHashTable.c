/*
 * XREFs of DbgkpTriageDumpCheckPresentHashTable @ 0x1401B7CC0
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1401B7D40 (DbgkpTriageDumpSnapData.c)
 *     DbgkpTriageDumpIsMemoryBlockPresent @ 0x14061CA30 (DbgkpTriageDumpIsMemoryBlockPresent.c)
 * Callees:
 *     <none>
 */

char __fastcall DbgkpTriageDumpCheckPresentHashTable(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rax

  if ( a4 )
    *a4 = -1LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = (a2 >> 4) - 3571 * ((unsigned __int64)(((a2 >> 4) * (unsigned __int128)0x92D1795E69F4AC57uLL) >> 64) >> 11);
  if ( *(_QWORD *)(v4 + 8 * v5) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 8 * v5);
      if ( *(_QWORD *)v6 == a2 && (!a3 || *(_DWORD *)(v6 + 12) == a3) )
        break;
      v5 = (v5 + 1) & -(__int64)((unsigned __int64)(v5 + 1) < 0xDF3);
      if ( !*(_QWORD *)(v4 + 8 * v5) )
        goto LABEL_8;
    }
    if ( a4 )
      *a4 = v5;
    return 1;
  }
  else
  {
LABEL_8:
    if ( a4 )
      *a4 = v5;
    return 0;
  }
}
