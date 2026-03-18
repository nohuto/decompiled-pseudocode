/*
 * XREFs of DestroyThreadsObjects @ 0x1C004FEC0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsCleanupW32ThreadLocksSupported_0 @ 0x1C00026C8 (IsCleanupW32ThreadLocksSupported_0.c)
 *     CleanupW32ThreadLocks_0 @ 0x1C00028F0 (CleanupW32ThreadLocks_0.c)
 *     Is_FreeTouchInputInfoSupported_0 @ 0x1C00028F8 (Is_FreeTouchInputInfoSupported_0.c)
 *     _FreeTouchInputInfo_0 @ 0x1C0002900 (_FreeTouchInputInfo_0.c)
 *     Is_FreeGestureInfoSupported_0 @ 0x1C0002908 (Is_FreeGestureInfoSupported_0.c)
 *     _FreeGestureInfo_0 @ 0x1C0002910 (_FreeGestureInfo_0.c)
 *     HMAssignmentUnlock @ 0x1C004EFD0 (HMAssignmentUnlock.c)
 *     HMDestroyUnlockedObject @ 0x1C004F7B0 (HMDestroyUnlockedObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004FFC4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004FFE0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyCacheDCEntries @ 0x1C00502A4 (DestroyCacheDCEntries.c)
 *     ThreadUnlock1 @ 0x1C0052B70 (ThreadUnlock1.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rdi
  unsigned int v1; // ebx
  unsigned __int8 v2; // dl
  __int64 v3; // rcx
  struct tagTHREADINFO ***v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 47) )
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
    v2 = *(_BYTE *)(qword_1C01003E8 + 24LL * v1 + 16);
    v3 = qword_1C01003E8 + 24LL * v1;
    if ( v2 )
    {
      if ( (*((_BYTE *)&unk_1C00E9F6C + 16 * v2) & 2) != 0 )
      {
        if ( v2 == 2 )
        {
          v4 = (struct tagTHREADINFO ***)(*(_QWORD *)v3 + 72LL);
          if ( *v4 )
          {
            if ( (*v4)[2] == v0 )
              HMAssignmentUnlock((_DWORD **)v4);
          }
        }
      }
      else if ( *(struct tagTHREADINFO **)(v3 + 8) == v0 && (*(_BYTE *)(v3 + 17) & 1) == 0 )
      {
        HMDestroyUnlockedObject((unsigned __int8 *)v3);
      }
    }
    ++v1;
  }
  while ( v1 <= giheLast );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
}
