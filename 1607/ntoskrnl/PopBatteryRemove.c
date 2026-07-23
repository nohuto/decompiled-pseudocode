/*
 * XREFs of PopBatteryRemove @ 0x14066F404
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140131E08 (PopBatteryQueueWork.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14056E438 (PopChangeCapability.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)PopCB);
  v2 = (_QWORD *)(a1 + 64);
  if ( *v2 )
  {
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_1403035B4;
    ++dword_140303618;
    byte_1403035B8 = 1;
    PopBatteryQueueWork(3u);
  }
  PopReleaseRwLock(PopCB);
  if ( !--dword_1403035B0 )
  {
    PopAcquirePolicyLock();
    PopChangeCapability(&byte_140303EBE, 0LL);
    PopReleasePolicyLock();
  }
  if ( !dword_1403035B4 )
  {
    Buffer = 0;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &Buffer, 4u, 0LL, 0LL, 0, 0);
  }
}
