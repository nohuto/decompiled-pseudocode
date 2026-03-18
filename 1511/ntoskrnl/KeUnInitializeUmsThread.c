/*
 * XREFs of KeUnInitializeUmsThread @ 0x14061B3D4
 * Callers:
 *     PspDetachThreadFromUmsCompletionList @ 0x1401F5784 (PspDetachThreadFromUmsCompletionList.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspUmsUnInitThread @ 0x140641318 (PspUmsUnInitThread.c)
 * Callees:
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     KeSetCurrentUmsTeb @ 0x1401CCDE0 (KeSetCurrentUmsTeb.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeUnInitializeUmsThread(__int64 a1)
{
  char v1; // al
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8

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
    LOBYTE(v4) = 1;
    KeRundownQueueEx((__int64)v3 + 32, v4, v5);
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x1Fu);
    goto LABEL_5;
  }
  return 3221227292LL;
}
