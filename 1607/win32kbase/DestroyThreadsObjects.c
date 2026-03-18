/*
 * XREFs of DestroyThreadsObjects @ 0x1C0039100
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsCleanupW32ThreadLocksSupported_0 @ 0x1C0002698 (IsCleanupW32ThreadLocksSupported_0.c)
 *     CleanupW32ThreadLocks_0 @ 0x1C0002920 (CleanupW32ThreadLocks_0.c)
 *     Is_FreeTouchInputInfoSupported_0 @ 0x1C0002928 (Is_FreeTouchInputInfoSupported_0.c)
 *     _FreeTouchInputInfo_0 @ 0x1C0002930 (_FreeTouchInputInfo_0.c)
 *     Is_FreeGestureInfoSupported_0 @ 0x1C0002938 (Is_FreeGestureInfoSupported_0.c)
 *     _FreeGestureInfo_0 @ 0x1C0002940 (_FreeGestureInfo_0.c)
 *     HMAssignmentUnlock @ 0x1C0014330 (HMAssignmentUnlock.c)
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003A784 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003A7A0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ThreadUnlock1 @ 0x1C00590B0 (ThreadUnlock1.c)
 *     DestroyCacheDCEntries @ 0x1C005C710 (DestroyCacheDCEntries.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rdi
  unsigned int v1; // ebx
  __int64 v2; // rdx
  unsigned __int8 v3; // cl
  struct tagTHREADINFO ***v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 46) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported_0() >= 0 )
    CleanupW32ThreadLocks_0();
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  v1 = 0;
  if ( *((_QWORD *)v0 + 119) )
  {
    if ( (int)Is_FreeTouchInputInfoSupported_0() >= 0 )
      FreeTouchInputInfo_0();
    *((_QWORD *)v0 + 119) = 0LL;
  }
  if ( *((_QWORD *)v0 + 120) )
  {
    if ( (int)Is_FreeGestureInfoSupported_0() >= 0 )
      FreeGestureInfo_0();
    *((_QWORD *)v0 + 120) = 0LL;
  }
  do
  {
    v2 = qword_1C011A128 + 24LL * v1;
    v3 = *(_BYTE *)(v2 + 16);
    if ( v3 )
    {
      if ( (*((_BYTE *)&unk_1C00FEE4C + 16 * v3) & 2) != 0 )
      {
        if ( v3 == 2 )
        {
          v4 = (struct tagTHREADINFO ***)(*(_QWORD *)v2 + 72LL);
          if ( *v4 )
          {
            if ( (*v4)[2] == v0 )
              HMAssignmentUnlock((_DWORD **)v4);
          }
        }
      }
      else if ( *(struct tagTHREADINFO **)(v2 + 8) == v0 && (*(_BYTE *)(v2 + 17) & 1) == 0 )
      {
        HMDestroyUnlockedObject(qword_1C011A128 + 24LL * v1);
      }
    }
    ++v1;
  }
  while ( v1 <= giheLast );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
}
