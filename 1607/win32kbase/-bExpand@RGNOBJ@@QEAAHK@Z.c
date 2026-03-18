/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C002D9C0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00831B0 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0083264 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0031510 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0031640 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v5 = 0LL;
  v6 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v5, a2);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v5);
  if ( v5 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v5, this);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v5);
    v3 = 1;
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v5);
  return v3;
}
