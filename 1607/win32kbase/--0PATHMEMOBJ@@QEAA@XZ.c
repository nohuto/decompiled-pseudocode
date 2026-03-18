/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0047AC0
 * Callers:
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00830D8 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCFD8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00BD0A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  __int64 Object; // rdi
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) && THREAD_GUARDED_EPATHOBJ::vThreadCleanup )
  {
    PushThreadGuardedObject((char *)this + 88, this, THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 30) = 1;
  }
  Object = AllocateObject(0x148uLL, 7u, 1);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v4, (struct OBJECT *)Object, 1, 0, 7u) )
    {
      *((_QWORD *)this + 1) = Object;
      *(_DWORD *)(Object + 72) = 3;
      *(_QWORD *)this = 0LL;
    }
    else
    {
      FreeObject(Object);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
  }
  return this;
}
