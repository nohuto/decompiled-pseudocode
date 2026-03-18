/*
 * XREFs of IopAllocateReserveIrp @ 0x1401F1C40
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x1400480B0 (IopAllocateIrpMustSucceed.c)
 *     IoPageRead @ 0x140085D50 (IoPageRead.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012D4C8 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x14011A644 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1401F2680 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // bl
  PIRP v4; // rcx
  bool v5; // zf
  PIRP v7; // rcx
  PIRP v8; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_14034B9A0 )
    return 0LL;
  v3 = a2 + 1;
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_14034B8C8, 1) == 1 )
      KeWaitForSingleObject(&word_14034B8D0, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 72 * v3 + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v7 = IopReserveIrps;
    --IopReserveIrps->Tail.Overlay.CurrentStackLocation;
    --v7->CurrentLocation;
    --v7->StackCount;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_14034B8F0, 1) == 1 )
      KeWaitForSingleObject(&word_14034B8F8, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_14034B8E8, 72 * v3 + 208, v3);
    qword_14034B8E8->AllocationFlags = 33;
    v8 = qword_14034B8E8;
    --qword_14034B8E8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(qword_14034B8E8);
    return qword_14034B8E8;
  }
  if ( a3 != 3 )
    return 0LL;
  if ( _InterlockedExchange(&dword_14034B918, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    while ( KeWaitForSingleObject(&word_14034B920, Executive, 0, 0, &Timeout) != 258 )
    {
      if ( _InterlockedExchange(&dword_14034B918, 1) != 1 )
        goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  IoInitializeIrp(qword_14034B910, 72 * v3 + 208, v3);
  qword_14034B910->AllocationFlags = 33;
  v4 = qword_14034B910;
  --qword_14034B910->Tail.Overlay.CurrentStackLocation;
  --v4->CurrentLocation;
  --v4->StackCount;
  v5 = (IopIrpExtensionStatus & 1) == 0;
  *((_QWORD *)&v4->Tail.CompletionKey + 10) = v4->Tail.Overlay.CurrentStackLocation;
  if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
    IopInitActivityIdIrp(qword_14034B910);
  return qword_14034B910;
}
