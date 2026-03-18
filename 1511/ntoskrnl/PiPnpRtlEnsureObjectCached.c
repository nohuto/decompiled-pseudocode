/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x140604BD0
 * Callers:
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043EFE4 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043F934 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E5114 (PiDmAddCacheReferenceForObject.c)
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
  int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v12 = 0LL;
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
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) >= 0 )
        {
          PiPnpRtlDisableRemoveOperationDispatch();
          v10 = PiPnpRtlObjectEventCreate(a2, 1u, (__int64)P, &v12);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v10 >= 0 && v12 )
            *(_DWORD *)(v12 + 4) |= 1u;
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
