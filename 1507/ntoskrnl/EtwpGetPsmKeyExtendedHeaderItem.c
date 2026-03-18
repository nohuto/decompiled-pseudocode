/*
 * XREFs of EtwpGetPsmKeyExtendedHeaderItem @ 0x1406E24E4
 * Callers:
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 *     EtwpQueryPsmKey @ 0x1406E25C8 (EtwpQueryPsmKey.c)
 */

void *__fastcall EtwpGetPsmKeyExtendedHeaderItem(__int64 a1)
{
  _KPROCESS *Process; // r15
  __int64 v3; // r14
  PACCESS_TOKEN v4; // rsi
  bool v5; // bl
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = 8LL;
  v4 = PsReferencePrimaryToken(Process);
  v5 = SeSecurityAttributePresent((__int64)v4, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent((__int64)v4, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v5 )
  {
    v9 = 466LL;
    v6 = EtwpQueryPsmKey(v4, a1 + 8, &v9);
    v7 = v9;
    if ( v6 < 0 )
      v7 = 0LL;
    v3 = v7 + 8;
  }
  else
  {
    LOWORD(v7) = v9;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v4);
  *(_DWORD *)(a1 + 2) = 9;
  *(_WORD *)(a1 + 6) = v7;
  *(_WORD *)a1 = (v3 + 7) & 0xFFF8;
  return memset((void *)(v3 + a1), 0, (((_DWORD)v3 + 7) & 0xFFFFFFF8) - v3);
}
