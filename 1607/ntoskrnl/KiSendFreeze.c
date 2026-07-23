/*
 * XREFs of KiSendFreeze @ 0x1400845E0
 * Callers:
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiSendFreeze(__int64 a1, char a2)
{
  __int64 v2; // rax
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v8[1] = v2;
  v5 = 0;
  v8[0] = a1;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v8);
    if ( (_DWORD)result )
      break;
    v7 = KiProcessorBlock[v10];
    if ( a2 )
    {
      while ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11528), 5, 0) )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)(v7 + 11528) );
      }
LABEL_5:
      ++v5;
    }
    else
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11528), 5, 0) )
        goto LABEL_5;
      KeRemoveProcessorAffinityEx((unsigned __int16 *)a1, v10);
    }
  }
  if ( v5 )
    return HalSendNMI(a1);
  return result;
}
