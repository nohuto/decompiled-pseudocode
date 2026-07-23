/*
 * XREFs of RtlCmEncodeMemIoResource @ 0x1800E8CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCmEncodeMemIoResource(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  __int16 v5; // dx
  unsigned __int64 v6; // r9
  __int16 v7; // ax

  if ( ((a2 - 3) & 0xFB) != 0 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
LABEL_5:
    if ( a3 > 0xFFFFFFFF )
      return 3221225485LL;
    *(_BYTE *)a1 = 1;
    *(_QWORD *)(a1 + 4) = a4;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 4) = a4;
  *(_WORD *)(a1 + 2) &= 0xF1FFu;
  v5 = *(_WORD *)(a1 + 2);
  if ( a3 <= 0xFFFFFFFF )
  {
    *(_BYTE *)a1 = 3;
LABEL_7:
    *(_DWORD *)(a1 + 12) = a3;
    return 0LL;
  }
  if ( a3 > 0xFFFFFFFF00LL )
  {
    if ( a3 > 0xFFFFFFFF0000LL )
    {
      if ( a3 <= 0xFFFFFFFF00000000uLL )
      {
        v6 = HIDWORD(a3);
        if ( a3 == HIDWORD(a3) << 32 )
        {
          v7 = 2048;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v6 = a3 >> 16;
      if ( a3 == (unsigned __int64)(unsigned int)(a3 >> 16) << 16 )
      {
        v7 = 1024;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v6 = a3 >> 8;
    if ( a3 == (unsigned __int64)(unsigned int)(a3 >> 8) << 8 )
    {
      v7 = 512;
LABEL_14:
      *(_BYTE *)a1 = 7;
      *(_WORD *)(a1 + 2) = v7 | v5;
      *(_DWORD *)(a1 + 12) = v6;
      return 0LL;
    }
  }
  return 3221225473LL;
}
