/*
 * XREFs of PopBatteryRemove @ 0x140636F3C
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x14011B90C (PopBatteryQueueWork.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14053DEF8 (PopChangeCapability.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((__int64)&PopCB);
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
    --dword_1402DE3D4;
    ++dword_1402DE438;
    byte_1402DE3D8 = 1;
    PopBatteryQueueWork(3u);
  }
  PopReleaseRwLock((signed __int64 *)&PopCB);
  if ( !--dword_1402DE3D0 )
  {
    PopAcquirePolicyLock();
    PopChangeCapability(&byte_1402DDF7E, 0LL);
    PopReleasePolicyLock();
  }
}
