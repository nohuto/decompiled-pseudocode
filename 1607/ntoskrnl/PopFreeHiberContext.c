/*
 * XREFs of PopFreeHiberContext @ 0x14052EF94
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403C95C8 (PopUnlockAfterSleepWorker.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x140081D40 (MiUnlockCodePage.c)
 *     MmFreePagesFromMdl @ 0x1400996F0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BgkResumeFinished @ 0x1403C9590 (BgkResumeFinished.c)
 *     MmReleaseDumpHibernateResources @ 0x14052EF0C (MmReleaseDumpHibernateResources.c)
 *     BcdOpenSystemStore @ 0x14053C46C (BcdOpenSystemStore.c)
 *     PopBcdClearPendingResume @ 0x14053CB70 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x14053CDE8 (BcdCloseStore.c)
 *     PopClearHiberFileSignature @ 0x140548A34 (PopClearHiberFileSignature.c)
 *     VslFreeSecureHibernateResources @ 0x14062088C (VslFreeSecureHibernateResources.c)
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
  PVOID v7; // rdx
  unsigned __int64 PteAddress; // rax
  __int16 v9; // dx
  void *v10; // rcx
  unsigned __int64 v11; // rcx
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  v0 = qword_1403033E0;
  if ( qword_1403033E0 )
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
    if ( *(_QWORD *)(v0 + 168) && CrashdmpImageEntry && qword_140328A20 )
      qword_140328A20();
    if ( *(_QWORD *)(v0 + 136) )
    {
      PopInternalAddToDumpFile(v0, 0x1D0u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v0, 0LL);
    }
    if ( *(_DWORD *)(v0 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v0 + 28) = 0;
    v7 = qword_140303510;
    if ( (dword_1403A9134 & 2) == 0 )
    {
      PteAddress = MiGetPteAddress((unsigned __int64)qword_140303510);
      MiUnlockCodePage(PteAddress, PteAddress + 8 * (((Length + 4095 + (v9 & 0xFFF)) >> 12) - 1));
    }
    v10 = *(void **)(v0 + 296);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72626968u);
    v11 = *(_QWORD *)(v0 + 312);
    if ( v11 )
      MmReleaseDumpHibernateResources(v11);
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v0 + 460) )
      VslFreeSecureHibernateResources(v11, v7);
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
    }
    memset((void *)v0, 0, 0x1D0uLL);
    qword_1403033E0 = 0LL;
  }
}
