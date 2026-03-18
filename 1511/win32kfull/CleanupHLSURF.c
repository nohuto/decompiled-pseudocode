/*
 * XREFs of CleanupHLSURF @ 0x1C01144B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C007992C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall CleanupHLSURF(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 i; // rcx
  __int64 *Objt; // rax
  __int64 v7; // rbx

  v2 = a1;
  GreAcquireHmgrSemaphore(a1, a2);
  for ( i = 0LL; ; i = v7 )
  {
    LOBYTE(v3) = 18;
    Objt = (__int64 *)HmgSafeNextObjt(i, v3);
    if ( !Objt )
      break;
    v7 = *Objt;
    if ( !*Objt )
      break;
    bhLSurfDestroyLogicalSurfaceObject(Objt, 1, v2);
  }
  return GreReleaseHmgrSemaphore();
}
