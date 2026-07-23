/*
 * XREFs of PnprMirrorPhysicalMemory @ 0x1401D02F0
 * Callers:
 *     <none>
 * Callees:
 *     PnprGetMillisecondCounter @ 0x1403DBA40 (PnprGetMillisecondCounter.c)
 *     PnprMarkOrMirrorPages @ 0x1403DC0C4 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprMirrorPhysicalMemory(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // [rsp+30h] [rbp+8h]
  __int64 v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  v5 = a1;
  v3 = 0;
  if ( *(_BYTE *)(PnprContext + 208) )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    PnprGetMillisecondCounter(0LL);
    a2 = v6;
    a1 = v5;
  }
  else
  {
    v3 = 1;
  }
  LOBYTE(a3) = v3;
  return PnprMarkOrMirrorPages(a1, a2, a3);
}
