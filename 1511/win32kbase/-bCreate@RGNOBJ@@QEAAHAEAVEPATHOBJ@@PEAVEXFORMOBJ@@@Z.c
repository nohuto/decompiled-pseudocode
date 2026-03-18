/*
 * XREFs of ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0081D40
 * Callers:
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0029990 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0081860 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bCreate(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  unsigned int v6; // ebx
  __int16 *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v8, *(_DWORD *)(*(_QWORD *)this + 80LL));
  v6 = 0;
  if ( v8[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v8, this);
    v6 = RGNOBJ::bOutline((RGNOBJ *)v8, a2, a3);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v8);
  return v6;
}
