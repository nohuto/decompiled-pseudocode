/*
 * XREFs of ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0039F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::RemoveLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  char *v2; // rbx
  __int64 v4; // rdx
  struct SFMLOGICALSURFACE **v5; // rcx

  v2 = (char *)this + 560;
  if ( this != (SURFACE *)-560LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
  }
  v4 = *((_QWORD *)a2 + 6);
  v5 = (struct SFMLOGICALSURFACE **)*((_QWORD *)a2 + 7);
  if ( *(struct SFMLOGICALSURFACE **)(v4 + 8) != (struct SFMLOGICALSURFACE *)((char *)a2 + 48)
    || *v5 != (struct SFMLOGICALSURFACE *)((char *)a2 + 48) )
  {
    __fastfail(3u);
  }
  *v5 = (struct SFMLOGICALSURFACE *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( v2 )
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
