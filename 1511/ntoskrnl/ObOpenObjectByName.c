/*
 * XREFs of ObOpenObjectByName @ 0x140422190
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     NtOpenMutant @ 0x140421FEC (NtOpenMutant.c)
 *     NtOpenDirectoryObject @ 0x140422090 (NtOpenDirectoryObject.c)
 *     NtOpenSection @ 0x140422110 (NtOpenSection.c)
 *     CmCreateKey @ 0x140422220 (CmCreateKey.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     NtOpenEvent @ 0x1404A5B6C (NtOpenEvent.c)
 *     NtOpenSymbolicLinkObject @ 0x1404A64D0 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSemaphore @ 0x1404B5C40 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1404EADB8 (NtOpenSession.c)
 *     IopReferenceDriverObjectByName @ 0x140503DA0 (IopReferenceDriverObjectByName.c)
 *     CmpCreatePredefined @ 0x14051F818 (CmpCreatePredefined.c)
 *     CmpDoReOpenTransKey @ 0x1405ED434 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x1405FA608 (NtOpenIoCompletion.c)
 *     NtOpenPartition @ 0x140624F18 (NtOpenPartition.c)
 *     NtOpenJobObject @ 0x140641B48 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x14066CF38 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140675C24 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        struct _OBJECT_TYPE *a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        void *a6,
        _QWORD *a7)
{
  _QWORD *CurrentServerSilo; // r14
  __int64 result; // rax
  unsigned int v13; // ebx

  CurrentServerSilo = PsGetCurrentServerSilo();
  result = ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, (__int64)CurrentServerSilo, a7);
  v13 = result;
  if ( CurrentServerSilo )
  {
    ObDereferenceObject(CurrentServerSilo);
    return v13;
  }
  return result;
}
