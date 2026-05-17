/*
 * XREFs of RtlCompressBuffer @ 0x18005B470
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x1800F52A0 (EtwpWriteBufferCompressed.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlCompressBuffer(
        unsigned __int16 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, int, int, __int64, __int64))RtlCompressBufferProcs[(unsigned __int8)a1])(
           a1 & 0xFF00,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
