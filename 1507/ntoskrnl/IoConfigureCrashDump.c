/*
 * XREFs of IoConfigureCrashDump @ 0x14016BF80
 * Callers:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     PoShutdownBugCheck @ 0x1406B5E1C (PoShutdownBugCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14016C07C (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x14016C0B4 (IopReadDumpRegistry.c)
 *     IopDisableCrashDump @ 0x14016C180 (IopDisableCrashDump.c)
 *     IopInitDumpCapsuleSupport @ 0x14016FFFC (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopInitializeCrashDump @ 0x1405B5294 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x1406A54C8 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(int a1, char a2)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // ebx
  __int16 v7; // ax
  void *PageFileForCrashDump; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING v11; // [rsp+30h] [rbp-68h]
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
      v11 = DestinationString;
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
  v7 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v6;
}
