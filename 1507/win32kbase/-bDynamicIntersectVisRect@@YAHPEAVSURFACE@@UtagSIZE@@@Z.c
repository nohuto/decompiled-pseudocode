/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C006E870
 * Callers:
 *     bDynamicModeChange @ 0x1C005C7A4 (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C005DA10 (HmgSafeNextObjt.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00B3D94 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  unsigned __int16 i; // cx
  __int64 Objt; // rax
  __int64 v5; // rbx
  HDC v6; // rdi
  LONG cy; // [rsp+4Ch] [rbp+14h]
  char v9; // [rsp+50h] [rbp+18h] BYREF

  cy = a2.cy;
  for ( i = 0; ; i = (unsigned __int16)v6 )
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
