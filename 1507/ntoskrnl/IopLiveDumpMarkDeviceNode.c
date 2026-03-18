/*
 * XREFs of IopLiveDumpMarkDeviceNode @ 0x1403FF4D4
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403FF7D8 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkDeviceNode(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = MmAddRangeToCrashDump(a1, a2, 88LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 48), *(unsigned __int16 *)(a2 + 40) + 2LL);
    if ( (int)result >= 0 )
      return MmAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 64), *(unsigned __int16 *)(a2 + 56) + 2LL);
  }
  return result;
}
