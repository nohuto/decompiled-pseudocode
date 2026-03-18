/*
 * XREFs of IopDeviceRemovalForResetComplete @ 0x14060263C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     RtlUnicodeStringCopyString @ 0x1401BEE9C (RtlUnicodeStringCopyString.c)
 *     Template_hzr0qqhzr4 @ 0x1401BF014 (Template_hzr0qqhzr4.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopFreeResetRemovalContext @ 0x140602764 (IopFreeResetRemovalContext.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x14061441C (PnpTraceDeviceRemovalForResetComplete.c)
 */

BOOLEAN __fastcall IopDeviceRemovalForResetComplete(PKTIMER Timer, const wchar_t *a2)
{
  int Flink_high; // edi
  __int64 v4; // rax
  __int64 v5; // r10
  struct _LIST_ENTRY *Blink; // rax
  NTSTATUS v7; // eax

  if ( !Timer )
    __fastfail(5u);
  Flink_high = HIDWORD(Timer[2].TimerListEntry.Flink);
  if ( Flink_high >= 0 || !LODWORD(Timer[2].TimerListEntry.Flink) )
  {
    v4 = *(_QWORD *)&Timer[2].Processor;
    v5 = v4 ? *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) : 0LL;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    {
      Blink = Timer[2].TimerListEntry.Blink;
      Template_hzr0qqhzr4(
        (__int64)Blink[3].Blink,
        (__int64)Blink[3].Flink,
        (unsigned __int64)Blink[3].Blink->Flink >> 1,
        *(_WORD *)(v5 + 40) >> 1,
        *(_QWORD *)(v5 + 48),
        Flink_high,
        (char)Blink[3].Flink->Flink,
        (unsigned __int64)Blink[3].Blink->Flink >> 1,
        (__int64)Blink[3].Blink->Blink);
    }
  }
  if ( Flink_high >= 0 || LODWORD(Timer[2].Dpc) >= PnpResetMaximumRetryAttempts )
  {
    PnpTraceDeviceRemovalForResetComplete(Timer);
    return IopFreeResetRemovalContext(Timer);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Timer[2].TimerListEntry.Blink[4], 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(Timer[2].TimerListEntry.Blink, 0x4B706E50u);
    Timer[2].TimerListEntry.Blink = 0LL;
    Timer[3].Header.LockNV = 0;
    v7 = RtlUnicodeStringCopyString((PUNICODE_STRING)&Timer[3].Header.WaitListHead, a2);
    ++LODWORD(Timer[2].Dpc);
    LODWORD(Timer[2].TimerListEntry.Flink) = v7;
    return KeSetTimer(Timer, PnpResetRetryInterval, (PKDPC)&Timer[1]);
  }
}
