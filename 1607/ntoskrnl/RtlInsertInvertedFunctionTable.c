/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x140082BBC
 * Callers:
 *     MiProcessLoaderEntry @ 0x140082CAC (MiProcessLoaderEntry.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x140082E18 (MmLockLoadedModuleListExclusive.c)
 *     RtlCaptureImageExceptionValues @ 0x140082E38 (RtlCaptureImageExceptionValues.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned __int64 *v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  RtlCaptureImageExceptionValues(a1, v8, &v10);
  MmLockLoadedModuleListExclusive(&v9);
  if ( PsInvertedFunctionTable[0] == dword_1402F6FA4 )
  {
    byte_1402F6FAC = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_1402F6FA8);
    v5 = 1;
    if ( PsInvertedFunctionTable[0] != 1 )
    {
      if ( PsInvertedFunctionTable[0] > 1u )
      {
        v6 = (unsigned __int64 *)&unk_1402F6FD0;
        do
        {
          if ( a1 < *v6 )
            break;
          ++v5;
          v6 += 3;
        }
        while ( v5 < PsInvertedFunctionTable[0] );
      }
      if ( v5 != PsInvertedFunctionTable[0] )
        memmove(
          &PsInvertedFunctionTable[4 * v5 + 10 + 2 * v5],
          &PsInvertedFunctionTable[4 * v5 + 4 + 2 * v5],
          24LL * (PsInvertedFunctionTable[0] - v5));
    }
    v4 = 3LL * v5;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v4 + 4] = v8[0];
    PsInvertedFunctionTable[2 * v4 + 9] = v10;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v4 + 6] = a1;
    PsInvertedFunctionTable[2 * v4 + 8] = a2;
    ++PsInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_1402F6FA8);
  }
  LOBYTE(v4) = v9;
  return MmUnlockLoadedModuleListExclusive(v4);
}
