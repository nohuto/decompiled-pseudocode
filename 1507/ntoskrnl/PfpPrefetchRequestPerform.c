/*
 * XREFs of PfpPrefetchRequestPerform @ 0x140455A8C
 * Callers:
 *     PfpPrefetchRequest @ 0x1404558A8 (PfpPrefetchRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x1403EFF94 (PfpScenCtxPrefetchAbortSet.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 *     PfpPrefetchFilesTrickle @ 0x14042DB8C (PfpPrefetchFilesTrickle.c)
 *     PfpVolumePrefetchMetadata @ 0x140455E28 (PfpVolumePrefetchMetadata.c)
 *     PfpVolumeOpenAndVerify @ 0x140456460 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedStart @ 0x140458AC8 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140458F0C (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchVolumesCleanup @ 0x14045905C (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x1404590F8 (PfpPrefetchRequestPatchOffsets.c)
 *     PfpPrefetchPrivatePages @ 0x14055C5B0 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1406AF06C (PfpPrefetchFiles.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  char *PoolWithTag; // rax
  char *v4; // rbx
  int v5; // ebx
  int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // ebx
  PVOID v9; // rax
  unsigned int i; // r14d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // r14d
  int v16; // eax
  bool v17; // zf
  int v19; // eax
  struct _KEVENT *p_Event; // r8
  int v21; // eax
  unsigned int j; // edi
  _QWORD *v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int k; // edi
  _QWORD *v28; // rcx
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v30[28]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v30, 0, sizeof(v30));
  v30[0] = a1;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x43536650u);
  v30[5] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_28;
  }
  v4 = PoolWithTag;
  memset(PoolWithTag, 0, 0x78uLL);
  *((_QWORD *)v4 + 6) = v4;
  *((_QWORD *)v4 + 5) = PfpPrefetchSharedConflictNotify;
  KeInitializeEvent((PRKEVENT)(v4 + 88), NotificationEvent, 0);
  *(_QWORD *)(v30[5] + 24LL) = v30;
  if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
  {
    *(_DWORD *)(v30[5] + 60LL) = 60000;
    *(_DWORD *)(v30[5] + 56LL) = 150;
  }
  else
  {
    *(_DWORD *)(v30[5] + 60LL) = 250;
    *(_DWORD *)(v30[5] + 56LL) = 15;
  }
  v5 = PfpPrefetchSharedStart(v30[5]);
  if ( v5 >= 0 )
  {
    v6 = *(unsigned __int8 *)(v30[0] + 81LL);
    if ( *(_BYTE *)(v30[0] + 81LL) )
    {
      _InterlockedAdd(&dword_140367DD8, 1u);
      p_Event = &Event;
      if ( *(_QWORD *)(v30[0] + 72LL) )
        p_Event = *(struct _KEVENT **)(v30[0] + 72LL);
      v5 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)qword_1403534D0, v6, (__int64)p_Event, 0LL, 0);
      if ( v5 < 0 )
        goto LABEL_26;
      if ( !*(_QWORD *)(v30[0] + 72LL) )
        *(_QWORD *)(v30[0] + 72LL) = &Event;
    }
    v7 = *(_DWORD *)(a1 + 8) << 6;
    if ( v7 )
    {
      v8 = *(_DWORD *)(a1 + 8) << 6;
      v9 = ExAllocatePoolWithTag(PagedPool, v7, 0x48566650u);
      v30[2] = v9;
      if ( !v9 )
        goto LABEL_46;
      memset(v9, 0, v8);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      {
        v11 = (unsigned __int64)i << 6;
        v12 = v11 + v30[2];
        memset((void *)(v11 + v30[2]), 0, 0x20uLL);
        *(_QWORD *)(v12 + 24) |= 0x200000000uLL;
        v13 = v30[2];
        memset((void *)(v11 + v30[2] + 32LL), 0, 0x20uLL);
        *(_QWORD *)(v13 + v11 + 56) |= 0x200000000uLL;
      }
    }
    LODWORD(v30[4]) = (*(_BYTE *)(v30[0] + 80LL) & 4) != 0 ? 16 : 768;
    v30[3] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * LODWORD(v30[4]) + 16), 0x504D6650u);
    if ( v30[3] )
    {
      if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 || (v21 = *(_DWORD *)(v30[0] + 12LL)) == 0 )
      {
LABEL_12:
        PfpPrefetchRequestPatchOffsets(a1);
        if ( !*(_WORD *)(a1 + 30) )
        {
          v14 = *(_DWORD *)(a1 + 28);
          if ( (_WORD)v14 )
            *(_WORD *)(a1 + 30) = v14 - 1;
        }
        if ( *(_DWORD *)(a1 + 20) )
        {
          v19 = PfpPrefetchPrivatePages(v30);
          v5 = v19;
          if ( v19 == -1073741670 || v19 == -1073741801 || v19 == -1073741248 )
            goto LABEL_26;
        }
        v15 = 0;
        if ( *(_DWORD *)(a1 + 8) )
        {
          do
          {
            if ( (int)PfpVolumeOpenAndVerify(
                        v30[5],
                        v30[2] + ((unsigned __int64)v15 << 6),
                        *(_QWORD *)(a1 + 32) + 40LL * v15) >= 0 )
            {
              v5 = PfpVolumePrefetchMetadata(v30, v15);
              if ( v5 == -1073741248 )
                goto LABEL_26;
            }
          }
          while ( ++v15 < *(_DWORD *)(a1 + 8) );
        }
        if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
        {
          v16 = PfpPrefetchFilesTrickle(v30);
          v17 = v16 == -1073741248;
LABEL_22:
          v5 = v16;
          if ( !v17 && v16 != -1073741670 && v16 != -1073741801 )
            v5 = 0;
          goto LABEL_26;
        }
        v24 = PfpPrefetchFiles(v30, 0LL);
        v5 = v24;
        if ( v24 != -1073741248 && v24 != -1073741670 && v24 != -1073741801 )
        {
          v26 = *(_QWORD *)(v30[0] + 72LL);
          if ( (!v26 || !*(_DWORD *)(v26 + 4))
            && ((*(_DWORD *)(v30[0] + 80LL) & 4) == 0
             || !*(_DWORD *)(v30[5] + 72LL) && (*(_DWORD *)(v30[5] + 68LL) & 4) == 0) )
          {
            LOBYTE(v25) = 1;
            v16 = PfpPrefetchFiles(v30, v25);
            v17 = v16 == -1073741248;
            goto LABEL_22;
          }
          v5 = -1073741248;
        }
LABEL_26:
        if ( v6 )
        {
          _InterlockedDecrement(&dword_140367DD8);
          PfpScenCtxPrefetchAbortSet((ULONG_PTR)qword_1403534D0, v6, 0LL, 1LL, 0);
        }
        goto LABEL_28;
      }
      v30[1] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * v21), 0x68466650u);
      if ( v30[1] )
      {
        for ( j = 0; j < *(_DWORD *)(v30[0] + 12LL); ++j )
        {
          v23 = (_QWORD *)(v30[1] + 32LL * j);
          memset(v23, 0, 0x20uLL);
          v23[3] |= 0x200000000uLL;
        }
        goto LABEL_12;
      }
    }
LABEL_46:
    v5 = -1073741670;
    goto LABEL_26;
  }
LABEL_28:
  if ( v30[1] )
  {
    for ( k = 0; k < *(_DWORD *)(v30[0] + 12LL); ++k )
    {
      v28 = (_QWORD *)(v30[1] + 32LL * k);
      if ( (v28[3] & 0x400000000LL) != 0 )
        PfpOpenHandleClose(v28, v30[5]);
    }
    ExFreePoolWithTag((PVOID)v30[1], 0);
  }
  PfpPrefetchVolumesCleanup(v30);
  if ( v30[3] )
    ExFreePoolWithTag((PVOID)v30[3], 0);
  if ( v30[5] )
  {
    PfpPrefetchSharedCleanup(v30[5]);
    ExFreePoolWithTag((PVOID)v30[5], 0);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v5;
}
