/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x180054EC8
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530C0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     EtwpAddDebugInfoEvents @ 0x180002994 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800FDCBC (EtwpAddBinaryInfoEvents.c)
 */

__int64 __fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 480);
  if ( (_QWORD *)*v3 != v3 || (result = a1 + 464, *(_QWORD *)result != result) )
  {
    result = *(unsigned int *)(a2 + 4);
    if ( (unsigned int)result < a3 && (unsigned int)result >= 0x180 )
    {
      *(_DWORD *)(a2 + 48) = result;
      result = a1 + 464;
      if ( *(_QWORD *)result != result )
        result = EtwpAddDebugInfoEvents(a1, a2, a3);
      if ( (_QWORD *)*v3 != v3 )
        return EtwpAddBinaryInfoEvents(a1, a2, a3);
    }
  }
  return result;
}
