/*
 * XREFs of HvpHeaderCheckSum @ 0x140480C14
 * Callers:
 *     HvpLogInvalidLogHeader @ 0x1401B6FE0 (HvpLogInvalidLogHeader.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     HvpGenerateLogEntry @ 0x140480044 (HvpGenerateLogEntry.c)
 *     HvpGetHiveHeader @ 0x140480A1C (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140603AB8 (HvIsInPlaceBaseBlockValid.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     HvpGetLogHeader @ 0x140610B28 (HvpGetLogHeader.c)
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
