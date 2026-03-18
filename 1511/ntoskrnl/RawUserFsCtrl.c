/*
 * XREFs of RawUserFsCtrl @ 0x1404EB368
 * Callers:
 *     RawFileSystemControl @ 0x140491518 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     RawEndOperation @ 0x1400C33B8 (RawEndOperation.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400D952C (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     RawBeginOperation @ 0x1400FAF20 (RawBeginOperation.c)
 *     FsRtlNotifyVolumeEvent @ 0x1404EB578 (FsRtlNotifyVolumeEvent.c)
 *     RawQueryFileSystemInformation @ 0x140518FE0 (RawQueryFileSystemInformation.c)
 */

__int64 __fastcall RawUserFsCtrl(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int FileSystemInformation; // ebx
  struct _FILE_OBJECT *v5; // rsi
  char v6; // r12
  int v10; // ebp
  BOOLEAN v12; // r14
  ULONG v13; // edx
  ULONG v14; // edx
  struct _FAST_MUTEX *v15; // r14
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax

  v3 = *(_DWORD *)(a2 + 24);
  FileSystemInformation = 0;
  v5 = *(struct _FILE_OBJECT **)(a2 + 48);
  v6 = 0;
  if ( v3 == 589848 )
  {
    v14 = 3;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a2 + 24) == 589856 )
  {
    v14 = 1;
LABEL_24:
    FsRtlNotifyVolumeEvent(v5, v14);
  }
  switch ( v3 )
  {
    case 589824:
    case 589828:
    case 589836:
    case 589844:
      v12 = RawBeginOperation(a3, (__int64)v5);
      if ( v12 )
      {
        FileSystemInformation = -1073741822;
LABEL_17:
        if ( v12 )
          RawEndOperation(a3, (__int64)v5);
        goto LABEL_19;
      }
LABEL_40:
      FileSystemInformation = -1073741202;
      goto LABEL_12;
    case 589848:
      v12 = RawBeginOperation(a3, (__int64)v5);
      v18 = 0;
      if ( !v12 )
        v18 = -1073741202;
      FileSystemInformation = v18;
      ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
      v19 = *(_DWORD *)(a3 + 104);
      if ( (v19 & 1) != 0 || *(_DWORD *)(a3 + 108) != 1 )
      {
        FileSystemInformation = -1073741790;
      }
      else
      {
        *(_QWORD *)(a3 + 208) = v5;
        *(_DWORD *)(a3 + 104) = v19 | 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
      goto LABEL_17;
    case 589852:
      v15 = (struct _FAST_MUTEX *)(a3 + 224);
      ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
      v16 = *(_DWORD *)(a3 + 104);
      if ( (v16 & 1) != 0 )
      {
        *(_QWORD *)(a3 + 208) = 0LL;
        *(_DWORD *)(a3 + 104) = v16 & 0xFFFFFFFE;
      }
      else
      {
        FileSystemInformation = -1073741782;
      }
      goto LABEL_27;
  }
  if ( v3 != 589856 )
  {
    if ( v3 != 590412 )
    {
      FileSystemInformation = -1073741811;
      goto LABEL_12;
    }
    v12 = RawBeginOperation(a3, (__int64)v5);
    if ( v12 )
    {
      FileSystemInformation = RawQueryFileSystemInformation(a1, a2, a3);
      goto LABEL_17;
    }
    goto LABEL_40;
  }
  v15 = (struct _FAST_MUTEX *)(a3 + 224);
  ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
  v17 = *(_DWORD *)(a3 + 104);
  if ( (v17 & 2) != 0 )
  {
    FileSystemInformation = -1073741202;
  }
  else
  {
    v6 = 1;
    *(_DWORD *)(a3 + 104) = v17 | 2;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
  if ( v6 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216));
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
    *(_QWORD *)(a3 + 200) = v5;
LABEL_27:
    KeReleaseGuardedMutex(v15);
  }
LABEL_19:
  if ( (FileSystemInformation & 0x80000000) == 0 )
  {
    if ( v3 != 589852 )
      return FileSystemInformation;
    v13 = 5;
LABEL_22:
    FsRtlNotifyVolumeEvent(v5, v13);
    return FileSystemInformation;
  }
LABEL_12:
  v10 = v3 - 589848;
  if ( !v10 )
  {
    v13 = 4;
    goto LABEL_22;
  }
  if ( v10 == 8 )
  {
    v13 = 2;
    goto LABEL_22;
  }
  return FileSystemInformation;
}
