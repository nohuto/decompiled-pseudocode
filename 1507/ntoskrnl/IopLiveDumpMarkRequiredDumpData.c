/*
 * XREFs of IopLiveDumpMarkRequiredDumpData @ 0x1403FF7D8
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1403FF4D4 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1403FF614 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1403FF6CC (IopLiveDumpMarkProcessorData.c)
 *     MmAddPrivateDataToCrashDump @ 0x14040308C (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkRequiredDumpData(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int16 i; // bx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  _QWORD v10[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(&v10[1], 0, 0x20uLL);
  v10[3] = a2;
  v10[1] = 0LL;
  v10[2] = a1 + 368;
  v10[0] = IoSetDumpRange;
  LODWORD(v10[4]) |= 1u;
  result = MmAddRangeToCrashDump((unsigned __int64)v10, (unsigned __int64)&KdDebuggerDataBlock, 864LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(
               (unsigned __int64)v10,
               (unsigned __int64)KiProcessorBlock,
               8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      result = IopLiveDumpMarkLoadedModuleList((unsigned __int64)v10);
      if ( (int)result >= 0 )
      {
        v5 = qword_1403D15E8[0];
        for ( i = 0; ; v5 = qword_1403D15E8[i] )
        {
          while ( v5 )
          {
            _BitScanForward64(&v7, v5);
            v5 &= ~(1LL << v7);
            result = IopLiveDumpMarkProcessorData(
                       (unsigned __int64)v10,
                       KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v7]);
            if ( (int)result < 0 )
              return result;
          }
          if ( ++i >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
            break;
        }
        result = MmAddPrivateDataToCrashDump(v10, 2LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump((unsigned __int64)v10, 0xFFFFF78000000000uLL, 1800LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v10, 4LL);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v10, 8LL);
              if ( (int)result >= 0 && *(_DWORD *)a1 == 351 && *(_QWORD *)(a1 + 8) == 2LL )
              {
                v8 = *(_QWORD *)(a1 + 16);
                result = MmAddRangeToCrashDump((unsigned __int64)v10, v8, 56LL);
                if ( (int)result >= 0 )
                {
                  result = IopLiveDumpMarkDeviceNode((unsigned __int64)v10, *(_QWORD *)(v8 + 48));
                  if ( (int)result >= 0 )
                  {
                    v9 = *(_QWORD *)(a1 + 32);
                    if ( v9 )
                      return IopLiveDumpMarkDeviceNode((unsigned __int64)v10, v9);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
