/*
 * XREFs of KiTestForAlertPending @ 0x1400AD508
 * Callers:
 *     KiResumeThread @ 0x1400C92C0 (KiResumeThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTestForAlertPending(__int64 a1, char a2, unsigned __int8 a3, int a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( !a2 )
    return (a3 & *(_BYTE *)(a1 + 194)) != 0 ? 0xC0 : 0;
  if ( *(_BYTE *)((char)a3 + a1 + 114) )
  {
    if ( a4 )
      *(_BYTE *)((char)a3 + a1 + 114) = 0;
    return 257;
  }
  if ( !a3 || *(_QWORD *)(a1 + 168) == a1 + 168 )
  {
    if ( !*(_BYTE *)(a1 + 114) )
      return v4;
    if ( a4 )
      *(_BYTE *)(a1 + 114) = 0;
    return 257;
  }
  if ( a4 )
    *(_BYTE *)(a1 + 194) = 1;
  return 192;
}
