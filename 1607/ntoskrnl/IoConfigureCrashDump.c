/*
 * XREFs of IoConfigureCrashDump @ 0x140142EA0
 * Callers:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     PoShutdownBugCheck @ 0x14066E8B4 (PoShutdownBugCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140143020 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x140143058 (IopReadDumpRegistry.c)
 *     IopDisableCrashDump @ 0x140143124 (IopDisableCrashDump.c)
 *     IopInitDumpCapsuleSupport @ 0x14014B880 (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     IopInitializeCrashDump @ 0x140569208 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x14065B338 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(int a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rsi
  int v9; // ebx
  void *PageFileForCrashDump; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING v13; // [rsp+30h] [rbp-68h]
  WCHAR SourceString[32]; // [rsp+40h] [rbp-58h] BYREF

  wcscpy(SourceString, L"C:\\pagefile.sys");
  memset(&SourceString[16], 0, 0x20uLL);
  if ( !a2 )
    IopReadDumpRegistry(v5, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    if ( !ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    {
      v9 = -1073741823;
      goto LABEL_20;
    }
    v9 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
    goto LABEL_18;
  }
  if ( a1 == 1 )
  {
    if ( ForceDumpDisabled )
    {
      v9 = -1073741637;
      goto LABEL_20;
    }
    PageFileForCrashDump = (void *)MmGetPageFileForCrashDump();
    if ( !PageFileForCrashDump )
    {
      v9 = -1073741772;
      goto LABEL_20;
    }
    ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
    v9 = IopDisableCrashDump();
    if ( v9 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v13 = DestinationString;
      *DestinationString.Buffer = *NtSystemRoot.Buffer;
      if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
      {
        IopRemoveDumpCapsuleSupport();
        v9 = 0;
      }
      else
      {
        if ( CapsuleDumpAllowed )
          IopInitDumpCapsuleSupport();
        v9 = -1073741823;
      }
    }
LABEL_18:
    ExReleaseResourceLite(&IopCrashDumpLock);
    goto LABEL_20;
  }
  v9 = -1073741808;
LABEL_20:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4, v6, v7);
  return (unsigned int)v9;
}
