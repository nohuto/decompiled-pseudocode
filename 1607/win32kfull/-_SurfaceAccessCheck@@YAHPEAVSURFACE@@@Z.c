/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00354B8
 * Callers:
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0035130 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00363F0 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010F588 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 28);
  if ( (v1 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 75));
  if ( (v1 & 0x10000000) != 0 )
    return UserScreenAccessCheck();
  return 1LL;
}
