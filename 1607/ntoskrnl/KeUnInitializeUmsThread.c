/*
 * XREFs of KeUnInitializeUmsThread @ 0x1406507C8
 * Callers:
 *     PspDetachThreadFromUmsCompletionList @ 0x14020F318 (PspDetachThreadFromUmsCompletionList.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 *     PspUmsUnInitThread @ 0x14067F7E0 (PspUmsUnInitThread.c)
 * Callees:
 *     KeRundownQueueEx @ 0x1400F49A8 (KeRundownQueueEx.c)
 *     KeSetCurrentUmsTeb @ 0x1401DC890 (KeSetCurrentUmsTeb.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeUnInitializeUmsThread(__int64 a1)
{
  char v1; // al
  void *v3; // rdi

  v1 = *(_BYTE *)(a1 + 3);
  v3 = *(void **)(a1 + 496);
  if ( (v1 & 0x40) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x1Eu);
LABEL_5:
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    return 0LL;
  }
  if ( v1 < 0 )
  {
    KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
    KeRundownQueueEx((__int64)v3 + 32, 1);
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x1Fu);
    goto LABEL_5;
  }
  return 3221227292LL;
}
