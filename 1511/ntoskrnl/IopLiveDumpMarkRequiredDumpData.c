/*
 * XREFs of IopLiveDumpMarkRequiredDumpData @ 0x1403AF2F8
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403AEB54 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmAddRangeToCrashDump @ 0x1401D61E4 (MmAddRangeToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1403AEFF4 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1403AF134 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1403AF1EC (IopLiveDumpMarkProcessorData.c)
 *     MmAddPrivateDataToCrashDump @ 0x1403B1FBC (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkRequiredDumpData(__int64 a1, __int64 (__fastcall *a2)(_QWORD, __int64, __int64))
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdx
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v8; // [rsp+30h] [rbp-40h]
  __int64 (__fastcall *v9[7])(_QWORD, __int64, __int64); // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+80h] [rbp+10h] BYREF

  memset(&v9[1], 0, 0x28uLL);
  LODWORD(v9[5]) |= 1u;
  v9[2] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))(a1 + 368);
  v9[4] = a2;
  v9[0] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))IoSetDumpRange;
  v9[1] = 0LL;
  result = MmAddRangeToCrashDump(v9, KdDebuggerDataBlock, 864LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(v9, KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      result = IopLiveDumpMarkLoadedModuleList(v9);
      if ( (int)result >= 0 )
      {
        v7[1] = (unsigned __int16 *)qword_1403825B8[0];
        v7[0] = (unsigned __int16 *)KeActiveProcessors;
        v8 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v7) )
        {
          result = IopLiveDumpMarkProcessorData(v9, v10);
          if ( (int)result < 0 )
            return result;
        }
        result = MmAddPrivateDataToCrashDump(v9, 2LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(v9, (__int64 *)0xFFFFF78000000000LL, 1800LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v9, 4LL);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v9, 8LL);
              if ( (int)result >= 0 && *(_DWORD *)a1 == 351 && *(_QWORD *)(a1 + 8) == 2LL )
              {
                v5 = *(__int64 **)(a1 + 16);
                result = MmAddRangeToCrashDump(v9, v5, 56LL);
                if ( (int)result >= 0 )
                {
                  result = IopLiveDumpMarkDeviceNode(v9, v5[6]);
                  if ( (int)result >= 0 )
                  {
                    v6 = *(_QWORD *)(a1 + 32);
                    if ( v6 )
                      return IopLiveDumpMarkDeviceNode(v9, v6);
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
