/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x14043DD68
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x14043CD30 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14043DE60 (PiPnpRtlGetCurrentOperation.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043EFE4 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043F934 (PiPnpRtlDisableRemoveOperationDispatch.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(int a1, __int64 a2, int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  _QWORD *v10; // rdi
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( a3 >= 6 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v11);
    if ( CurrentOperation >= 0 )
    {
      PiPnpRtlDisableRemoveOperationDispatch();
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, (unsigned int)a3, v11, &v12);
      if ( CurrentOperation >= 0 && v12 )
      {
        v10 = (_QWORD *)(v12 + 16);
        if ( *(_QWORD *)(v12 + 16)
          || (CurrentOperation = PnpOpenObjectRegKey(a1, a2, a3, 0x2000000, 0, (__int64)v10, 0LL, 0),
              CurrentOperation >= 0) )
        {
          *a4 = *v10;
        }
        else
        {
          *v10 = 0LL;
        }
      }
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return (unsigned int)CurrentOperation;
}
