/*
 * XREFs of IopAllocateReserveIrp @ 0x1401B6C44
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140043AC0 (IopAllocateIrpMustSucceed.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x1400DE470 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1401B73A0 (IopInitActivityIdIrp.c)
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
  if ( a2 > byte_1402FB520 )
    return 0LL;
  v3 = a2 + 1;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      while ( _InterlockedExchange(&dword_1402FB470, 1) == 1 )
        KeWaitForSingleObject(&word_1402FB478, Executive, 0, 0, 0LL);
      IoInitializeIrp(qword_1402FB468, 72 * v3 + 208, v3);
      qword_1402FB468->AllocationFlags = 33;
      v7 = qword_1402FB468;
      --qword_1402FB468->Tail.Overlay.CurrentStackLocation;
      --v7->CurrentLocation;
      --v7->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_1402FB468);
      return qword_1402FB468;
    }
    else
    {
      if ( a3 != 3 )
        return 0LL;
      while ( _InterlockedExchange(&dword_1402FB498, 1) == 1 )
      {
        Timeout.QuadPart = -50000000LL;
        if ( KeWaitForSingleObject(&word_1402FB4A0, Executive, 0, 0, &Timeout) == 258 )
          return 0LL;
      }
      IoInitializeIrp(qword_1402FB490, 72 * v3 + 208, v3);
      qword_1402FB490->AllocationFlags = 33;
      v8 = qword_1402FB490;
      --qword_1402FB490->Tail.Overlay.CurrentStackLocation;
      --v8->CurrentLocation;
      --v8->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_1402FB490);
      return qword_1402FB490;
    }
  }
  else
  {
    while ( _InterlockedExchange(&dword_1402FB448, 1) == 1 )
      KeWaitForSingleObject(&word_1402FB450, Executive, 0, 0, 0LL);
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
