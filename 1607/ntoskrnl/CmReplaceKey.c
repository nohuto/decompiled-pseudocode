/*
 * XREFs of CmReplaceKey @ 0x1405FE1B0
 * Callers:
 *     NtReplaceKey @ 0x1405FA3C0 (NtReplaceKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x14015AB50 (ZwFlushBuffersFile.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpCmdHiveOpen @ 0x1404A4CD8 (CmpCmdHiveOpen.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpCmdRenameHive @ 0x140603608 (CmpCmdRenameHive.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 *     CmpPreserveSystemHiveData @ 0x140609204 (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter2, __int64 a2, UNICODE_STRING *a3)
{
  __int64 result; // rax
  HANDLE *Pointer; // rsi
  NTSTATUS v6; // ebx
  int v7; // eax
  int v8; // ecx
  _BYTE v9[8]; // [rsp+40h] [rbp-248h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-240h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+60h] [rbp-228h] BYREF

  v9[0] = 0;
  result = CmpCmdHiveOpen(a3, 0, v9, &IoStatusBlock, 17367041, 0, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    CmpLockRegistry();
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    Pointer = (HANDLE *)IoStatusBlock.Pointer;
    while ( 1 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 4) != 0 )
      {
        v6 = -1073741611;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0 )
      {
        v6 = -1073741811;
        goto LABEL_9;
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
        goto LABEL_9;
      }
      CmpLockRegistry();
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    }
    if ( BugCheckParameter2 == qword_1402F2E60 )
    {
      v6 = CmpPreserveSystemHiveData(BugCheckParameter2, Pointer);
      if ( v6 < 0 )
        goto LABEL_9;
      if ( !(unsigned __int8)HvSyncHive((ULONG_PTR)Pointer) )
        goto LABEL_17;
    }
    v6 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter2 + 2664), ObjectInformation, 0);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 144) |= 4u;
      v6 = CmpCmdRenameHive(Pointer[333], 0LL, 0);
      if ( v6 >= 0 )
      {
        v6 = ZwFlushBuffersFile(Pointer[333], &IoStatusBlock);
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
LABEL_17:
        v6 = -1073741492;
      }
    }
LABEL_9:
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
    CmpDestroySecurityCache((__int64)Pointer);
    CmpUnJoinClassOfTrust((__int64)Pointer);
    HvFreeHive((__int64)Pointer, 1);
    if ( v6 < 0 )
      CmpCmdHiveClose((__int64)Pointer);
    CmpDereferenceHive((__int64)Pointer);
    return (unsigned int)v6;
  }
  return result;
}
