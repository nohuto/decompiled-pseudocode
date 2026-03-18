/*
 * XREFs of ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02A9DAC
 * Callers:
 *     NtGdiEngPlgBlt @ 0x1C02ACE40 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AD1B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AD610 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureCOLORADJUSTMENT(struct tagCOLORADJUSTMENT **a1, struct tagCOLORADJUSTMENT *a2)
{
  struct tagCOLORADJUSTMENT *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (struct tagCOLORADJUSTMENT *)W32UserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
