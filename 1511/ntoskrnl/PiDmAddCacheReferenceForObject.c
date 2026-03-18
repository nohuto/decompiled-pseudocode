/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x1404E5114
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405199A0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x14051B57C (PiDmListInitEnumCallback.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140604BD0 (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x14008FEB0 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400904D0 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmInitializeComparisonObject @ 0x14043D548 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14043D718 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404B08D4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmObjectCreate @ 0x14051B290 (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(unsigned int a1, wchar_t *a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rbx
  void *ObjectManagerForObjectType; // r15
  NTSTATUS v8; // edi
  PVOID *v9; // rax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *Buffer; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v15[112]; // [rsp+50h] [rbp-59h] BYREF

  NodeOrParent = 0LL;
  v3 = 0LL;
  Buffer = v15;
  P = 0LL;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock((struct _ERESOURCE *)ObjectManagerForObjectType);
  v8 = PiDmInitializeComparisonObject(a2, a1, (__int64)v15);
  if ( v8 >= 0 )
  {
    v9 = (PVOID *)RtlLookupElementGenericTableFullAvl(
                    (PRTL_AVL_TABLE)ObjectManagerForObjectType + 1,
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
                  (PRTL_AVL_TABLE)ObjectManagerForObjectType + 1,
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
