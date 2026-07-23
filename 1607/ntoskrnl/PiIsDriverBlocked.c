/*
 * XREFs of PiIsDriverBlocked @ 0x140515678
 * Callers:
 *     PiLookupInDDB @ 0x1405158D4 (PiLookupInDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExIsProcessorFeaturePresent @ 0x140132480 (ExIsProcessorFeaturePresent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     SdbGetDatabaseMatch @ 0x140515544 (SdbGetDatabaseMatch.c)
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     PnpLogEvent @ 0x14062DB4C (PnpLogEvent.c)
 *     SdbQueryDataEx @ 0x1406C1A74 (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x1406C1EF0 (SdbReadEntryInformation.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  __int64 v5; // r15
  __int64 v8; // r8
  unsigned int DatabaseMatch; // r12d
  unsigned int v10; // ebx
  wchar_t *v12; // rax
  const WCHAR *v13; // rax
  __int64 v14; // [rsp+30h] [rbp-41h]
  int v15; // [rsp+40h] [rbp-31h] BYREF
  __int64 v16; // [rsp+44h] [rbp-2Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v18[2]; // [rsp+60h] [rbp-11h] BYREF

  v5 = *(_QWORD *)&PpDDBHandle;
  DatabaseMatch = SdbGetDatabaseMatch(*(__int64 *)&PpDDBHandle, *(const WCHAR **)(a2 + 8), a3, a3, a4);
  if ( !DatabaseMatch )
  {
    v10 = 0;
    goto LABEL_3;
  }
  v15 = 0;
  v16 = 0x400000004LL;
  if ( (unsigned int)SdbQueryDataEx(v5, DatabaseMatch, v8, (int)&v16 + 4, &v15, (__int64)&v16, v14) )
    goto LABEL_20;
  if ( (v15 & 4) == 0 || ExIsProcessorFeaturePresent(9u) )
    v10 = ((v15 & 1) != 0) - 1073740949;
  else
    v10 = 0;
  if ( (v15 & 8) != 0 )
  {
    if ( !PnpSetupInProgress
      && !PnpSetupPhaseInProgress
      && !PnpSetupTypeInProgress
      && !PnpSetupOOBEInProgress
      && !PnpSetupUpgradeInProgress
      && !PnpSetupRollbackActiveInProgress )
    {
      v10 = 0;
      goto LABEL_21;
    }
LABEL_20:
    v10 = -1073740949;
  }
LABEL_21:
  if ( !(unsigned int)SdbReadEntryInformation(v5, DatabaseMatch, v18) && (PiLoggedErrorEventsMask & 0x100) == 0 )
  {
    PiLoggedErrorEventsMask |= 0x100u;
    RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
LABEL_3:
  if ( v10 + 1073740949 <= 1 )
  {
    v12 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    if ( v12 )
      v13 = v12 + 1;
    else
      v13 = *(const WCHAR **)(a2 + 8);
    RtlInitUnicodeString(&DestinationString, v13);
    PnpLogEvent(&DestinationString, 0LL, v10, v18, 16);
  }
  if ( !v10 || v10 + 1073740949 <= 1 )
  {
    PiUpdateDriverDBCache(a2, a3, v8, v10, v18);
    if ( v10 + 1073740949 <= 1 && a5 )
      *a5 = v18[0];
  }
  return v10;
}
