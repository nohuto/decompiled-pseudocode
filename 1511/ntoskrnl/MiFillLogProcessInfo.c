/*
 * XREFs of MiFillLogProcessInfo @ 0x1400F1670
 * Callers:
 *     MiLogTrimWs @ 0x1400F15D4 (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x14012D9C4 (MiLogWsEmptyControl.c)
 * Callees:
 *     <none>
 */

char __fastcall MiFillLogProcessInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v3; // eax

  LOBYTE(v3) = *(_BYTE *)(a1 + 216) & 7;
  if ( (_BYTE)v3 )
  {
    if ( (unsigned __int8)v3 < 2u )
    {
      v3 = *(_DWORD *)(a1 - 2960);
      *a2 = v3;
    }
    else
    {
      *a2 = 0;
    }
    *a3 = 0LL;
  }
  else
  {
    *a2 = *(_DWORD *)(a1 - 536);
    LOBYTE(v3) = a1 + 80;
    *a3 = a1 - 176;
  }
  return v3;
}
