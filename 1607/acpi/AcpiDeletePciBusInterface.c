/*
 * XREFs of AcpiDeletePciBusInterface @ 0x1C0090550
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0029820 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsPciDevice @ 0x1C000C35C (IsPciDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiDeletePciBusInterface(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-10h]
  char v6; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) != 0 || !*(_QWORD *)(a1 + 80) )
    return 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = *(_QWORD *)(a1 + 712);
  v5 = -1073741275;
  result = IsPciDevice(v2, (__int64)AmlisuppCompletePassive, (__int64)&Event, &v6);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = v5;
  }
  if ( (int)result >= 0 && v6 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 88), 0xFFFFFEFF);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 80) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x46706341u);
    *(_QWORD *)(a1 + 80) = 0LL;
    return 0LL;
  }
  return result;
}
