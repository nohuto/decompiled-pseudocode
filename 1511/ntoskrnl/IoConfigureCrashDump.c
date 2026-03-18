/*
 * XREFs of IoConfigureCrashDump @ 0x14013A5A8
 * Callers:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     PoShutdownBugCheck @ 0x14063650C (PoShutdownBugCheck.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14013A67C (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x14013A6B4 (IopReadDumpRegistry.c)
 *     IopDisableCrashDump @ 0x14013A780 (IopDisableCrashDump.c)
 *     IopInitDumpCapsuleSupport @ 0x140141FF0 (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopInitializeCrashDump @ 0x140538978 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x140625A8C (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(int a1, char a2)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  int v6; // ebx
  void *PageFileForCrashDump; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING v10; // [rsp+30h] [rbp-68h]
  WCHAR SourceString[32]; // [rsp+40h] [rbp-58h] BYREF

  wcscpy(SourceString, L"C:\\pagefile.sys");
  memset(&SourceString[16], 0, 0x20uLL);
  if ( !a2 )
    IopReadDumpRegistry(v4, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v6 = -1073741808;
      goto LABEL_7;
    }
    PageFileForCrashDump = (void *)MmGetPageFileForCrashDump();
    if ( !PageFileForCrashDump )
    {
      v6 = -1073741772;
      goto LABEL_7;
    }
    ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
    v6 = IopDisableCrashDump();
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v10 = DestinationString;
      *DestinationString.Buffer = *NtSystemRoot.Buffer;
      if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
      {
        IopRemoveDumpCapsuleSupport();
        v6 = 0;
      }
      else
      {
        IopInitDumpCapsuleSupport();
        v6 = -1073741823;
      }
    }
  }
  else
  {
    if ( !ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    {
      v6 = -1073741823;
      goto LABEL_7;
    }
    v6 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
LABEL_7:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v6;
}
