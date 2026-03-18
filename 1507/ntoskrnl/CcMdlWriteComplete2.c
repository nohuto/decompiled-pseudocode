/*
 * XREFs of CcMdlWriteComplete2 @ 0x140128BC4
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x140548850 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x14055090C (CcMdlWriteComplete.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  NTSTATUS v6; // r15d
  struct _MDL *v7; // rsi
  __int64 v8; // rdi
  bool v9; // bp
  struct _MDL *Next; // r14
  __int64 ByteCount; // rax
  PMDL v12; // r12
  KIRQL v13; // al
  bool v14; // zf
  KIRQL v15; // bl
  struct _MDL *v16; // rbx
  int v17; // ecx
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 **v20; // rcx
  __int64 **v21; // rdx
  __int64 *v22; // rdi
  __int64 v23; // rcx
  __int64 **v24; // rax
  __int64 **v25; // rcx
  char v26; // dl
  char v27; // cl
  bool v28; // r8
  __int64 *v29; // rax
  __int64 *v30; // rdx
  __int64 **v31; // rcx
  __int64 **v32; // rdx
  __int64 *v33; // rdi
  __int64 v34; // rcx
  __int64 **v35; // rax
  __int64 **v36; // rcx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v38; // ecx
  int v39[18]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+80h] [rbp+8h] BYREF
  PMDL Mdl; // [rsp+88h] [rbp+10h]

  v4 = *a2;
  Mdl = (PMDL)a3;
  v6 = 0;
  v40 = v4;
  v7 = (struct _MDL *)a3;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v9 = (*(_BYTE *)(a3 + 10) & 2) != 0;
  do
  {
    Next = v7->Next;
    if ( v9 )
      MmUnlockPages(v7);
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v40, v7->ByteCount, a4, v39, 1);
      if ( v39[0] < 0 )
        v6 = v39[0];
    }
    else
    {
      CcSetDirtyInMask(v8, &v40, v7->ByteCount, 0LL);
    }
    ByteCount = v7->ByteCount;
    v7 = Next;
    v4 += ByteCount;
    v40 = v4;
  }
  while ( Next );
  v12 = Mdl;
  if ( v9 )
  {
    v13 = KeAcquireQueuedSpinLock(5uLL);
    v14 = (*(_DWORD *)(v8 + 4))-- == 1;
    v15 = v13;
    if ( v14 )
    {
      byte_14034E041 = 1;
      v17 = *(_DWORD *)(v8 + 152);
      if ( (v17 & 0x10000) != 0 )
      {
        if ( !*(_DWORD *)(v8 + 112) )
        {
          if ( (v17 & 0x3000000) != 0 )
          {
            v18 = (__int64 *)(v8 + 120);
            v19 = *(__int64 **)(v8 + 120);
            v20 = *(__int64 ***)(v8 + 128);
            if ( v19[1] != v8 + 120 || *v20 != v18 )
              __fastfail(3u);
            *v20 = v19;
            v19[1] = (__int64)v20;
            v21 = (__int64 **)qword_14034DE38;
            *v18 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
            *(_QWORD *)(v8 + 128) = v21;
            if ( *v21 != &CcDirtySharedCacheMapWithLogHandleList )
              __fastfail(3u);
            *v21 = v18;
            qword_14034DE38 = v8 + 120;
          }
          v22 = (__int64 *)(v8 + 136);
          v23 = *v22;
          v24 = (__int64 **)v22[1];
          if ( *(__int64 **)(*v22 + 8) != v22 || *v24 != v22 )
            __fastfail(3u);
          *v24 = (__int64 *)v23;
          *(_QWORD *)(v23 + 8) = v24;
          v25 = (__int64 **)qword_14034DE68;
          *v22 = (__int64)&CcLazyWriterCursor;
          v22[1] = (__int64)v25;
          if ( *v25 != &CcLazyWriterCursor )
            __fastfail(3u);
          *v25 = v22;
          qword_14034DE68 = (__int64)v22;
        }
        v26 = 1;
        v27 = 1;
      }
      else
      {
        if ( *(_DWORD *)(v8 + 112) || (v17 & 0x20) != 0 )
          goto LABEL_9;
        v28 = *(_QWORD *)(v8 + 272) != 0LL;
        if ( (v17 & 0x3000000) != 0 )
        {
          v29 = (__int64 *)(v8 + 120);
          v30 = *(__int64 **)(v8 + 120);
          v31 = *(__int64 ***)(v8 + 128);
          if ( v30[1] != v8 + 120 || *v31 != v29 )
            __fastfail(3u);
          *v31 = v30;
          v30[1] = (__int64)v31;
          v32 = (__int64 **)qword_14034DE38;
          *v29 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *(_QWORD *)(v8 + 128) = v32;
          if ( *v32 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v32 = v29;
          qword_14034DE38 = v8 + 120;
        }
        v33 = (__int64 *)(v8 + 136);
        v34 = *v33;
        v35 = (__int64 **)v33[1];
        if ( *(__int64 **)(*v33 + 8) != v33 || *v35 != v33 )
          __fastfail(3u);
        *v35 = (__int64 *)v34;
        *(_QWORD *)(v34 + 8) = v35;
        v36 = (__int64 **)qword_14034DE68;
        *v33 = (__int64)&CcLazyWriterCursor;
        v33[1] = (__int64)v36;
        if ( *v36 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v36 = v33;
        v26 = 0;
        qword_14034DE68 = (__int64)v33;
        v27 = v28;
      }
      CcScheduleLazyWriteScan(v27, v26);
    }
LABEL_9:
    KeReleaseQueuedSpinLock(5uLL, v15);
  }
  if ( v6 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v6);
    v38 = -1073741591;
    if ( IsNtstatusExpected )
      v38 = v6;
    RtlRaiseStatus(v38);
  }
  do
  {
    v16 = v12->Next;
    IoFreeMdl(v12);
    v12 = v16;
  }
  while ( v16 );
}
