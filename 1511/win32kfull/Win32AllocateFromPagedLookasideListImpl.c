/*
 * XREFs of Win32AllocateFromPagedLookasideListImpl @ 0x1C00C4880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D47DC (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct _SLIST_ENTRY *__fastcall Win32AllocateFromPagedLookasideListImpl(PSLIST_HEADER ListHead)
{
  PVOID v2; // rbp
  struct _SLIST_ENTRY *v3; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  ++*((_DWORD *)&ListHead[2].HeaderX64 + 1);
  v2 = gpLeakTrackingAllocator;
  v3 = ExpInterlockedPopEntrySList(ListHead + 1);
  if ( !v3 )
  {
    ++*((_DWORD *)&ListHead[2].HeaderX64 + 2);
    v3 = (struct _SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ListHead[4].Alignment)(
                                  *((unsigned int *)&ListHead[3].HeaderX64 + 1),
                                  *((unsigned int *)&ListHead[3].HeaderX64 + 3),
                                  *((unsigned int *)&ListHead[3].HeaderX64 + 2));
  }
  if ( !LOBYTE(ListHead->Alignment) )
    return v3;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                          v2,
                          v3,
                          BackTrace) )
    return v3 + 1;
  ++*((_DWORD *)&ListHead[1].HeaderX64 + 3);
  if ( ExQueryDepthSList(ListHead) < LOWORD(ListHead[1].Alignment) )
  {
    ExpInterlockedPushEntrySList(ListHead, v3);
  }
  else
  {
    ++LODWORD(ListHead[2].Alignment);
    ((void (__fastcall *)(struct _SLIST_ENTRY *))ListHead[3].Region)(v3);
  }
  return 0LL;
}
