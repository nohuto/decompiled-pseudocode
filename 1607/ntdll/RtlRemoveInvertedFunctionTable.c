/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x18007AA84
 * Callers:
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800D25A4 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

signed __int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  unsigned int v6; // edi
  bool v7; // zf
  _QWORD *v8; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, a2, a3, a4);
  v5 = LdrpInvertedFunctionTable[0];
  v6 = 1;
  v7 = LdrpInvertedFunctionTable[0] == 1;
  if ( LdrpInvertedFunctionTable[0] > 1u )
  {
    v8 = &unk_180163450;
    do
    {
      if ( a1 == *v8 )
        break;
      ++v6;
      v8 += 3;
    }
    while ( v6 < LdrpInvertedFunctionTable[0] );
    v7 = v6 == LdrpInvertedFunctionTable[0];
  }
  if ( !v7 )
  {
    LdrProtectMrdata(0);
    _InterlockedIncrement(&dword_180163428);
    if ( v5 != 2 )
      memmove(
        &LdrpInvertedFunctionTable[4 * v6 + 4 + 2 * v6],
        &LdrpInvertedFunctionTable[4 * v6 + 10 + 2 * v6],
        24LL * (v5 - v6 - 1));
    --LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_180163428);
    LdrProtectMrdata(1);
  }
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
