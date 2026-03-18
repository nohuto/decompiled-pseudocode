/*
 * XREFs of PiIsDriverBlocked @ 0x1405AA694
 * Callers:
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExIsProcessorFeaturePresent @ 0x14015A72C (ExIsProcessorFeaturePresent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcsrchr @ 0x140173D28 (wcsrchr.c)
 *     PiUpdateDriverDBCache @ 0x1405AA750 (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatch @ 0x1405AA8F0 (SdbGetDatabaseMatch.c)
 *     PnpLogEvent @ 0x14067E508 (PnpLogEvent.c)
 *     SdbQueryDataEx @ 0x140701F24 (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x1407023A0 (SdbReadEntryInformation.c)
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
  int v16; // [rsp+44h] [rbp-2Dh] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v19[2]; // [rsp+60h] [rbp-11h] BYREF

  v5 = *(_QWORD *)&PpDDBHandle;
  DatabaseMatch = SdbGetDatabaseMatch(PpDDBHandle, a4);
  if ( !DatabaseMatch )
  {
    v10 = 0;
    goto LABEL_3;
  }
  v15 = 0;
  LODWORD(v17) = 4;
  v16 = 4;
  if ( (unsigned int)SdbQueryDataEx(v5, DatabaseMatch, v8, (int)&v16, &v15, (__int64)&v17, v14) )
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
  if ( !(unsigned int)SdbReadEntryInformation(v5, DatabaseMatch, v19) && (PiLoggedErrorEventsMask & 0x100) == 0 )
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
    PnpLogEvent(&DestinationString, 0LL, v10, v19, 16);
  }
  if ( !v10 || v10 + 1073740949 <= 1 )
  {
    PiUpdateDriverDBCache(a2, a3, v8, v10, v19);
    if ( v10 + 1073740949 <= 1 && a5 )
      *a5 = v19[0];
  }
  return v10;
}
