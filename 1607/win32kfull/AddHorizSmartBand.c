/*
 * XREFs of AddHorizSmartBand @ 0x1C02DFEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AddHorizSmartBand(int a1, int a2)
{
  __int16 v2; // r9
  int v3; // edx
  unsigned __int64 v4; // r10
  __int64 v5; // r8
  _DWORD *i; // rcx
  __int16 v7; // ax

  v2 = a1;
  if ( a1 >= dword_1C0329308 && a1 <= dword_1C032930C )
  {
    if ( a2 < dword_1C0329320 || a2 >= dword_1C032931C )
      return 0LL;
    v3 = a2 - dword_1C0329320;
    v4 = *(_QWORD *)(qword_1C0329360 + 8LL * v3);
    v5 = *(_QWORD *)(qword_1C0329368 + 8LL * v3);
    *(_QWORD *)(qword_1C0329368 + 8LL * v3) = v5 + 4;
    if ( (unsigned __int64)(v5 + 4) <= *(_QWORD *)(qword_1C0329370 + 8LL * v3) )
    {
      for ( i = (_DWORD *)(v5 - 4); (unsigned __int64)i >= v4 && *(__int16 *)i > v2; --i )
      {
        *(_DWORD *)v5 = *i;
        v5 -= 4LL;
      }
      v7 = word_1C0329410;
      *(_WORD *)v5 = v2;
      *(_WORD *)(v5 + 2) = v7;
      return 0LL;
    }
  }
  return 4866LL;
}
