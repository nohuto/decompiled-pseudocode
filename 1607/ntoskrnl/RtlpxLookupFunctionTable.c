/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1400510C0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140050EE0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlPcToFileHeader @ 0x1400A3AD0 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTable @ 0x1400B38E8 (RtlLookupFunctionTable.c)
 *     RtlLookupFunctionEntry @ 0x1400F4070 (RtlLookupFunctionEntry.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1407B162C (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x1407B1D84 (KiVerifyPdata.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140014584 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14001F120 (MmLockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 *a2)
{
  PVOID v2; // rbp
  int v5; // r11d
  int v6; // r14d
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  int *v10; // r10
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
  v5 = dword_1402F6FA8;
  v6 = 1;
  if ( (dword_1402F6FA8 & 1) != 0 )
    goto LABEL_16;
  if ( PsInvertedFunctionTable[0] != 1 )
  {
    v7 = PsInvertedFunctionTable[0] - 1;
    v8 = 1;
    while ( v7 >= v8 )
    {
      v9 = (v7 + v8) >> 1;
      v10 = &PsInvertedFunctionTable[6 * v9];
      v11 = *((_QWORD *)v10 + 3);
      if ( a1 >= v11 )
      {
        if ( a1 < v11 + (unsigned int)v10[8] )
        {
          *(_OWORD *)a2 = *((_OWORD *)v10 + 1);
          a2[2] = *((_QWORD *)v10 + 4);
          result = (PVOID)*a2;
          goto LABEL_11;
        }
        v8 = v9 + 1;
      }
      else
      {
        if ( !v9 )
          break;
        v7 = v9 - 1;
      }
    }
  }
  if ( byte_1402F6FAC )
    goto LABEL_16;
  result = 0LL;
LABEL_11:
  if ( dword_1402F6FA8 != v5 )
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
    if ( byte_1402F6FAC )
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
