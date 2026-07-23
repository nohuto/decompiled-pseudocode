/*
 * XREFs of MiCanMergeTbFlushEntryBackwards @ 0x1400E4658
 * Callers:
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCanMergeTbFlushEntryBackwards(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  _BOOL8 result; // rax
  unsigned __int64 v7; // rax

  v4 = *(_DWORD *)(a1 + 12);
  result = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v4 - 1) + 24);
    if ( ((v5 >> 10) & 3) == a4 && (v5 & 0xFFFFFFFFFFFFF000uLL) == a2 + a3 * (4096LL << (9 * (unsigned __int8)a4)) )
    {
      v7 = v5 & 0x3FF;
      if ( v7 + a3 > v7 && v7 + a3 <= 0x3FF )
        return 1;
    }
  }
  return result;
}
