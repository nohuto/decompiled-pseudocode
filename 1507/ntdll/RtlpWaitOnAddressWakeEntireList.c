/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x18006E20C
 * Callers:
 *     RtlpWakeByAddress @ 0x1800367EC (RtlpWakeByAddress.c)
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x1800382B8 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006E06C (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180093FE0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !(_DWORD)result )
        result = ZwAlertThreadByThreadId(*(_QWORD *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
