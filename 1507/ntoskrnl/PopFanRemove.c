/*
 * XREFs of PopFanRemove @ 0x1406BB090
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 */

ULONG __fastcall PopFanRemove(__int64 a1)
{
  ULONG result; // eax

  *(_BYTE *)(a1 + 152) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 128), Executive, 0, 0, 0LL);
  result = PoDebug;
  if ( (PoDebug & 0x20) != 0 )
    return DbgPrint("Fan %p: going away\n", (const void *)a1);
  return result;
}
