/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x18007AA74
 * Callers:
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800D2664 (LdrpInitializeExceptionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // edi
  bool v4; // zf
  _QWORD *v5; // rax

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  v2 = LdrpInvertedFunctionTable[0];
  v3 = 1;
  v4 = LdrpInvertedFunctionTable[0] == 1;
  if ( LdrpInvertedFunctionTable[0] > 1u )
  {
    v5 = &unk_180163450;
    do
    {
      if ( a1 == *v5 )
        break;
      ++v3;
      v5 += 3;
    }
    while ( v3 < LdrpInvertedFunctionTable[0] );
    v4 = v3 == LdrpInvertedFunctionTable[0];
  }
  if ( !v4 )
  {
    LdrProtectMrdata(0);
    _InterlockedIncrement(&dword_180163428);
    if ( v2 != 2 )
      memmove(
        &LdrpInvertedFunctionTable[4 * v3 + 4 + 2 * v3],
        &LdrpInvertedFunctionTable[4 * v3 + 10 + 2 * v3],
        24LL * (v2 - v3 - 1));
    --LdrpInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_180163428);
    LdrProtectMrdata(1);
  }
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
