/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x180053368
 * Callers:
 *     EtwpQueryUmLogger @ 0x180051CDC (EtwpQueryUmLogger.c)
 *     EtwpStopUmLogger @ 0x1800533F0 (EtwpStopUmLogger.c)
 *     EtwpFlushUmLogger @ 0x1800FD8D4 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800FDAC8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180056F10 (EtwpGetPrivateLoggerContextByName.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // eax
  __int64 v6; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return EtwpGetPrivateLoggerContextByName(&DestinationString);
  }
  v5 = *(_WORD *)(a1 + 8) & 0x7FFF;
  if ( v5 >= 0x40 || !EtwpLoggerArray )
    return 4201;
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (*(_WORD *)(a1 + 8) & 0x7FFF) + 8));
  v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v5);
  if ( (v6 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v5 + 8));
    return 4201;
  }
  *a2 = v6;
  return v2;
}
