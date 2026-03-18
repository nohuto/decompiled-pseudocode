/*
 * XREFs of MiSignalLargePageRebuild @ 0x1400133E0
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x140012CF0 (MiNodeFreeZeroPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPageCombiningActive @ 0x1400A98D0 (MiPageCombiningActive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // r10
  int v4; // edi
  unsigned int v5; // r13d
  _BYTE *v6; // r15
  __int64 v7; // r14
  __int64 v8; // r12
  unsigned int v9; // ebp
  _BYTE *v10; // rsi
  __int64 v11; // rbx
  char v12; // al
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r9
  _WORD *v17; // rcx
  __int64 v18; // r8
  _WORD *v19; // rax
  __int64 v20; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 4365) )
  {
    v15 = (unsigned __int16)KeNumberNodes;
    *(_BYTE *)(a1 + 4365) = 1;
    if ( v15 )
    {
      v16 = (unsigned int)MmNumberOfChannels;
      v17 = (_WORD *)(a1 + 4372);
      v18 = v15;
      do
      {
        if ( (_DWORD)v16 )
        {
          v19 = v17;
          v20 = v16;
          do
          {
            *v19++ = 2056;
            --v20;
          }
          while ( v20 );
        }
        v17 += 4;
        --v18;
      }
      while ( v18 );
    }
  }
  v2 = MiPageCombiningActive(v1);
  if ( v2 != (_DWORD)v3 && !_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 4368), v3, 0) )
  {
    v4 = 0;
    if ( !KeNumberNodes )
      goto LABEL_14;
    v5 = MmNumberOfChannels;
    v6 = (_BYTE *)(v1 + 4372);
    v7 = 0LL;
    v8 = (unsigned __int16)KeNumberNodes;
    do
    {
      v9 = 0;
      if ( v5 )
      {
        v10 = v6;
        v11 = v7 + *(_QWORD *)(v1 + 40);
        do
        {
          if ( *v10 )
          {
            v12 = *v10 - v3;
            *v10 = v12;
            if ( !v12 )
            {
              v13 = MiNodeFreeZeroPages(v11, v9, 0);
              v3 = 1LL;
              if ( v13 >= 0x2000 )
                v4 = 1;
              else
                *(_WORD *)v10 = 2056;
            }
          }
          v9 += v3;
          v10 += 2;
        }
        while ( v9 < v5 );
        v1 = a1;
      }
      v7 += 1336LL;
      v6 += 8;
      v8 -= v3;
    }
    while ( v8 );
    if ( v4 == (_DWORD)v3
      && ((KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle), (v14 = *(_QWORD *)(v1 + 8)) == 0)
        ? (v4 = 0)
        : (*(_QWORD *)(v1 + 8) = v14 + 1),
          KeReleaseInStackQueuedSpinLock(&LockHandle),
          v4 == 1) )
    {
      *(_QWORD *)(v1 + 4888) = 0LL;
      *(_QWORD *)(v1 + 4904) = MiRebuildLargePages;
      *(_QWORD *)(v1 + 4912) = v1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 4888), BackgroundWorkQueue);
    }
    else
    {
LABEL_14:
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 4368));
    }
  }
}
