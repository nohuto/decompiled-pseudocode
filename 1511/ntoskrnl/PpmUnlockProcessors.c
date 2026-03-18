/*
 * XREFs of PpmUnlockProcessors @ 0x1401E8AD0
 * Callers:
 *     PpmIdleSelectStates @ 0x140134970 (PpmIdleSelectStates.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall PpmUnlockProcessors(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 Prcb; // rdx
  __int64 v6; // rbx
  unsigned __int32 v7; // eax
  unsigned __int32 v8; // r9d
  signed __int32 v9; // ecx
  __int64 result; // rax
  ULONG v11; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int16 *v12[2]; // [rsp+28h] [rbp-A1h] BYREF
  __int16 v13; // [rsp+38h] [rbp-91h]
  _QWORD v14[22]; // [rsp+40h] [rbp-89h] BYREF

  v14[0] = 1310721LL;
  memset(&v14[1], 0, 0xA0uLL);
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v12[1] = *(unsigned __int16 **)(a2 + 8);
  v13 = 0;
  v12[0] = (unsigned __int16 *)a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v12) )
  {
    Prcb = KeGetPrcb(v11);
    v6 = *(_QWORD *)(Prcb + 23808);
    _m_prefetchw((const void *)(Prcb + 23872));
    v7 = *(_DWORD *)(Prcb + 23872);
    do
    {
      v8 = v7;
      v9 = v7 ^ (v7 ^ (v7 - 1)) & 0xFFFFFF;
      if ( (v9 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v7) == 5 )
        {
          v9 = v9 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v7) == 7 )
        {
          v9 = v9 & 0xFFFFFF | 0x6000000;
        }
      }
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 23872), v9, v7);
    }
    while ( v7 != v8 );
    if ( HIBYTE(v9) == 6 )
      KeAddProcessorAffinityEx(v14, v11);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v6
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6)
                                + 64),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
    KeRemoveProcessorAffinityEx(a1, v11);
  }
  result = KeIsEmptyAffinityEx(v14);
  if ( !(_DWORD)result )
    return HalRequestIpi(0LL, v14);
  return result;
}
