/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x180073B40
 * Callers:
 *     EtwpInitializeCompression @ 0x1800F51B0 (EtwpInitializeCompression.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlGetCompressionWorkSpaceSize(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  return ((__int64 (__fastcall *)(_QWORD, __int64, __int64))RtlWorkSpaceProcs[(unsigned __int8)a1])(a1 & 0xFF00, a2, a3);
}
