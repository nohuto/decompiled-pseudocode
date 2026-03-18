/*
 * XREFs of HvpHeaderCheckSum @ 0x1403D44F8
 * Callers:
 *     HvpLogInvalidLogHeader @ 0x1401AB28C (HvpLogInvalidLogHeader.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     HvpGetHiveHeader @ 0x1403D4520 (HvpGetHiveHeader.c)
 *     HvpGenerateLogEntry @ 0x1403ED278 (HvpGenerateLogEntry.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404BF534 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1405E4888 (HvIsInPlaceBaseBlockValid.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     HvpGetLogHeader @ 0x1405EC47C (HvpGetLogHeader.c)
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
