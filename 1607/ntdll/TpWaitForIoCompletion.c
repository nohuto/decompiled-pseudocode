/*
 * XREFs of TpWaitForIoCompletion @ 0x180087A00
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003C170 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800FE67C (TppETWCallbackCancel.c)
 */

__int64 __fastcall TpWaitForIoCompletion(__int64 a1, __int32 a2)
{
  __int64 result; // rax
  __int64 v5; // r9

  result = TppIopValidateIo((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
      a2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
    result = TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -a2, 1LL, v5);
    if ( a2 )
    {
      if ( MEMORY[0x7FFE0386] )
        return TppETWCallbackCancel(
                 *(_QWORD *)(a1 + 144),
                 (int)a1 + 200,
                 (int)a1 + 80,
                 *(_QWORD *)(a1 + 88),
                 *(_QWORD *)(a1 + 104),
                 a2);
    }
  }
  return result;
}
