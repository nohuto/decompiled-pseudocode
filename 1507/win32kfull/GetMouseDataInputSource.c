/*
 * XREFs of GetMouseDataInputSource @ 0x1C02020F8
 * Callers:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall GetMouseDataInputSource(__int64 a1, int a2, int a3, unsigned int *a4)
{
  __int16 v4; // ax

  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    if ( (v4 & 0x10) != 0 )
    {
      *a4 = 4;
    }
    else if ( (v4 & 0x40) != 0 )
    {
      *a4 = 8;
    }
    else
    {
      *a4 = (v4 & 0x80 | 0x10u) >> 3;
    }
    if ( a3 )
      a4[1] = 1;
    else
      a4[1] = a2 != 0 ? 2 : 0;
  }
  else
  {
    *a4 = 0;
    a4[1] = 4;
  }
}
