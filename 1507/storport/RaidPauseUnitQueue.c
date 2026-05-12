/*
 * XREFs of RaidPauseUnitQueue @ 0x1C0007450
 * Callers:
 *     StorPortPauseDevice @ 0x1C00072E0 (StorPortPauseDevice.c)
 *     RaUnitRequestPowerUp @ 0x1C00074EC (RaUnitRequestPowerUp.c)
 *     StorPortCompleteRequest @ 0x1C00279A0 (StorPortCompleteRequest.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseUnitQueue(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // dl
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 428));
  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    v2 = *(_BYTE *)(v1 + 56);
  else
    v2 = -1;
  result = *(unsigned int *)(a1 + 88);
  if ( (qword_1C0044010 & 0x200) != 0 )
    return DbgLogRequest(
             *(_QWORD *)(a1 + 24),
             4,
             (_DWORD)retaddr,
             BYTE2(result) | ((BYTE1(result) | (((unsigned __int8)result | (v2 << 8)) << 8)) << 8),
             *(int *)(a1 + 428),
             0LL,
             0LL);
  return result;
}
