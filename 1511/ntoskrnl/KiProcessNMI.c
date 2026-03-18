/*
 * XREFs of KiProcessNMI @ 0x1401C3714
 * Callers:
 *     KxNmiInterrupt @ 0x14015F140 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1400EA5BC (KxTryToAcquireSpinLock.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     KiCheckForFreezeExecution @ 0x1401C3628 (KiCheckForFreezeExecution.c)
 */

char __fastcall KiProcessNMI(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 Number; // r15
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 (__fastcall *v7)(_QWORD, unsigned __int64); // rbx
  char v8; // si
  char v9; // al

  off_1402D29B8();
  LOBYTE(v2) = KiCheckForFreezeExecution(a1);
  if ( !(_BYTE)v2 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v4 = KiProcessorIndexToNumberMappingTable[Number];
    v5 = (unsigned __int64)v4 >> 6;
    v6 = 1LL << (v4 & 0x3F);
    _m_prefetchw(&qword_1402CFAD8[v5]);
    v2 = _InterlockedOr64(&qword_1402CFAD8[v5], v6);
    if ( (v6 & v2) == 0 )
    {
      v7 = (__int64 (__fastcall *)(_QWORD, unsigned __int64))KiNmiCallbackListHead;
      v8 = 0;
      if ( !KiNmiCallbackListHead )
        goto LABEL_8;
      do
      {
        LOBYTE(v5) = v8;
        v9 = (*((__int64 (__fastcall **)(_QWORD, unsigned __int64))v7 + 1))(*((_QWORD *)v7 + 2), v5);
        v7 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))v7;
        v8 |= v9;
      }
      while ( v7 );
      if ( !v8 )
      {
LABEL_8:
        while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&KiNMILock) )
        {
          do
            KiCheckForFreezeExecution(a1);
          while ( KiNMILock );
        }
        _InterlockedCompareExchange(&KiBugCheckActive, 1, 0);
        HalHandleNMI(0LL);
        _InterlockedCompareExchange(&KiBugCheckActive, 0, 1);
        KxReleaseSpinLock(&KiNMILock);
      }
      v2 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_1402CFAD8[v2], ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
    }
  }
  return v2;
}
