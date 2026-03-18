/*
 * XREFs of ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0039FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::AddLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  char *v2; // rbx
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 **v8; // rdx

  v2 = (char *)this + 560;
  if ( this != (SURFACE *)-560LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
  }
  v5 = (__int64 *)((char *)this + 224);
  v6 = (__int64 *)((char *)a2 + 48);
  if ( (*((_DWORD *)a2 + 62) & 4) != 0 )
  {
    v7 = *v5;
    *v6 = *v5;
    *((_QWORD *)a2 + 7) = v5;
    if ( *(__int64 **)(v7 + 8) != v5 )
      __fastfail(3u);
    *(_QWORD *)(v7 + 8) = v6;
    *v5 = (__int64)v6;
  }
  else
  {
    v8 = (__int64 **)*((_QWORD *)this + 29);
    *v6 = (__int64)v5;
    *((_QWORD *)a2 + 7) = v8;
    if ( *v8 != v5 )
      __fastfail(3u);
    *v8 = v6;
    *((_QWORD *)this + 29) = v6;
  }
  if ( v2 )
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
