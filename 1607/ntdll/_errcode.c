/*
 * XREFs of _errcode @ 0x18009F0F4
 * Callers:
 *     _except1 @ 0x18009F140 (_except1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall errcode(char a1)
{
  if ( (a1 & 0x20) != 0 )
  {
    return 5;
  }
  else if ( (a1 & 8) != 0 )
  {
    return 1;
  }
  else if ( (a1 & 4) != 0 )
  {
    return 2;
  }
  else if ( (a1 & 1) != 0 )
  {
    return 3;
  }
  else
  {
    return (unsigned int)(2 * (a1 & 2));
  }
}
