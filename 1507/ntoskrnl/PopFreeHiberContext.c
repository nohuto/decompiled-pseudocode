/*
 * XREFs of PopFreeHiberContext @ 0x140564AB8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     MmUnlockPreChargedPagedPool @ 0x140147EA4 (MmUnlockPreChargedPagedPool.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BgkResumeFinished @ 0x1403EC37C (BgkResumeFinished.c)
 *     MmReleaseDumpHibernateResources @ 0x1405651F4 (MmReleaseDumpHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x14056C368 (PopClearHiberFileSignature.c)
 *     BcdOpenSystemStore @ 0x14056DC50 (BcdOpenSystemStore.c)
 *     PopBcdClearPendingResume @ 0x14056E3CC (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 *     HvlFreeSecureHibernateResources @ 0x140670914 (HvlFreeSecureHibernateResources.c)
 */

void PopFreeHiberContext()
{
  ULONG_PTR v0; // rbx
  void *v1; // rcx
  __int64 v2; // rdi
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 **v6; // rax
  void *v7; // rcx
  __int64 v8; // rcx
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  v0 = qword_14032E680;
  if ( qword_14032E680 )
  {
    if ( BcdOpenSystemStore(&BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v1 = *(void **)(v0 + 248);
    if ( v1 )
    {
      ExFreePoolWithTag(v1, 0);
      *(_QWORD *)(v0 + 248) = 0LL;
    }
    while ( *(_QWORD *)(v0 + 128) )
    {
      v2 = *(_QWORD *)(v0 + 128);
      *(_QWORD *)(v0 + 128) = *(_QWORD *)v2;
      *(_QWORD *)(v0 + 136) -= (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
      if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
      MmFreePagesFromMdl((PMDL)v2);
      ExFreePoolWithTag((PVOID)v2, 0);
    }
    *(_QWORD *)(v0 + 240) = 0LL;
    v3 = (__int64 **)(v0 + 64);
    *(_QWORD *)(v0 + 232) = 0LL;
    while ( *v3 != (__int64 *)v3 )
    {
      v4 = *v3;
      v5 = **v3;
      v6 = (__int64 **)(*v3)[1];
      if ( *(__int64 **)(v5 + 8) != *v3 || *v6 != v4 )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
      --*(_DWORD *)(v0 + 80);
    }
    if ( *(_QWORD *)(v0 + 168) && CrashdmpImageEntry && qword_140353BD0 )
      qword_140353BD0();
    if ( *(_QWORD *)(v0 + 136) )
    {
      PopInternalAddToDumpFile(v0, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v0, 0LL);
    }
    if ( *(_DWORD *)(v0 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v0 + 28) = 0;
    MmUnlockPreChargedPagedPool((unsigned __int64)qword_14032E8F0, Length);
    v7 = *(void **)(v0 + 296);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x72626968u);
    v8 = *(_QWORD *)(v0 + 312);
    if ( v8 )
      MmReleaseDumpHibernateResources(v8, (unsigned int)(*(_DWORD *)(v0 + 264) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v0 + 460) )
      HvlFreeSecureHibernateResources();
    if ( (HvlpFlags & 4) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
    }
    memset((void *)v0, 0, 0x1D0uLL);
    qword_14032E680 = 0LL;
  }
}
