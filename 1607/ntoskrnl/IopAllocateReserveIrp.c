/*
 * XREFs of IopAllocateReserveIrp @ 0x1401C471C
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x14002E210 (IopAllocateIrpMustSucceed.c)
 *     IoAsynchronousPageWrite @ 0x14008DEA4 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x14009D234 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1401C4FA8 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // bl
  PIRP v5; // rcx
  bool v6; // zf
  PIRP v7; // rcx
  PIRP v8; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140320A80 )
    return 0LL;
  v3 = a2 + 1;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      while ( _InterlockedExchange(&dword_1403209D0, 1) == 1 )
        KeWaitForSingleObject(&word_1403209D8, Executive, 0, 0, 0LL);
      IoInitializeIrp(qword_1403209C8, 72 * v3 + 208, v3);
      qword_1403209C8->AllocationFlags = 33;
      v7 = qword_1403209C8;
      --qword_1403209C8->Tail.Overlay.CurrentStackLocation;
      --v7->CurrentLocation;
      --v7->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_1403209C8);
      return qword_1403209C8;
    }
    else
    {
      if ( a3 != 3 )
        return 0LL;
      while ( _InterlockedExchange(&dword_1403209F8, 1) == 1 )
      {
        Timeout.QuadPart = -50000000LL;
        if ( KeWaitForSingleObject(&word_140320A00, Executive, 0, 0, &Timeout) == 258 )
          return 0LL;
      }
      IoInitializeIrp(qword_1403209F0, 72 * v3 + 208, v3);
      qword_1403209F0->AllocationFlags = 33;
      v8 = qword_1403209F0;
      --qword_1403209F0->Tail.Overlay.CurrentStackLocation;
      --v8->CurrentLocation;
      --v8->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_1403209F0);
      return qword_1403209F0;
    }
  }
  else
  {
    while ( _InterlockedExchange(&dword_1403209A8, 1) == 1 )
      KeWaitForSingleObject(&word_1403209B0, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 72 * v3 + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v5 = IopReserveIrps;
    --IopReserveIrps->Tail.Overlay.CurrentStackLocation;
    --v5->CurrentLocation;
    --v5->StackCount;
    v6 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v5->Tail.CompletionKey + 10) = v5->Tail.Overlay.CurrentStackLocation;
    if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
}
