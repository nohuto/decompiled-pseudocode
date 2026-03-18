/*
 * XREFs of HvpHeaderCheckSum @ 0x1404AFFCC
 * Callers:
 *     HvpGenerateLogEntry @ 0x14044D908 (HvpGenerateLogEntry.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     HvpGetHiveHeader @ 0x1404AFA28 (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvIsInPlaceBaseBlockValid @ 0x14065B7D0 (HvIsInPlaceBaseBlockValid.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     HvpGetLogHeader @ 0x140664AE4 (HvpGetLogHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    result = 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
