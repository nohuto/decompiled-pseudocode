/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0029830
 * Callers:
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C0080FA8 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0081014 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0029990 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int16 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v5, a2);
  v3 = 0;
  if ( v5[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v5, this);
    v3 = RGNOBJ::bSwap(this, (struct RGNOBJ *)v5);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v5);
  return v3;
}
