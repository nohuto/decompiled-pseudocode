/*
 * XREFs of MiCheckNodeChannelStandbyCount @ 0x1401F2A14
 * Callers:
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckNodeChannelStandbyCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r11
  int v4; // edx
  unsigned int v5; // r10d
  _QWORD *v6; // r9

  v3 = *(_QWORD *)(a1 + 48) + 2184LL * a2;
  if ( (*(_DWORD *)(v3 + 2136) & 1) != 0 )
  {
    v4 = a3 + 1;
  }
  else
  {
    v4 = MmNumberOfChannels;
    a3 = 0;
  }
  if ( a3 != v4 )
  {
LABEL_5:
    v5 = 0;
    v6 = (_QWORD *)(192LL * a3 + v3 + 1240);
    while ( !*v6 )
    {
      ++v5;
      v6 += 3;
      if ( v5 >= 8 )
      {
        if ( ++a3 != v4 )
          goto LABEL_5;
        break;
      }
    }
    if ( a3 != v4 )
      return 1LL;
  }
  return 0LL;
}
