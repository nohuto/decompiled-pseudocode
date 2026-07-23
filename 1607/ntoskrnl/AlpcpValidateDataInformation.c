/*
 * XREFs of AlpcpValidateDataInformation @ 0x1406555E4
 * Callers:
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpValidateDataInformation(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v4; // r9
  char v6; // cl
  _DWORD *v7; // rdx
  unsigned __int64 v8; // r8

  v2 = *(_WORD *)(a2 + 6);
  v4 = *(_WORD *)(a2 + 2);
  if ( v2 < 0x28u )
    return 3221225485LL;
  v6 = *(_WORD *)(a2 + 6);
  if ( v2 > (unsigned __int64)v4 - 24 )
    return 3221225485LL;
  v7 = (_DWORD *)(v2 + a1);
  v8 = (unsigned __int64)((unsigned __int16)(v4 - v2) - 8) >> 4;
  if ( ((v6 + (_BYTE)a1) & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  return (unsigned int)v8 < *v7 ? 0xC000000D : 0;
}
