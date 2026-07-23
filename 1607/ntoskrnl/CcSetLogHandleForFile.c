/*
 * XREFs of CcSetLogHandleForFile @ 0x1401B21A4
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  char *SharedCacheMap; // rbx
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // r9
  char **v9; // r8
  PVOID *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx

  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x24EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x254uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = KeAcquireQueuedSpinLock(5uLL);
  v7 = *((_QWORD *)SharedCacheMap + 30) == 0LL;
  v8 = v6;
  *((_QWORD *)SharedCacheMap + 31) = FlushToLsnRoutine;
  if ( !v7 )
  {
    v9 = (char **)*((_QWORD *)SharedCacheMap + 15);
    v10 = (PVOID *)*((_QWORD *)SharedCacheMap + 16);
    if ( v9[1] != SharedCacheMap + 120 || *v10 != SharedCacheMap + 120 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (char *)v10;
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v11 = SharedCacheMap + 120;
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v12 = (_QWORD *)qword_140322FD8;
      if ( *(__int64 **)qword_140322FD8 != &CcDirtySharedCacheMapWithLogHandleList )
        __fastfail(3u);
      *v11 = &CcDirtySharedCacheMapWithLogHandleList;
      *((_QWORD *)SharedCacheMap + 16) = v12;
      *v12 = v11;
      qword_140322FD8 = (__int64)(SharedCacheMap + 120);
    }
    else
    {
      v13 = (_QWORD *)qword_140322FB8;
      if ( *(__int64 **)qword_140322FB8 != &CcCleanSharedCacheMapWithLogHandleList )
        __fastfail(3u);
      *v11 = &CcCleanSharedCacheMapWithLogHandleList;
      *((_QWORD *)SharedCacheMap + 16) = v13;
      *v13 = v11;
      qword_140322FB8 = (__int64)(SharedCacheMap + 120);
    }
  }
  *((_QWORD *)SharedCacheMap + 30) = LogHandle;
  KeReleaseQueuedSpinLock(5uLL, v8);
}
