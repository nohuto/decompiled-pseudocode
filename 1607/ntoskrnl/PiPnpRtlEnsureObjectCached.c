/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x14062EA84
 * Callers:
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1404E4568 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1404E4B54 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, wchar_t *a2)
{
  int Object; // eax
  int v4; // edi
  signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rcx
  signed __int64 v8; // rtt
  ULONG_PTR v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v18 = 0LL;
  Object = PiDmGetObject(1LL, (__int64)a2, &BugCheckParameter2);
  v4 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v4 = PiDmAddCacheReferenceForObject(1u, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        v5 = (signed __int64 *)BugCheckParameter2;
        PiDmObjectAcquireExclusiveLock((unsigned __int64 *)BugCheckParameter2);
        *((_DWORD *)v5 + 8) |= 1u;
        _m_prefetchw(v5);
        v6 = *v5;
        v7 = (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 ? 0LL : v6 - 16;
        if ( (v6 & 2) != 0
          || (v8 = *v5, v8 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v7, v6)) )
        {
          v9 = BugCheckParameter2;
          ExfReleasePushLock((_QWORD *)BugCheckParameter2);
        }
        else
        {
          v9 = BugCheckParameter2;
        }
        KeAbPostRelease(v9);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
        if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) >= 0 )
        {
          PiPnpRtlDisableRemoveOperationDispatch();
          v13 = PiPnpRtlObjectEventCreate(a2, 1u, (__int64)P, &v18);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
          if ( v13 >= 0 && v18 )
            *(_DWORD *)(v18 + 4) |= 1u;
          PiPnpRtlEndOperation((char *)P);
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  return (unsigned int)v4;
}
