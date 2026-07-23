/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x18000A408
 * Callers:
 *     EtwpFlushUmLogger @ 0x180002EE4 (EtwpFlushUmLogger.c)
 *     EtwpQueryUmLogger @ 0x18000A2D0 (EtwpQueryUmLogger.c)
 *     EtwpStopUmLogger @ 0x18000A520 (EtwpStopUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800F4918 (EtwpUpdateUmLogger.c)
 * Callees:
 *     EtwpGetPrivateLoggerContextByName @ 0x18000A490 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
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
