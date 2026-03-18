/*
 * XREFs of CcMdlWriteAbort @ 0x1401DDCB4
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PMDL v2; // rdi
  char *SharedCacheMap; // rbx
  bool v4; // si
  struct _MDL *Next; // rbp
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // di
  int v9; // ecx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 **v12; // rcx
  __int64 **v13; // rdx
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 **v17; // rcx
  char v18; // dl
  char v19; // cl
  bool v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 **v23; // rcx
  __int64 **v24; // rdx
  __int64 *v25; // rbx
  __int64 v26; // rcx
  __int64 **v27; // rax
  __int64 **v28; // rcx

  v2 = MdlChain;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = (MdlChain->MdlFlags & 2) != 0;
  do
  {
    Next = v2->Next;
    if ( v4 )
      MmUnlockPages(v2);
    IoFreeMdl(v2);
    v2 = Next;
  }
  while ( Next );
  if ( v4 )
  {
    v6 = KeAcquireQueuedSpinLock(5uLL);
    v7 = (*((_DWORD *)SharedCacheMap + 1))-- == 1;
    v8 = v6;
    if ( v7 )
    {
      byte_14034E041 = 1;
      v9 = *((_DWORD *)SharedCacheMap + 38);
      if ( (v9 & 0x10000) != 0 )
      {
        if ( !*((_DWORD *)SharedCacheMap + 28) )
        {
          if ( (v9 & 0x3000000) != 0 )
          {
            v10 = (__int64 *)(SharedCacheMap + 120);
            v11 = *((_QWORD *)SharedCacheMap + 15);
            v12 = (__int64 **)*((_QWORD *)SharedCacheMap + 16);
            if ( *(char **)(v11 + 8) != SharedCacheMap + 120 || *v12 != v10 )
              __fastfail(3u);
            *v12 = (__int64 *)v11;
            *(_QWORD *)(v11 + 8) = v12;
            v13 = (__int64 **)qword_14034DE38;
            *v10 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
            *((_QWORD *)SharedCacheMap + 16) = v13;
            if ( *v13 != &CcDirtySharedCacheMapWithLogHandleList )
              __fastfail(3u);
            *v13 = v10;
            qword_14034DE38 = (__int64)(SharedCacheMap + 120);
          }
          v14 = (__int64 *)(SharedCacheMap + 136);
          v15 = *v14;
          v16 = (__int64 **)v14[1];
          if ( *(__int64 **)(*v14 + 8) != v14 || *v16 != v14 )
            __fastfail(3u);
          *v16 = (__int64 *)v15;
          *(_QWORD *)(v15 + 8) = v16;
          v17 = (__int64 **)qword_14034DE68;
          *v14 = (__int64)&CcLazyWriterCursor;
          v14[1] = (__int64)v17;
          if ( *v17 != &CcLazyWriterCursor )
            __fastfail(3u);
          *v17 = v14;
          qword_14034DE68 = (__int64)v14;
        }
        v18 = 1;
        v19 = 1;
      }
      else
      {
        if ( *((_DWORD *)SharedCacheMap + 28) || (v9 & 0x20) != 0 )
          goto LABEL_23;
        v20 = *((_QWORD *)SharedCacheMap + 34) != 0LL;
        if ( (v9 & 0x3000000) != 0 )
        {
          v21 = (__int64 *)(SharedCacheMap + 120);
          v22 = *((_QWORD *)SharedCacheMap + 15);
          v23 = (__int64 **)*((_QWORD *)SharedCacheMap + 16);
          if ( *(char **)(v22 + 8) != SharedCacheMap + 120 || *v23 != v21 )
            __fastfail(3u);
          *v23 = (__int64 *)v22;
          *(_QWORD *)(v22 + 8) = v23;
          v24 = (__int64 **)qword_14034DE38;
          *v21 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *((_QWORD *)SharedCacheMap + 16) = v24;
          if ( *v24 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v24 = v21;
          qword_14034DE38 = (__int64)(SharedCacheMap + 120);
        }
        v25 = (__int64 *)(SharedCacheMap + 136);
        v26 = *v25;
        v27 = (__int64 **)v25[1];
        if ( *(__int64 **)(*v25 + 8) != v25 || *v27 != v25 )
          __fastfail(3u);
        *v27 = (__int64 *)v26;
        *(_QWORD *)(v26 + 8) = v27;
        v28 = (__int64 **)qword_14034DE68;
        *v25 = (__int64)&CcLazyWriterCursor;
        v25[1] = (__int64)v28;
        if ( *v28 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v28 = v25;
        v18 = 0;
        qword_14034DE68 = (__int64)v25;
        v19 = v20;
      }
      CcScheduleLazyWriteScan(v19, v18);
    }
LABEL_23:
    KeReleaseQueuedSpinLock(5uLL, v8);
  }
}
