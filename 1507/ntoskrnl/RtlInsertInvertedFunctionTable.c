/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x1401532CC
 * Callers:
 *     MiProcessLoaderEntry @ 0x1400253E0 (MiProcessLoaderEntry.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x14002551C (MmLockLoadedModuleListExclusive.c)
 *     RtlCaptureImageExceptionValues @ 0x1401533B4 (RtlCaptureImageExceptionValues.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  unsigned int v4; // ebx
  unsigned __int64 *v5; // rcx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  RtlCaptureImageExceptionValues(a1, v8, &v10);
  MmLockLoadedModuleListExclusive(&v9);
  if ( PsInvertedFunctionTable[0] == dword_14031EF64 )
  {
    byte_14031EF6C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_14031EF68);
    v4 = 1;
    if ( PsInvertedFunctionTable[0] != 1 )
    {
      if ( PsInvertedFunctionTable[0] > 1u )
      {
        v5 = (unsigned __int64 *)&unk_14031EF90;
        do
        {
          if ( a1 < *v5 )
            break;
          ++v4;
          v5 += 3;
        }
        while ( v4 < PsInvertedFunctionTable[0] );
      }
      if ( v4 != PsInvertedFunctionTable[0] )
        memmove(
          &PsInvertedFunctionTable[6 * v4 + 10],
          &PsInvertedFunctionTable[4 * v4 + 4 + 2 * v4],
          24LL * (PsInvertedFunctionTable[0] - v4));
    }
    v6 = 3LL * v4;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v6 + 4] = v8[0];
    PsInvertedFunctionTable[2 * v6 + 9] = v10;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v6 + 6] = a1;
    PsInvertedFunctionTable[2 * v6 + 8] = a2;
    ++PsInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_14031EF68);
  }
  return MmUnlockLoadedModuleListExclusive(v9);
}
