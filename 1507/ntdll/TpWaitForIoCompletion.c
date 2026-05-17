/*
 * XREFs of TpWaitForIoCompletion @ 0x1800773F0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003CD08 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800F5D10 (TppETWCallbackCancel.c)
 */

__int64 __fastcall TpWaitForIoCompletion(__int64 a1, __int32 a2)
{
  __int64 result; // rax

  result = TppIopValidateIo((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
      a2 = _InterlockedExchange((volatile __int32 *)(a1 + 272), 0);
    result = TppBarrierAdjust(a1 + 56, (unsigned int)-a2);
    if ( a2 )
    {
      if ( MEMORY[0x7FFE0386] )
        return TppETWCallbackCancel(
                 *(_QWORD *)(a1 + 136),
                 (int)a1 + 192,
                 (int)a1 + 80,
                 *(_QWORD *)(a1 + 88),
                 *(_QWORD *)(a1 + 104),
                 a2);
    }
  }
  return result;
}
