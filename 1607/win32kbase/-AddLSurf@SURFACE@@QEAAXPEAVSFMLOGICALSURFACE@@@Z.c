/*
 * XREFs of ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00260D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::AddLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  char *v2; // rbx
  char *v5; // rcx
  char *v6; // rax
  __int64 v7; // rdx
  char **v8; // rdx

  v2 = (char *)this + 568;
  if ( this != (SURFACE *)-568LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
  }
  v5 = (char *)this + 232;
  v6 = (char *)a2 + 48;
  if ( (*((_DWORD *)a2 + 62) & 4) != 0 )
  {
    v7 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *(_QWORD *)v6 = v7;
    *((_QWORD *)a2 + 7) = v5;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)v5 = v6;
  }
  else
  {
    v8 = (char **)*((_QWORD *)this + 30);
    if ( *v8 != v5 )
      __fastfail(3u);
    *(_QWORD *)v6 = v5;
    *((_QWORD *)a2 + 7) = v8;
    *v8 = v6;
    *((_QWORD *)this + 30) = v6;
  }
  if ( v2 )
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
