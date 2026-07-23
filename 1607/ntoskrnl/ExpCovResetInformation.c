/*
 * XREFs of ExpCovResetInformation @ 0x1406B7B6C
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquirePushLockExclusive @ 0x1400C5F04 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlDuplicateUnicodeString @ 0x1403F6E40 (RtlDuplicateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1406B6EBC (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1406B7058 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x1406B79F0 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(unsigned __int64 a1, unsigned int a2)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
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
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
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
        ExfReleasePushLock(&ExpCovPushLock);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeAnsiString(&StringOut);
  return (unsigned int)v3;
}
