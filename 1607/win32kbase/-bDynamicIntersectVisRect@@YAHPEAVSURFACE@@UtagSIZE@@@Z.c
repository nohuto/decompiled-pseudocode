/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00877DC
 * Callers:
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  unsigned int i; // ecx
  __int64 Objt; // rax
  __int64 v5; // rbx
  HDC v6; // rdi
  LONG cy; // [rsp+4Ch] [rbp+14h]
  char v9; // [rsp+50h] [rbp+18h] BYREF

  cy = a2.cy;
  for ( i = 0; ; i = (unsigned int)v6 )
  {
    Objt = HmgSafeNextObjt(i, 1);
    v5 = Objt;
    if ( !Objt )
      break;
    v6 = *(HDC *)Objt;
    if ( (*(_DWORD *)(Objt + 36) & 0x2000) == 0 && *(struct SURFACE **)(Objt + 512) == a1 )
    {
      AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v9, (struct DC *)Objt);
      if ( *(_QWORD *)(v5 + 1536) )
      {
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v9);
        if ( !(unsigned int)GreIntersectVisRect(v6, cy) )
          return 0LL;
      }
      else
      {
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v9);
      }
    }
  }
  return 1LL;
}
