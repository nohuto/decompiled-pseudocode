/*
 * XREFs of KiProcessNMI @ 0x140083318
 * Callers:
 *     KxNmiInterrupt @ 0x14016A0C0 (KxNmiInterrupt.c)
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x140083238 (KxTryToAcquireSpinLock.c)
 *     KiCheckForFreezeExecution @ 0x140083470 (KiCheckForFreezeExecution.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

unsigned __int64 __fastcall KiProcessNMI(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 Number; // r15
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, unsigned __int64); // rbx
  char v10; // si
  char v11; // al

  off_1402F2670();
  result = KiCheckForFreezeExecution(a1, a2);
  if ( !(_BYTE)result )
  {
    Number = KeGetCurrentPrcb()->Number;
    v6 = KiProcessorIndexToNumberMappingTable[Number];
    v7 = (unsigned __int64)v6 >> 6;
    v8 = 1LL << (v6 & 0x3F);
    _m_prefetchw(&qword_1402F6CC8[v7]);
    result = _InterlockedOr64(&qword_1402F6CC8[v7], v8);
    if ( (v8 & result) == 0 )
    {
      v9 = (__int64 (__fastcall *)(_QWORD, unsigned __int64))KiNmiCallbackListHead;
      v10 = 0;
      if ( !KiNmiCallbackListHead )
        goto LABEL_8;
      do
      {
        LOBYTE(v7) = v10;
        v11 = (*((__int64 (__fastcall **)(_QWORD, unsigned __int64))v9 + 1))(*((_QWORD *)v9 + 2), v7);
        v9 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))v9;
        v10 |= v11;
      }
      while ( v9 );
      if ( !v10 )
      {
LABEL_8:
        while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&KiNMILock) )
        {
          do
            KiCheckForFreezeExecution(a1, a2);
          while ( KiNMILock );
        }
        _InterlockedCompareExchange(&KiBugCheckActive, 1, 0);
        HalHandleNMI(0LL);
        _InterlockedCompareExchange(&KiBugCheckActive, 0, 1);
        KxReleaseSpinLock(&KiNMILock);
      }
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_1402F6CC8[result], ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
    }
  }
  return result;
}
