/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x1404E2934
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404E18C0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1404E2A30 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1404E4568 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1404E4B54 (PiPnpRtlDisableRemoveOperationDispatch.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(__int64 a1, __int64 a2, signed int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  if ( a3 >= 6 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v14);
    if ( CurrentOperation >= 0 )
    {
      PiPnpRtlDisableRemoveOperationDispatch();
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, (unsigned int)a3, v14, &v15);
      if ( CurrentOperation >= 0 && v15 )
      {
        v10 = (_QWORD *)(v15 + 16);
        if ( *(_QWORD *)(v15 + 16)
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
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
    }
  }
  return (unsigned int)CurrentOperation;
}
