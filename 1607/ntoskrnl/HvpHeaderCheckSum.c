/*
 * XREFs of HvpHeaderCheckSum @ 0x140481EC0
 * Callers:
 *     HvpLogInvalidLogHeader @ 0x1401B70FC (HvpLogInvalidLogHeader.c)
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 *     HvpGenerateLogEntry @ 0x1404812F0 (HvpGenerateLogEntry.c)
 *     HvpGetHiveHeader @ 0x140481CC8 (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140483AA4 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140484068 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140603A04 (HvIsInPlaceBaseBlockValid.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x140604834 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406064F4 (HvWriteExternal.c)
 *     HvpGetLogHeader @ 0x140610A74 (HvpGetLogHeader.c)
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
