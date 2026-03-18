/*
 * XREFs of CmReplaceKey @ 0x1406558CC
 * Callers:
 *     NtReplaceKey @ 0x140651088 (NtReplaceKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x14017F950 (ZwFlushBuffersFile.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     CmpCmdRenameHive @ 0x14065AD80 (CmpCmdRenameHive.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter2, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  signed __int8 v15; // cf
  __int64 v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  signed __int64 v19; // rcx
  ULONG_PTR v20; // rtt
  _BYTE v21[8]; // [rsp+40h] [rbp-248h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-240h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-238h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+60h] [rbp-228h] BYREF

  v21[0] = 0;
  result = CmpCmdHiveOpen(a3, 0, (__int64)v21, (__int64)&BugCheckParameter2a, 17367041, 0, 0LL, 0LL);
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
    if ( BugCheckParameter2 == qword_1403168C0 )
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
    v11 = (_QWORD *)(v5 + 5368);
    if ( (_QWORD *)*v11 != v11 )
    {
      v12 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v10);
      v15 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v16 = v12;
      if ( v15 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v12, (ULONG_PTR)&CmpHiveListHeadLock, v14);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v17 = *v11;
      v18 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v18 != v11 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      _m_prefetchw(&CmpHiveListHeadLock);
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      else
        v19 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v20 = CmpHiveListHeadLock,
            v20 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v19,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock, v13);
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
