/*
 * XREFs of ExpCovResetInformation @ 0x1406F9818
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusive @ 0x1400F30D4 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404FEFE8 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1406F8ABC (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1406F8C58 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x1406F96A8 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(ULONG64 a1, unsigned int a2)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rdx
  __int64 *i; // rdi
  __int64 *v9; // r14
  int v10; // [rsp+20h] [rbp-A8h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-90h] BYREF
  __int64 v13; // [rsp+48h] [rbp-80h]
  _BYTE v14[16]; // [rsp+50h] [rbp-78h] BYREF
  UNICODE_STRING StringOut; // [rsp+60h] [rbp-68h] BYREF
  __int128 v16; // [rsp+70h] [rbp-58h]
  int v17; // [rsp+80h] [rbp-48h]
  __int128 v18; // [rsp+90h] [rbp-38h] BYREF

  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  StringOut.Length = 0;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v12 = *(_OWORD *)a1;
  v13 = *(_QWORD *)(a1 + 16);
  v3 = ExpCovReadRequestBuffer((int *)&v12, &StringIn, &v18, &v10);
  if ( v3 >= 0 )
  {
    v17 = v10;
    v16 = v18;
    if ( !StringIn.Buffer || (v3 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v3 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v3 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovResetInfoCallBack, (__int64)v14);
      if ( v3 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
        for ( i = (__int64 *)ExpCovUnloadedModuleList; i != &ExpCovUnloadedModuleList; i = (__int64 *)*i )
        {
          v9 = i;
          if ( i[7] && ExpCovIsUnLoadedModulePresent((__int64)i, v10, &StringIn, &v18) )
          {
            i = (__int64 *)i[1];
            ExpCovDeleteUnloadedModuleEntry(v9);
          }
        }
        ExfReleasePushLock(&ExpCovPushLock, v7);
      }
      v5 = KeGetCurrentThread();
      v6 = v5->KernelApcDisable + 1;
      v5->KernelApcDisable = v6;
      if ( !v6
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
        && !v5->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeAnsiString(&StringOut);
  return (unsigned int)v3;
}
