/*
 * XREFs of FsRtlStackOverflowRead @ 0x1401ADEE8
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall FsRtlStackOverflowRead(PVOID P)
{
  struct _KTHREAD *result; // rax

  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
  (*((void (__fastcall **)(_QWORD, _QWORD))P + 4))(*((_QWORD *)P + 5), *((_QWORD *)P + 6));
  if ( P == &StackOverflowFallback )
    KeSetEvent(&StackOverflowFallbackSerialEvent, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  result[1].ApcState.ApcListHead[0].Flink = 0LL;
  return result;
}
