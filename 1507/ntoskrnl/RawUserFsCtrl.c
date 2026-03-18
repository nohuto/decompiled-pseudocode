/*
 * XREFs of RawUserFsCtrl @ 0x14055F784
 * Callers:
 *     RawFileSystemControl @ 0x14040C3BC (RawFileSystemControl.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14010CE20 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     FsRtlNotifyVolumeEvent @ 0x14055FB20 (FsRtlNotifyVolumeEvent.c)
 *     RawQueryFileSystemInformation @ 0x1406C6C80 (RawQueryFileSystemInformation.c)
 */

__int64 __fastcall RawUserFsCtrl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  unsigned int FileSystemInformation; // esi
  struct _FILE_OBJECT *v6; // rbp
  char v7; // r15
  int v11; // r12d
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int8 v16; // r15
  int v17; // eax
  unsigned __int8 v18; // di
  bool v19; // zf
  signed __int32 v20; // eax
  ULONG v21; // edx
  ULONG v22; // edx
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int8 v25; // r13
  int v26; // eax
  unsigned __int8 v27; // r14
  signed __int32 v28; // eax
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int8 v32; // r15
  struct _FILE_OBJECT *v33; // rax
  BOOLEAN v34; // bl
  int v35; // eax
  volatile signed __int32 *v36; // r14
  __int64 v37; // rax
  __int64 v38; // r15
  unsigned __int8 CurrentIrql; // r13
  int v40; // eax
  unsigned __int8 v41; // r15
  signed __int32 v42; // eax
  struct _FILE_OBJECT *v43; // rax
  struct _FILE_OBJECT *v44; // rax
  struct _FILE_OBJECT *v45; // rax

  v4 = *(_DWORD *)(a2 + 24);
  FileSystemInformation = 0;
  v6 = *(struct _FILE_OBJECT **)(a2 + 48);
  v7 = 0;
  if ( v4 == 589848 )
  {
    v22 = 3;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(a2 + 24) == 589856 )
  {
    v22 = 1;
LABEL_30:
    FsRtlNotifyVolumeEvent(v6, v22);
  }
  switch ( v4 )
  {
    case 589824:
    case 589828:
    case 589836:
    case 589844:
      v45 = *(struct _FILE_OBJECT **)(a3 + 200);
      v34 = 1;
      if ( !v45 || v6 != v45 )
        v34 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216), 1u);
      FileSystemInformation = v34 != 0 ? -1073741822 : -1073741202;
      goto LABEL_60;
    case 589848:
      v33 = *(struct _FILE_OBJECT **)(a3 + 200);
      v34 = 1;
      if ( !v33 || v6 != v33 )
        v34 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216), 1u);
      v35 = 0;
      v36 = (volatile signed __int32 *)(a3 + 224);
      if ( !v34 )
        v35 = -1073741202;
      FileSystemInformation = v35;
      v37 = KeAbPreAcquire(a3 + 224, 0LL, 0LL, a4);
      v38 = v37;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v36, 0) )
        ExpAcquireFastMutexContended(a3 + 224, v37);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      *(_QWORD *)(a3 + 232) = KeGetCurrentThread();
      *(_DWORD *)(a3 + 272) = CurrentIrql;
      v40 = *(_DWORD *)(a3 + 104);
      if ( (v40 & 1) != 0 || *(_DWORD *)(a3 + 108) != 1 )
      {
        FileSystemInformation = -1073741790;
      }
      else
      {
        *(_QWORD *)(a3 + 208) = v6;
        *(_DWORD *)(a3 + 104) = v40 | 1;
      }
      *(_QWORD *)(a3 + 232) = 0LL;
      v41 = *(_BYTE *)(a3 + 272);
      v42 = _InterlockedCompareExchange(v36, 1, 0);
      if ( v42 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)(a3 + 224), v42);
      __writecr8(v41);
      KeAbPostRelease(a3 + 224);
LABEL_60:
      if ( v34 )
      {
        v43 = *(struct _FILE_OBJECT **)(a3 + 200);
        if ( !v43 || v6 != v43 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216), 1u);
      }
      goto LABEL_25;
    case 589852:
      v13 = (volatile signed __int32 *)(a3 + 224);
      v14 = KeAbPreAcquire(a3 + 224, 0LL, 0LL, a4);
      v15 = v14;
      v16 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(a3 + 224), 0) )
        ExpAcquireFastMutexContended(a3 + 224, v14);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      *(_QWORD *)(a3 + 232) = KeGetCurrentThread();
      *(_DWORD *)(a3 + 272) = v16;
      v17 = *(_DWORD *)(a3 + 104);
      if ( (v17 & 1) != 0 )
      {
        *(_QWORD *)(a3 + 208) = 0LL;
        *(_DWORD *)(a3 + 104) = v17 & 0xFFFFFFFE;
      }
      else
      {
        FileSystemInformation = -1073741782;
      }
      *(_QWORD *)(a3 + 232) = 0LL;
      v18 = *(_BYTE *)(a3 + 272);
      v20 = _InterlockedCompareExchange(v13, 1, 0);
      v19 = v20 == 0;
      goto LABEL_22;
  }
  if ( v4 != 589856 )
  {
    if ( v4 != 590412 )
    {
      FileSystemInformation = -1073741811;
      goto LABEL_12;
    }
    v44 = *(struct _FILE_OBJECT **)(a3 + 200);
    v34 = 1;
    if ( !v44 || v6 != v44 )
      v34 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216), 1u);
    if ( v34 )
      FileSystemInformation = RawQueryFileSystemInformation(a1, a2, a3);
    else
      FileSystemInformation = -1073741202;
    goto LABEL_60;
  }
  v13 = (volatile signed __int32 *)(a3 + 224);
  v23 = KeAbPreAcquire(a3 + 224, 0LL, 0LL, a4);
  v24 = v23;
  v25 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(a3 + 224), 0) )
    ExpAcquireFastMutexContended(a3 + 224, v23);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  *(_QWORD *)(a3 + 232) = KeGetCurrentThread();
  *(_DWORD *)(a3 + 272) = v25;
  v26 = *(_DWORD *)(a3 + 104);
  if ( (v26 & 2) != 0 )
  {
    FileSystemInformation = -1073741202;
  }
  else
  {
    v7 = 1;
    *(_DWORD *)(a3 + 104) = v26 | 2;
  }
  *(_QWORD *)(a3 + 232) = 0LL;
  v27 = *(_BYTE *)(a3 + 272);
  v28 = _InterlockedCompareExchange(v13, 1, 0);
  if ( v28 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(a3 + 224), v28);
  __writecr8(v27);
  KeAbPostRelease(a3 + 224);
  if ( v7 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216));
    v30 = KeAbPreAcquire(a3 + 224, 0LL, 0LL, v29);
    v31 = v30;
    v32 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v13, 0) )
      ExpAcquireFastMutexContended(a3 + 224, v30);
    if ( v31 )
      *(_BYTE *)(v31 + 26) |= 1u;
    *(_QWORD *)(a3 + 232) = KeGetCurrentThread();
    *(_DWORD *)(a3 + 272) = v32;
    *(_QWORD *)(a3 + 200) = v6;
    *(_QWORD *)(a3 + 232) = 0LL;
    v18 = *(_BYTE *)(a3 + 272);
    v20 = _InterlockedCompareExchange(v13, 1, 0);
    v19 = v20 == 0;
LABEL_22:
    if ( !v19 )
      ExpReleaseFastMutexContended(v13, v20);
    __writecr8(v18);
    KeAbPostRelease((ULONG_PTR)v13);
  }
LABEL_25:
  if ( (FileSystemInformation & 0x80000000) == 0 )
  {
    if ( v4 != 589852 )
      return FileSystemInformation;
    v21 = 5;
LABEL_28:
    FsRtlNotifyVolumeEvent(v6, v21);
    return FileSystemInformation;
  }
LABEL_12:
  v11 = v4 - 589848;
  if ( !v11 )
  {
    v21 = 4;
    goto LABEL_28;
  }
  if ( v11 == 8 )
  {
    v21 = 2;
    goto LABEL_28;
  }
  return FileSystemInformation;
}
