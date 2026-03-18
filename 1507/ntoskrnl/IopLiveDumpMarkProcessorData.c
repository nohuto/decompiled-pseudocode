/*
 * XREFs of IopLiveDumpMarkProcessorData @ 0x1403FF6CC
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403FF7D8 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkProcessorData(unsigned __int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = KiProcessorBlock[a2];
  result = MmAddRangeToCrashDump(a1, v3 - 384, 32832LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 8), 1984LL);
    if ( (int)result >= 0 )
    {
      result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 1968LL);
      if ( (int)result >= 0 )
      {
        result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 25216), 1232LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 25216) + 152LL), 0x2000LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 25216) + 248LL) - 4096LL, 0x2000LL);
            if ( (int)result >= 0 )
            {
              result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 152), *(unsigned __int16 *)(v3 + 150));
              if ( (int)result >= 0 )
                return MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 168), *(unsigned __int16 *)(v3 + 166));
            }
          }
        }
      }
    }
  }
  return result;
}
