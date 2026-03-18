/*
 * XREFs of IopPerfCallDriver @ 0x1401F7F54
 * Callers:
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140735520 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407355F4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x140135D90 (IopAllocateIrpExtension.c)
 *     IopPoHandleIrp @ 0x140137894 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401F7E04 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x1401F8470 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1401F8538 (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, ULONG_PTR BugCheckParameter1)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebp
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned __int8 v11; // cl

  if ( (IopPerfStatus & 2) != 0 )
  {
    if ( IopIrpHasValidCombinationOfExtensionTypes(BugCheckParameter1, 1) )
    {
      IrpExtension = IopAllocateIrpExtension(BugCheckParameter1, 1);
      if ( IrpExtension )
        *((_QWORD *)IrpExtension + 4) = MEMORY[0xFFFFF78000000014];
    }
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v5 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), BugCheckParameter1, v5);
    if ( (char)--*(_BYTE *)(BugCheckParameter1 + 67) <= 0 )
      KeBugCheckEx(0x35u, BugCheckParameter1, 0LL, 0LL, 0LL);
    v6 = *(_QWORD *)(BugCheckParameter1 + 184) - 72LL;
    *(_QWORD *)(BugCheckParameter1 + 184) = v6;
    v7 = *(_BYTE *)v6;
    *(_QWORD *)(v6 + 40) = Object;
    if ( v7 == 22 && (unsigned __int8)(*(_BYTE *)(v6 + 1) - 2) <= 1u )
      v8 = IopPoHandleIrp(BugCheckParameter1);
    else
      v8 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*((_QWORD *)Object + 1) + 8LL * v7 + 112))(
             Object,
             BugCheckParameter1);
    v9 = v8;
    IopPerfLogCallReturnEvent(BugCheckParameter1, v5);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    if ( (char)--*(_BYTE *)(BugCheckParameter1 + 67) <= 0 )
      KeBugCheckEx(0x35u, BugCheckParameter1, 0LL, 0LL, 0LL);
    v10 = *(_QWORD *)(BugCheckParameter1 + 184) - 72LL;
    *(_QWORD *)(BugCheckParameter1 + 184) = v10;
    v11 = *(_BYTE *)v10;
    *(_QWORD *)(v10 + 40) = Object;
    if ( v11 == 22 && (unsigned __int8)(*(_BYTE *)(v10 + 1) - 2) <= 1u )
      return (unsigned int)IopPoHandleIrp(BugCheckParameter1);
    else
      return (unsigned int)(*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*((_QWORD *)Object + 1) + 8LL * v11 + 112))(
                             Object,
                             BugCheckParameter1);
  }
  return v9;
}
