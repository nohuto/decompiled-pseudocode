/*
 * XREFs of KeSetSchedulingGroupCycleNotification @ 0x14020A1D8
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

_UNKNOWN **__fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned __int8 CurrentIrql; // r13
  __int64 *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // ebp
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  result = &retaddr;
  v13 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v7 = KiProcessorBlock;
      v8 = (unsigned int)KeNumberProcessors_0;
      v9 = (_QWORD *)(a1 + 128);
      do
      {
        v10 = *v7;
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v11);
          }
          while ( *(_QWORD *)(v10 + 48) );
        }
        v9[5] = *v9;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
        ++v7;
        v9 += 51;
        --v8;
      }
      while ( v8 );
      a2 = v13;
    }
    *(_QWORD *)(a1 + 56) = a2;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), a3);
    result = (_UNKNOWN **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
