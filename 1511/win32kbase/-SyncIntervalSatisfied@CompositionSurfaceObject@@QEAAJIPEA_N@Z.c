/*
 * XREFs of ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C00A884C
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z @ 0x1C00A8C88 (-CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::SyncIntervalSatisfied(
        CompositionSurfaceObject *this,
        unsigned int a2,
        bool *a3)
{
  int v6; // eax
  bool v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // edx

  *a3 = 1;
  v6 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  v7 = 0;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = *((_DWORD *)this + 27);
    if ( !v9 || a2 > v9 || v9 - a2 > 4 )
      v7 = 1;
    *a3 = v7;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return v8;
}
