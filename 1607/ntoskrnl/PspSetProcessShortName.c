/*
 * XREFs of PspSetProcessShortName @ 0x1404B5CF8
 * Callers:
 *     PspInitializeFullProcessImageName @ 0x1404B5B34 (PspInitializeFullProcessImageName.c)
 *     PspSetMinimalProcessName @ 0x140681BD0 (PspSetMinimalProcessName.c)
 * Callees:
 *     <none>
 */

char __fastcall PspSetProcessShortName(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  _WORD *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = *((_QWORD *)a2 + 1);
  v3 = a1 + 1104;
  v4 = (_WORD *)(v2 + *a2);
  v5 = 0LL;
  if ( v2 )
  {
    if ( (unsigned __int64)v4 > v2 )
    {
      while ( *--v4 != 92 )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned __int64)v4 <= v2 )
          goto LABEL_7;
      }
      ++v4;
LABEL_7:
      if ( (unsigned int)v5 >= 0xF )
        v5 = 14LL;
    }
    v5 += v3;
    v6 = 0LL;
    v7 = v5 - v3;
    if ( v3 > v5 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        LOBYTE(v5) = *(_BYTE *)v4;
        ++v6;
        *(_BYTE *)v3++ = *(_BYTE *)v4++;
      }
      while ( v6 < v7 );
    }
  }
  *(_BYTE *)v3 = 0;
  return v5;
}
