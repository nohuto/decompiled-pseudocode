/*
 * XREFs of PfpPrefetchRequestPerform @ 0x1404DC998
 * Callers:
 *     PfpPrefetchRequest @ 0x1404A29D8 (PfpPrefetchRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     PfpCheckPrefetchAbort @ 0x1400FCA8C (PfpCheckPrefetchAbort.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x14039D54C (PfpScenCtxPrefetchAbortSet.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x1404AE5A8 (PfpPrefetchRequestPatchOffsets.c)
 *     PfpVolumeOpenAndVerify @ 0x1404BB8EC (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedInitialize @ 0x1404BFC40 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchVolumesCleanup @ 0x1404C245C (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchFilesTrickle @ 0x1404D95B0 (PfpPrefetchFilesTrickle.c)
 *     PfpOpenHandleClose @ 0x1404DA474 (PfpOpenHandleClose.c)
 *     PfpVolumePrefetchMetadata @ 0x1404DC308 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchSharedCleanup @ 0x1404DCEB8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1404DCF90 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedDeref @ 0x1404DD1A0 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchPrivatePages @ 0x1404EAEF0 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1404F3380 (PfpPrefetchFiles.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  PVOID PoolWithTag; // rax
  int v4; // ebx
  int v5; // r15d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  PVOID v8; // rax
  unsigned int i; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  bool v16; // zf
  int v18; // eax
  int v19; // eax
  unsigned int j; // edi
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  unsigned int k; // edi
  _QWORD *v24; // rcx
  struct _KEVENT *p_Event; // r8
  int v26; // eax
  __int64 v27; // rdx
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v29[28]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v29, 0, sizeof(v29));
  v29[0] = a1;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v29[5] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_28;
  }
  PfpPrefetchSharedInitialize((__int64)PoolWithTag);
  *(_QWORD *)(v29[5] + 24LL) = v29;
  if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 )
  {
    *(_DWORD *)(v29[5] + 60LL) = 60000;
    *(_DWORD *)(v29[5] + 56LL) = 150;
  }
  else
  {
    *(_DWORD *)(v29[5] + 60LL) = 250;
    *(_DWORD *)(v29[5] + 56LL) = 15;
  }
  v4 = PfpPrefetchSharedStart(v29[5]);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v29[0] + 81LL);
    if ( *(_BYTE *)(v29[0] + 81LL) )
    {
      _InterlockedAdd(&dword_140317B18, 1u);
      p_Event = &Event;
      if ( *(_QWORD *)(v29[0] + 72LL) )
        p_Event = *(struct _KEVENT **)(v29[0] + 72LL);
      v4 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)qword_140305760, v5, (__int64)p_Event, 0, 0);
      if ( v4 < 0 )
        goto LABEL_26;
      if ( !*(_QWORD *)(v29[0] + 72LL) )
        *(_QWORD *)(v29[0] + 72LL) = &Event;
    }
    v6 = *(_DWORD *)(a1 + 8) << 6;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 8) << 6;
      v8 = ExAllocatePoolWithTag(PagedPool, v6, 0x48566650u);
      v29[2] = v8;
      if ( !v8 )
        goto LABEL_62;
      memset(v8, 0, v7);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      {
        v10 = (unsigned __int64)i << 6;
        v11 = v10 + v29[2];
        memset((void *)(v10 + v29[2]), 0, 0x20uLL);
        *(_QWORD *)(v11 + 24) |= 0x200000000uLL;
        v12 = v29[2];
        memset((void *)(v10 + v29[2] + 32LL), 0, 0x20uLL);
        *(_QWORD *)(v12 + v10 + 56) |= 0x200000000uLL;
      }
    }
    LODWORD(v29[4]) = (*(_BYTE *)(v29[0] + 80LL) & 4) != 0 ? 16 : 768;
    v29[3] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * LODWORD(v29[4]) + 16), 0x504D6650u);
    if ( v29[3] )
    {
      if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 || (v19 = *(_DWORD *)(v29[0] + 12LL)) == 0 )
      {
LABEL_12:
        PfpPrefetchRequestPatchOffsets(a1);
        if ( !*(_WORD *)(a1 + 30) )
        {
          v13 = *(_DWORD *)(a1 + 28);
          if ( (_WORD)v13 )
            *(_WORD *)(a1 + 30) = v13 - 1;
        }
        if ( *(_DWORD *)(a1 + 20) )
        {
          v18 = PfpPrefetchPrivatePages(v29);
          v4 = v18;
          if ( v18 == -1073741670 || v18 == -1073741801 || v18 == -1073741248 )
            goto LABEL_26;
        }
        v14 = 0;
        if ( *(_DWORD *)(a1 + 8) )
        {
          do
          {
            if ( (int)PfpVolumeOpenAndVerify(
                        v29[5],
                        (_OWORD *)(v29[2] + ((unsigned __int64)v14 << 6)),
                        *(_QWORD *)(a1 + 32) + 40LL * v14) >= 0 )
            {
              v4 = PfpVolumePrefetchMetadata(v29, v14);
              if ( v4 == -1073741248 )
                goto LABEL_26;
            }
          }
          while ( ++v14 < *(_DWORD *)(a1 + 8) );
        }
        if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 )
        {
          v15 = PfpPrefetchFilesTrickle(v29);
          v16 = v15 == -1073741248;
LABEL_22:
          v4 = v15;
          if ( !v16 && v15 != -1073741670 && v15 != -1073741801 )
            v4 = 0;
          goto LABEL_26;
        }
        v26 = PfpPrefetchFiles(v29, 0LL);
        v4 = v26;
        if ( v26 != -1073741248 && v26 != -1073741670 && v26 != -1073741801 )
        {
          if ( !PfpCheckPrefetchAbort(v29) )
          {
            LOBYTE(v27) = 1;
            v15 = PfpPrefetchFiles(v29, v27);
            v16 = v15 == -1073741248;
            goto LABEL_22;
          }
          v4 = -1073741248;
        }
LABEL_26:
        if ( v5 )
        {
          _InterlockedDecrement(&dword_140317B18);
          PfpScenCtxPrefetchAbortSet((ULONG_PTR)qword_140305760, v5, 0LL, 1, 0);
        }
        goto LABEL_28;
      }
      v29[1] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * v19), 0x68466650u);
      if ( v29[1] )
      {
        for ( j = 0; j < *(_DWORD *)(v29[0] + 12LL); ++j )
        {
          v21 = (_QWORD *)(v29[1] + 32LL * j);
          memset(v21, 0, 0x20uLL);
          v21[3] |= 0x200000000uLL;
        }
        goto LABEL_12;
      }
    }
LABEL_62:
    v4 = -1073741670;
    goto LABEL_26;
  }
LABEL_28:
  if ( v29[1] )
  {
    v22 = v29[0];
    for ( k = 0; k < *(_DWORD *)(v22 + 12); ++k )
    {
      v24 = (_QWORD *)(v29[1] + 32LL * k);
      if ( (v24[3] & 0x400000000LL) != 0 )
      {
        PfpOpenHandleClose(v24, v29[5]);
        v22 = v29[0];
      }
    }
    ExFreePoolWithTag((PVOID)v29[1], 0);
  }
  PfpPrefetchVolumesCleanup((__int64)v29);
  if ( v29[3] )
    ExFreePoolWithTag((PVOID)v29[3], 0);
  if ( v29[5] )
  {
    PfpPrefetchSharedCleanup();
    PfpPrefetchSharedDeref(v29[5]);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
