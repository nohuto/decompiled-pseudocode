/*
 * XREFs of RawComputeFileSystemInformationChecksum @ 0x140683448
 * Callers:
 *     RawQueryFileSystemInformation @ 0x1406834A4 (RawQueryFileSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawComputeFileSystemInformationChecksum(__int64 a1)
{
  unsigned __int16 v1; // r10
  unsigned __int16 v2; // r9
  unsigned __int16 i; // r8

  v1 = *(_WORD *)(a1 + 20);
  v2 = 0;
  for ( i = 3; i < v1; ++i )
  {
    if ( (unsigned __int16)(i - 22) > 1u )
      v2 = ((v2 & 1) << 15) + *(unsigned __int8 *)(i + a1) + (v2 >> 1);
  }
  return v2;
}
