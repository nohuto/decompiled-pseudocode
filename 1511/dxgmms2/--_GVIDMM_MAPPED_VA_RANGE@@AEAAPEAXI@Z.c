/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0015134
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0043F78 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C001C358 (-GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(VIDMM_MAPPED_VA_RANGE *this)
{
  char *v1; // rax
  char *v3; // rax
  char *v4; // rsi
  __int64 v6; // rdx
  char **v7; // rcx
  __int64 v8; // rdx
  char **v9; // rcx
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAlloc; // rbx
  __int64 v11; // rdx
  char **v12; // rax

  v1 = (char *)this + 24;
  if ( *((_QWORD *)this + 3) )
  {
    v6 = *(_QWORD *)v1;
    v7 = (char **)*((_QWORD *)this + 4);
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || *v7 != v1 )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v1 = 0LL;
  }
  v3 = (char *)this + 8;
  if ( *((_QWORD *)this + 1) )
  {
    v8 = *(_QWORD *)v3;
    v9 = (char **)*((_QWORD *)this + 2);
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *v9 != v3 )
      __fastfail(3u);
    *v9 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)v3 = 0LL;
  }
  if ( (*((_DWORD *)this + 16) & 0x1000) == 0 )
  {
    v4 = (char *)this + 40;
    if ( *((_QWORD *)this + 5) )
    {
      VidMmGlobalAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmGlobalAlloc(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)VidMmGlobalAlloc + 344, 0LL);
      v11 = *(_QWORD *)v4;
      v12 = (char **)*((_QWORD *)this + 6);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v12 != v4 )
        __fastfail(3u);
      *v12 = (char *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      *(_QWORD *)v4 = 0LL;
      ExReleasePushLockExclusiveEx((char *)VidMmGlobalAlloc + 344, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  operator delete(this);
  return this;
}
