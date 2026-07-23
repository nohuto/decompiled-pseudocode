/*
 * XREFs of MiRemovePteTracker @ 0x1401FC81C
 * Callers:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmFreeMappingAddress @ 0x14052C764 (MmFreeMappingAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiRemovePteTracker(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, ULONG_PTR a3)
{
  _SLIST_ENTRY *v5; // rsi
  ULONG_PTR v6; // r14
  unsigned int v7; // ebx
  _SLIST_ENTRY *v8; // rdx
  _SLIST_ENTRY *Next; // r8
  _SLIST_ENTRY *v10; // rcx
  _SLIST_ENTRY *v11; // rcx
  _SLIST_ENTRY **v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = ((unsigned __int8)(95 * (a2 >> 12)) ^ (unsigned __int8)((40543 * (unsigned __int64)(unsigned int)(a2 >> 12)) >> 32)) & 0xF;
  KeAcquireInStackQueuedSpinLock(&qword_140327450, &LockHandle);
  v8 = (_SLIST_ENTRY *)((char *)&unk_140327DD0 + 16 * v7);
  Next = v8->Next;
  if ( v8->Next == v8 )
    goto LABEL_16;
  do
  {
    v10 = Next[2].Next;
    if ( v6 == ((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v5 )
        KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)Next, BugCheckParameter3, (ULONG_PTR)v5);
      if ( *((_QWORD *)&Next[1].Next + 1) != a3 )
        KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)Next, *((_QWORD *)&Next[1].Next + 1), a3);
      if ( BugCheckParameter3 && (*(_WORD *)(BugCheckParameter3 + 10) & 0x200) == 0 )
      {
        if ( *((_QWORD *)&Next[3].Next + 1) != *(_QWORD *)(BugCheckParameter3 + 48) )
          KeBugCheckEx(
            0xDAu,
            4uLL,
            (ULONG_PTR)Next,
            *((_QWORD *)&Next[3].Next + 1),
            *(_QWORD *)(BugCheckParameter3 + 48));
        if ( !byte_1403276B0 )
        {
          if ( v10 != *(_SLIST_ENTRY **)(BugCheckParameter3 + 24) )
            KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)Next, (ULONG_PTR)Next[2].Next, *(_QWORD *)(BugCheckParameter3 + 24));
          if ( *((_QWORD *)&Next[2].Next + 1) != *(_QWORD *)(BugCheckParameter3 + 32) )
            KeBugCheckEx(
              0xDAu,
              5uLL,
              (ULONG_PTR)Next,
              *((_QWORD *)&Next[2].Next + 1),
              *(_QWORD *)(BugCheckParameter3 + 32));
        }
      }
      v11 = Next->Next;
      v12 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
      if ( *(&Next->Next->Next + 1) != Next || *v12 != Next )
        __fastfail(3u);
      *v12 = v11;
      v5 = Next;
      *((_QWORD *)&v11->Next + 1) = v12;
    }
    Next = Next->Next;
  }
  while ( Next != v8 );
  if ( !v5 )
  {
LABEL_16:
    if ( !byte_1403275A4 )
      KeBugCheckEx(0xDAu, 6uLL, BugCheckParameter3, v6, a3);
  }
  qword_140327ED0 -= a3;
  --qword_140327ED8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
    RtlpInterlockedPushEntrySList(&stru_140327440, v5);
}
