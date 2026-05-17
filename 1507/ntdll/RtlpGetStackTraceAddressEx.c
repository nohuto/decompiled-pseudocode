/*
 * XREFs of RtlpGetStackTraceAddressEx @ 0x1800082B0
 * Callers:
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 *     RtlCheckHeldCriticalSections @ 0x18006CE30 (RtlCheckHeldCriticalSections.c)
 *     RtlpGetStackTraceAddress @ 0x1800E4B40 (RtlpGetStackTraceAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetStackTraceAddressEx(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = a1 + (a2 << 16);
  if ( RtlpStackTraceDatabase && v2 && v2 <= *(_DWORD *)(RtlpStackTraceDatabase + 180) )
    return *(_QWORD *)(*(_QWORD *)(RtlpStackTraceDatabase + 184) - 8LL * v2);
  else
    return 0LL;
}
