/*
 * XREFs of ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x1C000E958
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C000EA78 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C000EE34 (-GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  char *v1; // rax
  __int64 v2; // r8
  char **v3; // rdx
  char *v4; // rax
  __int64 v5; // r8
  char **v6; // rdx
  _QWORD *v7; // rdi
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAlloc; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rax

  v1 = (char *)this + 24;
  if ( *((_QWORD *)this + 3) )
  {
    v2 = *(_QWORD *)v1;
    v3 = (char **)*((_QWORD *)this + 4);
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || *v3 != v1 )
      __fastfail(3u);
    *v3 = (char *)v2;
    *(_QWORD *)(v2 + 8) = v3;
    *(_QWORD *)v1 = 0LL;
  }
  v4 = (char *)this + 8;
  if ( *((_QWORD *)this + 1) )
  {
    v5 = *(_QWORD *)v4;
    v6 = (char **)*((_QWORD *)this + 2);
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)v4 = 0LL;
  }
  if ( (*((_DWORD *)this + 16) & 0x1000) == 0 )
  {
    v7 = (_QWORD *)((char *)this + 40);
    if ( *((_QWORD *)this + 5) )
    {
      VidMmGlobalAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmGlobalAlloc(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)VidMmGlobalAlloc + 344, 0LL);
      v9 = *v7;
      v10 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v10 != v7 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v7 = 0LL;
      ExReleasePushLockExclusiveEx((char *)VidMmGlobalAlloc + 344, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
