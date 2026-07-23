/*
 * XREFs of ExAddPrivateDataToCrashDump @ 0x14022CA4C
 * Callers:
 *     IopLiveDumpMarkImportantDumpData @ 0x1403DB154 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x1401E7880 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall ExAddPrivateDataToCrashDump(__int64 (__fastcall **a1)(_QWORD, __int64, __int64))
{
  unsigned int v1; // ebx
  unsigned __int64 *v2; // rsi
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax

  v1 = 0;
  v2 = (unsigned __int64 *)&ExPoolTagTables;
  v3 = 0;
  while ( 1 )
  {
    if ( *v2 )
    {
      v5 = MmAddRangeToCrashDump(a1, *v2, 40 * PoolTrackTableSize);
      if ( v5 < 0 )
      {
        v1 = v5;
        if ( v5 == -1073741789 )
          return v1;
      }
    }
    ++v3;
    ++v2;
    if ( v3 >= 0x280 )
    {
      v6 = 0LL;
      if ( ExpNumberOfNonPagedPools )
      {
        while ( 1 )
        {
          v7 = MmAddRangeToCrashDump(a1, ExpNonPagedPoolDescriptor[v6], 8832LL);
          if ( v7 < 0 )
          {
            v1 = v7;
            if ( v7 == -1073741789 )
              break;
          }
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= ExpNumberOfNonPagedPools )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        v8 = 0LL;
        if ( ExpNumberOfPagedPools == -1 )
        {
LABEL_14:
          v10 = MmAddRangeToCrashDump(a1, ExpSessionPoolTrackTable, 40 * ExpSessionPoolTrackTableSize);
          if ( v10 < 0 )
            return (unsigned int)v10;
        }
        else
        {
          while ( 1 )
          {
            v9 = MmAddRangeToCrashDump(a1, ExpPagedPoolDescriptor[v8], 4416LL);
            if ( v9 < 0 )
            {
              v1 = v9;
              if ( v9 == -1073741789 )
                break;
            }
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= ExpNumberOfPagedPools + 1 )
              goto LABEL_14;
          }
        }
      }
      return v1;
    }
  }
}
