/*
 * XREFs of GreReferenceObject @ 0x1C007F8B4
 * Callers:
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C007B1C8 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReferenceObject(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = a1 >> 16;
  LOBYTE(v1) = BYTE2(a1) & 0x1F;
  v2 = HmgLock(a1, v1);
  v3 = v2;
  if ( !v2 )
    return 3221225480LL;
  HmgIncrementShareReferenceCount(v2);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  return 0LL;
}
