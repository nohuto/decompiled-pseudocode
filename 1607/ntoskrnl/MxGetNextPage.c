/*
 * XREFs of MxGetNextPage @ 0x1407976E8
 * Callers:
 *     MxMapVa @ 0x14079747C (MxMapVa.c)
 * Callees:
 *     MxBootDescriptorDepleted @ 0x1407977C4 (MxBootDescriptorDepleted.c)
 *     MxSwitchDescriptors @ 0x1407D0EB4 (MxSwitchDescriptors.c)
 */

__int64 __fastcall MxGetNextPage(unsigned int a1, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // r9d
  __int64 *v5; // r8
  __int64 v7; // r9
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx

  v3 = 0;
  v4 = a1;
  do
  {
    v5 = (__int64 *)MxFreeDescriptor[v4];
    if ( v5 && v5[1] && !(a2 == 1 ? v5[3] == -1 : v5[2] == -1) )
      break;
    if ( ++v4 == (unsigned __int16)KeNumberNodes )
      v4 = 0;
    ++v3;
  }
  while ( v3 < (unsigned __int16)KeNumberNodes );
  if ( v3 != (unsigned __int16)KeNumberNodes )
  {
LABEL_8:
    if ( a2 == 1 )
    {
      v7 = v5[3];
      if ( (unsigned __int64)(v7 - *v5) >= 0x200 )
      {
        v5[3] = v7 - 512;
        return v7;
      }
    }
    else
    {
      v9 = v5[2];
      if ( v9 != (v9 & 0xFFFFFFFFFFFFFE00uLL) && v9 != *v5 )
      {
        v5[2] = v9 - 1;
LABEL_16:
        MxBootDescriptorDepleted(v5);
        return v7;
      }
      v10 = v5[3];
      if ( v10 == -1 )
      {
        v11 = *v5;
        if ( v9 == *v5 || v11 == (v11 & 0xFFFFFFFFFFFFFE00uLL) )
          v5[2] = -1LL;
        else
          v5[2] = v11 | 0x1FF;
        goto LABEL_16;
      }
      v5[2] = v10 + 511;
      if ( (unsigned __int64)(v10 - *v5) >= 0x200 )
      {
        v5[3] = v10 - 512;
        goto LABEL_16;
      }
    }
    v5[3] = -1LL;
    goto LABEL_16;
  }
  if ( a2 != 1 )
  {
    v5 = (__int64 *)MxSwitchDescriptors(a1);
    if ( v5 )
      goto LABEL_8;
    byte_140327185 = 16;
  }
  return -1LL;
}
