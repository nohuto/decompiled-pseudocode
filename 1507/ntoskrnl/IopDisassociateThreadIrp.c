/*
 * XREFs of IopDisassociateThreadIrp @ 0x1401F2104
 * Callers:
 *     IoCancelThreadIo @ 0x140420E38 (IoCancelThreadIo.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoWriteErrorLogEntry @ 0x1401595B8 (IoWriteErrorLogEntry.c)
 *     IoAllocateErrorLogEntry @ 0x140159BD4 (IoAllocateErrorLogEntry.c)
 */

LONG_PTR IopDisassociateThreadIrp()
{
  unsigned __int8 CurrentIrql; // si
  void **p_FirstArgument; // rdi
  LONG_PTR result; // rax
  KIRQL v3; // al
  KIRQL v4; // bp
  __int64 v5; // rbx
  void *v6; // rcx
  __int64 *v7; // rcx
  __int64 **v8; // rax
  __int64 **v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rbx
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  p_FirstArgument = &KeGetCurrentThread()[1].FirstArgument;
  if ( *p_FirstArgument == p_FirstArgument )
    goto LABEL_2;
  v3 = KeAcquireQueuedSpinLock(0xBuLL);
  v4 = v3;
  v5 = (__int64)*p_FirstArgument - 32;
  if ( *(char *)(v5 + 67) == *(char *)(v5 + 66) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v3);
LABEL_2:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  v6 = *(void **)(v5 + 152);
  IopDeadIrp = (__int64)*p_FirstArgument - 32;
  ObfReferenceObjectWithTag(v6, 0x746C6644u);
  v7 = (__int64 *)*p_FirstArgument;
  v8 = *(__int64 ***)*p_FirstArgument;
  if ( *((void ***)*p_FirstArgument + 1) != p_FirstArgument || v8[1] != v7 )
    __fastfail(3u);
  *p_FirstArgument = v8;
  v8[1] = (__int64 *)p_FirstArgument;
  *(_QWORD *)(v5 + 40) = v5 + 32;
  *(_QWORD *)(v5 + 32) = v5 + 32;
  v9 = (__int64 **)qword_14034BAA8;
  *v7 = (__int64)&IopDeadIrps;
  v7[1] = (__int64)v9;
  if ( *v9 != &IopDeadIrps )
    __fastfail(3u);
  *v9 = v7;
  qword_14034BAA8 = (__int64)v7;
  if ( *(_BYTE *)(v5 + 67) <= *(_BYTE *)(v5 + 66)
    && (v11 = *(_QWORD *)(v5 + 192)) != 0
    && (v10 = *(_QWORD *)(v5 + 184), v12 = *(void **)(v10 + 40), *(void **)(v11 + 8) == v12) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v10 + 40), 0x746C6644u);
  }
  else
  {
    v12 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v4);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v12 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v12, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  }
  return result;
}
