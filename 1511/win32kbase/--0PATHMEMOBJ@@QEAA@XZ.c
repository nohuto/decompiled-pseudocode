/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C006F560
 * Callers:
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0080EC8 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     PushThreadGuardedObject @ 0x1C0052730 (PushThreadGuardedObject.c)
 *     ?vInitPreCompute@EPATHOBJ@@QEAAXXZ @ 0x1C00891D4 (-vInitPreCompute@EPATHOBJ@@QEAAXXZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00B2E1C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  struct OBJECT *Object; // rax
  __int64 v3; // rdi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 10) = 0LL;
  EPATHOBJ::vInitPreCompute(this);
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) && THREAD_GUARDED_EPATHOBJ::vThreadCleanup )
  {
    PushThreadGuardedObject((__int64 *)this + 11, (__int64)this, (__int64)THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 30) = 1;
  }
  Object = (struct OBJECT *)AllocateObject(0x148uLL, 7u, 1);
  v3 = (__int64)Object;
  if ( Object )
  {
    v5 = 0LL;
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v5, Object, 1, 0, 7u) )
    {
      *((_QWORD *)this + 1) = v3;
      *(_DWORD *)(v3 + 72) = 3;
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
    }
    else
    {
      FreeObject(v3);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v5);
  }
  return this;
}
