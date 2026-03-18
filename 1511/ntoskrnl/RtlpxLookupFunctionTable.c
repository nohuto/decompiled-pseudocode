/*
 * XREFs of RtlpxLookupFunctionTable @ 0x140028170
 * Callers:
 *     RtlLookupFunctionEntry @ 0x140025E10 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140027FB0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionTable @ 0x1400F1248 (RtlLookupFunctionTable.c)
 *     RtlPcToFileHeader @ 0x1400F1B5C (RtlPcToFileHeader.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x14074BEE8 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x140767708 (KiVerifyPdata.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x140032BA0 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x140035BB8 (MmUnlockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 *a2)
{
  PVOID v2; // rbp
  int v5; // r10d
  int v6; // r14d
  int v7; // eax
  int v8; // r9d
  int v9; // r8d
  int *v10; // rcx
  unsigned __int64 v11; // rdx
  PVOID result; // rax
  int v13; // r8d
  int v14; // edx
  int *v15; // r9
  unsigned __int64 v16; // rcx
  PVOID *v17; // rdx
  PVOID v18; // rcx
  unsigned __int8 v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  v5 = dword_1402CFDC8;
  v6 = 1;
  if ( (dword_1402CFDC8 & 1) != 0 )
    goto LABEL_16;
  if ( PsInvertedFunctionTable[0] != 1 )
  {
    v7 = 1;
    v8 = PsInvertedFunctionTable[0] - 1;
    while ( v8 >= v7 )
    {
      v9 = (v8 + v7) >> 1;
      v10 = &PsInvertedFunctionTable[6 * v9];
      v11 = *((_QWORD *)v10 + 3);
      if ( a1 < v11 )
      {
        if ( !v9 )
          break;
        v8 = v9 - 1;
      }
      else
      {
        if ( a1 < v11 + (unsigned int)v10[8] )
        {
          *(_OWORD *)a2 = *((_OWORD *)v10 + 1);
          a2[2] = *((_QWORD *)v10 + 4);
          result = (PVOID)*a2;
          goto LABEL_10;
        }
        v7 = v9 + 1;
      }
    }
  }
  if ( byte_1402CFDCC )
    goto LABEL_16;
  result = 0LL;
LABEL_10:
  if ( dword_1402CFDC8 != v5 )
  {
LABEL_16:
    MmLockLoadedModuleListShared(&v19);
    if ( PsInvertedFunctionTable[0] != 1 )
    {
      v13 = PsInvertedFunctionTable[0] - 1;
      if ( PsInvertedFunctionTable[0] - 1 >= 1 )
      {
        do
        {
          v14 = (v13 + v6) >> 1;
          v15 = &PsInvertedFunctionTable[6 * v14];
          v16 = *((_QWORD *)v15 + 3);
          if ( a1 >= v16 )
          {
            if ( a1 < v16 + (unsigned int)v15[8] )
            {
              *(_OWORD *)a2 = *((_OWORD *)v15 + 1);
              a2[2] = *((_QWORD *)v15 + 4);
              v2 = (PVOID)*a2;
              goto LABEL_32;
            }
            v6 = v14 + 1;
          }
          else
          {
            if ( !v14 )
              break;
            v13 = v14 - 1;
          }
        }
        while ( v13 >= v6 );
      }
    }
    if ( byte_1402CFDCC )
    {
      v17 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList )
      {
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          while ( 1 )
          {
            v18 = v17[6];
            if ( a1 >= (unsigned __int64)v18 && a1 < (unsigned __int64)v18 + *((unsigned int *)v17 + 16) )
              break;
            v17 = (PVOID *)*v17;
            if ( v17 == &PsLoadedModuleList )
              goto LABEL_32;
          }
          v2 = v17[2];
          *a2 = (__int64)v2;
          a2[1] = (__int64)v18;
          *((_DWORD *)a2 + 4) = *((_DWORD *)v17 + 16);
          *((_DWORD *)a2 + 5) = *((_DWORD *)v17 + 6);
        }
      }
    }
LABEL_32:
    MmUnlockLoadedModuleListShared(v19);
    return v2;
  }
  return result;
}
