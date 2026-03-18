/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680
 * Callers:
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0068FF0 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C0025738 (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF1C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF74 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00AF044 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  __int64 Object; // rdi
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  THREAD_GUARDED_EPATHOBJ::THREAD_GUARDED_EPATHOBJ(this);
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) && THREAD_GUARDED_EPATHOBJ::vThreadCleanup )
  {
    PushThreadGuardedObject((__int64 *)this + 11, (__int64)this, (__int64)THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 30) = 1;
  }
  Object = AllocateObject(0x148uLL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v4, (struct OBJECT *)Object, 1, 0, 7u) )
    {
      *((_QWORD *)this + 1) = Object;
      *(_DWORD *)(Object + 72) = 3;
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
    }
    else
    {
      FreeObject(Object, 7LL);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
  }
  return this;
}
