/*
 * XREFs of CmReplaceKey @ 0x1405DFF68
 * Callers:
 *     NtReplaceKey @ 0x1405DC458 (NtReplaceKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x140150F80 (ZwFlushBuffersFile.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     CmpCmdRenameHive @ 0x1405E3C50 (CmpCmdRenameHive.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int16 *a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r8
  _QWORD *v10; // rdi
  __int64 v11; // rax
  signed __int8 v12; // cf
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  _BYTE v18[8]; // [rsp+40h] [rbp-248h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-240h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-238h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+60h] [rbp-228h] BYREF

  v18[0] = 0;
  result = CmpCmdHiveOpen(a3, 0, v18, &BugCheckParameter2a, 0x1000001u, 0, 0LL);
  if ( (int)result >= 0 )
  {
    while ( 1 )
    {
      CmpLockRegistry();
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
      v5 = BugCheckParameter2a;
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 4) != 0 )
      {
        v6 = -1073741611;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
      {
        v6 = -1073741811;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) == 0 )
        break;
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      if ( (int)CmpFlushHive(BugCheckParameter2, 4u) < 0 )
      {
        v6 = -1073741670;
        CmpLockRegistry();
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        goto LABEL_21;
      }
    }
    if ( BugCheckParameter2 == qword_1402C77F0 )
    {
      v6 = CmpPreserveSystemHiveData(BugCheckParameter2, BugCheckParameter2a);
      if ( v6 < 0 )
        goto LABEL_21;
      if ( !(unsigned __int8)HvSyncHive(v5) )
        goto LABEL_10;
    }
    v6 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), ObjectInformation, 0);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 144) |= 4u;
      v6 = CmpCmdRenameHive(*(HANDLE *)(v5 + 2664), 0LL, 0);
      if ( v6 >= 0 )
      {
        v6 = ZwFlushBuffersFile(*(HANDLE *)(v5 + 2664), &IoStatusBlock);
        if ( v6 < 0 )
        {
          v7 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), 0LL, 0);
          v8 = v6;
          if ( v7 < 0 )
            v8 = -1073741492;
          v6 = v8;
        }
      }
      else if ( (int)CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), 0LL, 0) < 0 )
      {
LABEL_10:
        v6 = -1073741492;
      }
    }
LABEL_21:
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
    CmpDestroySecurityCache(v5);
    v10 = (_QWORD *)(v5 + 5368);
    if ( (_QWORD *)*v10 != v10 )
    {
      v11 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v13 = v11;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v11, (ULONG_PTR)&CmpHiveListHeadLock);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v14 = *v10;
      v15 = (_QWORD *)v10[1];
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v15 != v10 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      _m_prefetchw(&CmpHiveListHeadLock);
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      else
        v16 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v17 = CmpHiveListHeadLock,
            v17 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v16,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
      v5 = BugCheckParameter2a;
    }
    HvFreeHive(v5, 1, v9);
    if ( v6 < 0 )
      CmpCmdHiveClose(v5);
    CmpDereferenceHive(v5);
    return (unsigned int)v6;
  }
  return result;
}
