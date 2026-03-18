/*
 * XREFs of PopBatteryRemove @ 0x14066F320
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x1400A2054 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x140131898 (PopBatteryQueueWork.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14056DEF8 (PopChangeCapability.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // [rsp+50h] [rbp+8h] BYREF

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
    --dword_140303674;
    ++dword_1403036D8;
    byte_140303678 = 1;
    PopBatteryQueueWork(3u);
  }
  PopReleaseRwLock(PopCB);
  if ( !--dword_140303670 )
  {
    PopAcquirePolicyLock();
    PopChangeCapability(&byte_140303F7E, 0LL);
    PopReleasePolicyLock();
  }
  if ( !dword_140303674 )
  {
    v5 = 0;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_DISCHARGING, (__int64)&v5, 4LL);
  }
}
