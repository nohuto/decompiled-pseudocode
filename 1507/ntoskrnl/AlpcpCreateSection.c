/*
 * XREFs of AlpcpCreateSection @ 0x14052B184
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14052ABD8 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x14052AF18 (NtAlpcCreatePortSection.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmCreateSection @ 0x1404710D4 (MmCreateSection.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x140475C30 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140475C64 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x140475E10 (AlpcpStartInitialization.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, PVOID a5, ULONG_PTR *a6)
{
  PVOID v6; // rbp
  _QWORD *Blob; // rax
  ULONG_PTR v13; // rdi
  int Section; // esi
  __int64 v15; // r9
  signed __int64 v16; // rbx
  bool v17; // cc
  ULONG_PTR v18; // rbx
  volatile signed __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  signed __int64 v24; // rbx
  ULONG_PTR v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG_PTR v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  signed __int64 v33; // rax
  volatile signed __int64 *v34; // rbp
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r13
  char *v39; // r15
  char **v40; // rax
  __int64 v41; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR v42[3]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a5;
  if ( !a5 || a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = AlpcpAllocateBlob((__int64)AlpcSectionType, 72LL, 1);
  v13 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v13 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v13 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & ((unsigned __int64)v6
                                                                        + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v13 + 64) = v13 + 56;
  *(_QWORD *)(v13 + 56) = v13 + 56;
  if ( a4 )
  {
    Section = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &a5, 0LL);
    *(_QWORD *)v13 = a5;
  }
  else
  {
    v41 = *(_QWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) ^ (*(_DWORD *)(v13 + 48) ^ (2 * a2)) & 2 | 1;
    Section = MmCreateSection(v13, 983071LL, 0, (int)&v41, 4, 0x8000000, 0LL, 0LL);
  }
  if ( Section >= 0 )
  {
    v19 = (volatile signed __int64 *)(Object + 352);
    v21 = KeAbPreAcquire((ULONG_PTR)(Object + 352), 0LL, 0LL, v15);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)Object + 44, v21, (ULONG_PTR)(Object + 352), v23);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    if ( (*((_DWORD *)Object + 104) & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v17 = v24 <= 1;
      v25 = v24 - 1;
      if ( v17 )
      {
        if ( v25 )
          KeBugCheckEx(0x18u, 0LL, v13, 0x21uLL, v25);
        AlpcpDestroyBlob(v13);
      }
      return 3221225527LL;
    }
    else
    {
      AlpcpStartInitialization(v13, v20, v22, v23);
      v28 = v13 - 48;
      _m_prefetchw((const void *)(v13 - 48 + 24));
      v29 = *(_QWORD *)(v13 - 48 + 24);
      while ( v29 > 0 )
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 24), v29 + 1, v29);
        if ( v29 == v30 )
          goto LABEL_32;
      }
      if ( v29 )
        KeBugCheckEx(0x18u, 0LL, v13, 0x20uLL, v29);
LABEL_32:
      if ( a3 )
      {
        v31 = *((_QWORD *)Object + 2) + 40LL;
        v42[0] = v13;
        *(_QWORD *)(v13 + 16) = v31;
        v32 = AlpcAddHandleTableEntry(v31, v42, v26, v27);
        *(_QWORD *)(v13 + 24) = v32;
        if ( v32 == -1 )
        {
          if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 352));
          *(_QWORD *)(v13 + 16) = 0LL;
          AlpcpEndInitialization(v13);
          v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 24), 0xFFFFFFFFFFFFFFFEuLL) - 2;
          if ( v33 <= 0 )
          {
            if ( v33 )
              KeBugCheckEx(0x18u, 0LL, v13, 0x21uLL, v33);
            AlpcpDestroyBlob(v13);
          }
          return 3221225626LL;
        }
      }
      ObfReferenceObject(Object);
      v34 = (volatile signed __int64 *)(Object + 328);
      *(_QWORD *)(v13 + 40) = Object;
      v36 = KeAbPreAcquire((ULONG_PTR)(Object + 328), 0LL, 0LL, v35);
      v38 = v36;
      if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 82, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Object + 41, v36, (ULONG_PTR)(Object + 328), v37);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v39 = Object + 336;
      v40 = (char **)*((_QWORD *)v39 + 1);
      *(_QWORD *)v28 = v39;
      *(_QWORD *)(v28 + 8) = v40;
      if ( *v40 != v39 )
        __fastfail(3u);
      *v40 = (char *)v28;
      *((_QWORD *)v39 + 1) = v28;
      if ( (_InterlockedExchangeAdd64(v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v34);
      KeAbPostRelease((ULONG_PTR)v34);
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v19);
      KeAbPostRelease((ULONG_PTR)v19);
      AlpcpEndInitialization(v13);
      *a6 = v13;
      return 0LL;
    }
  }
  else
  {
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v17 = v16 <= 1;
    v18 = v16 - 1;
    if ( v17 )
    {
      if ( v18 )
        KeBugCheckEx(0x18u, 0LL, v13, 0x21uLL, v18);
      AlpcpDestroyBlob(v13);
    }
    return (unsigned int)Section;
  }
}
