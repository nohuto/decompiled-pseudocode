/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x1404E9218
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x14054D4C0 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062EA84 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EEF4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1400C1D30 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400C2150 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmInitializeComparisonObject @ 0x1404E20C8 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404E2298 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404E9300 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmObjectCreate @ 0x14056471C (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(unsigned int a1, wchar_t *a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rbx
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // r15
  NTSTATUS v8; // edi
  PVOID *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *Buffer; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v18[112]; // [rsp+50h] [rbp-59h] BYREF

  NodeOrParent = 0LL;
  v3 = 0LL;
  Buffer = v18;
  P = 0LL;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock(ObjectManagerForObjectType);
  v8 = PiDmInitializeComparisonObject(a2, a1, (__int64)v18);
  if ( v8 >= 0 )
  {
    v9 = (PVOID *)RtlLookupElementGenericTableFullAvl(
                    ObjectManagerForObjectType + 1,
                    &Buffer,
                    &NodeOrParent,
                    &SearchResult);
    if ( v9 )
      v3 = (volatile signed __int32 *)*v9;
    P = (PVOID)v3;
    if ( v3 )
    {
      ++*((_DWORD *)v3 + 3);
    }
    else
    {
      v8 = PiDmObjectCreate(a1, a2, &P);
      if ( v8 < 0 )
      {
        v3 = (volatile signed __int32 *)P;
      }
      else if ( RtlInsertElementGenericTableFullAvl(
                  ObjectManagerForObjectType + 1,
                  &P,
                  8u,
                  0LL,
                  NodeOrParent,
                  SearchResult) )
      {
        v3 = (volatile signed __int32 *)P;
        *((_DWORD *)P + 3) = 1;
      }
      else
      {
        PiDmObjectRelease((unsigned int *)P);
        v3 = 0LL;
        v8 = -1073741670;
        P = 0LL;
      }
    }
  }
  if ( a3 )
  {
    *a3 = v3;
    if ( v3 )
      _InterlockedIncrement(v3 + 2);
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return (unsigned int)v8;
}
