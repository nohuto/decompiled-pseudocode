/*
 * XREFs of TxtpJustifyRectangle @ 0x14072B2C8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x14072B0B0 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TxtpJustifyRectangle(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  a3[1] = 0;
  result = (unsigned int)a1[16];
  if ( (result & 4) != 0 )
  {
    result = (unsigned int)a1[17];
    *a3 = result;
  }
  else
  {
    v5 = a1[2] - *a2;
    if ( (result & 8) != 0 )
    {
      *a3 = v5;
      v6 = v5 - a1[17];
    }
    else
    {
      v6 = v5 >> 1;
    }
    *a3 = v6;
  }
  return result;
}
