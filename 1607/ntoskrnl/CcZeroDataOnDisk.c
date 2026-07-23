/*
 * XREFs of CcZeroDataOnDisk @ 0x14006AD6C
 * Callers:
 *     CcZeroData @ 0x14045739C (CcZeroData.c)
 * Callees:
 *     MmZeroPageWrite @ 0x14006ADEC (MmZeroPageWrite.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

__int64 __fastcall CcZeroDataOnDisk(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *a3 - *a2;
  v8 = *a2;
  v7 = v4;
  if ( v4 >= (unsigned int)CcMaxZeroTransferSize )
  {
    if ( _InterlockedIncrement(&CcAggressiveZeroCount) > CcAggressiveZeroThreshold )
    {
      _InterlockedDecrement(&CcAggressiveZeroCount);
      v5 = 0x10000LL;
    }
    else
    {
      v5 = (unsigned int)CcMaxZeroTransferSize;
      v3 = 1;
    }
  }
  else
  {
    v5 = 0LL;
  }
  result = MmZeroPageWrite(a1, &v8, &v7, v5);
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  if ( v3 )
    _InterlockedDecrement(&CcAggressiveZeroCount);
  return result;
}
