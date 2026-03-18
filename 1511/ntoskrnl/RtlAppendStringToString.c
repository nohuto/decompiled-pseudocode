/*
 * XREFs of RtlAppendStringToString @ 0x1404C3EF4
 * Callers:
 *     MiFormFullImageName @ 0x14050B410 (MiFormFullImageName.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmpInitBackupHive @ 0x140521568 (CmpInitBackupHive.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  unsigned __int16 Length; // di
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)(v4 + Length) <= Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
