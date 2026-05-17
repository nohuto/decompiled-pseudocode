/*
 * XREFs of RtlDecompressBuffer @ 0x180089C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlDecompressBuffer(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 4u )
    return 3221226079LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _DWORD, __int64, _QWORD))RtlDecompressBufferProcs[a1])(
           a2,
           a3,
           a4,
           a5,
           0,
           a6,
           0LL);
}
