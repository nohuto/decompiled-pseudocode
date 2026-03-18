/*
 * XREFs of RFONT_vMakeInactive @ 0x14006EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONT_vMakeInactive(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  if ( a1 )
  {
    RFONTOBJ::vMakeInactive((RFONTOBJ *)&v1);
    v1 = 0LL;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v1);
}
