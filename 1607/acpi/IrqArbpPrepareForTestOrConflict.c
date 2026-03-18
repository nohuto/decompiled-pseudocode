/*
 * XREFs of IrqArbpPrepareForTestOrConflict @ 0x1C008BAC8
 * Callers:
 *     IrqArbTestAllocation @ 0x1C008B910 (IrqArbTestAllocation.c)
 *     IrqArbRetestAllocation @ 0x1C00A2350 (IrqArbRetestAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00A26C8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0087020 (IrqArbpUnreferenceArbitrationList.c)
 *     LinkNodeClearPossibleData @ 0x1C008A3B8 (LinkNodeClearPossibleData.c)
 *     IcCopyData @ 0x1C008A490 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1C008A5A0 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C008A8D0 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C008A9C0 (IcClearPossibleData.c)
 *     LinkNodeCopyData @ 0x1C008BD78 (LinkNodeCopyData.c)
 */

__int64 __fastcall IrqArbpPrepareForTestOrConflict(__int64 a1, __int64 ***a2)
{
  __int64 i; // rbx
  int v5; // eax
  __int64 result; // rax

  ProcessorpClearData(1);
  IcClearPossibleData();
  if ( IrqLibRealInterruptModel == 1 )
  {
    for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 28) & 4) == 0 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD))(PmHalDispatchTable + 64))(*(unsigned int *)(i + 16));
        if ( v5 )
        {
          if ( *(int *)(i + 28) < 0 && (BYTE2(v5) || (_BYTE)v5) )
          {
            *(_DWORD *)(i + 28) = 0;
            *(_DWORD *)(i + 20) = *(_DWORD *)(i + 16) + BYTE2(v5);
LABEL_21:
            memset((void *)(i + 32), 0, 200LL * *(unsigned int *)(i + 24));
            continue;
          }
          if ( (*(_DWORD *)(i + 28) & 0x80000000) == 0 && !BYTE2(v5) && !(_BYTE)v5 )
          {
            *(_DWORD *)(i + 20) = 0;
            *(_DWORD *)(i + 28) = 0x80000000;
            goto LABEL_21;
          }
        }
      }
    }
  }
  LinkNodeClearPossibleData();
  result = ProcessorCopyData(1LL);
  if ( (int)result >= 0 )
  {
    result = IcCopyData(1);
    if ( (int)result >= 0 )
    {
      result = LinkNodeCopyData(1LL);
      if ( (int)result >= 0 )
        return IrqArbpUnreferenceArbitrationList(a1, a2);
    }
  }
  return result;
}
