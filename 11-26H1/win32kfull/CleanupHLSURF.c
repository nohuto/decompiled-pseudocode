/*
 * XREFs of CleanupHLSURF @ 0x140259B80
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 */

void __fastcall CleanupHLSURF(Gre::Base *a1)
{
  HSEMAPHORE v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  Gre::Base *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 1512LL);
  GreAcquireSemaphoreInternal(v1);
  GrepAcquireLockValidate<20>();
  v3 = 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    LOBYTE(v2) = 18;
    v4 = HmgSafeNextObjt(v3, v2, &v5);
    if ( !v4 )
      break;
    DestroyLogicalSurface(v5, 1);
    v3 = v4;
  }
  if ( v1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v1);
    GrepReleaseLockValidate<20>();
    GreReleaseSemaphoreExclusiveInternal(v1);
  }
}
