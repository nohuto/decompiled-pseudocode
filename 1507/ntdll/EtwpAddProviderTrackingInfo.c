/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x180009E9C
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     EtwpAddBinaryInfoEvents @ 0x180002C38 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddDebugInfoEvents @ 0x1800F4B0C (EtwpAddDebugInfoEvents.c)
 */

__int64 __fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 488);
  if ( (_QWORD *)*v3 != v3 || (result = a1 + 472, *(_QWORD *)result != result) )
  {
    result = *(unsigned int *)(a2 + 4);
    if ( (unsigned int)result < a3 && (unsigned int)result >= 0x180 )
    {
      *(_DWORD *)(a2 + 48) = result;
      result = a1 + 472;
      if ( *(_QWORD *)result != result )
        result = EtwpAddDebugInfoEvents();
      if ( (_QWORD *)*v3 != v3 )
        return EtwpAddBinaryInfoEvents(a1, a2, a3);
    }
  }
  return result;
}
