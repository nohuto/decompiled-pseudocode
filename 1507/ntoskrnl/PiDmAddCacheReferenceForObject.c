/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x1404E066C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14058DD9C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x140595210 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14067F934 (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x140018038 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x140019660 (RtlInsertElementGenericTableFullAvl.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmInitializeComparisonObject @ 0x1404399D0 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140439B88 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1404E07D0 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmObjectCreate @ 0x1405AC0E8 (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(unsigned int a1, wchar_t *a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rbx
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // r15
  NTSTATUS v8; // edi
  PVOID *v9; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *Buffer; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v17[112]; // [rsp+50h] [rbp-59h] BYREF

  v3 = 0LL;
  Buffer = v17;
  P = 0LL;
  NodeOrParent = 0LL;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock(ObjectManagerForObjectType);
  v8 = PiDmInitializeComparisonObject(a2, a1, (__int64)v17);
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
  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v8;
}
