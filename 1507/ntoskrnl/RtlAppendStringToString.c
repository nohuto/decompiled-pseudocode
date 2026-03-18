/*
 * XREFs of RtlAppendStringToString @ 0x14055A36C
 * Callers:
 *     MiFormFullImageName @ 0x14058298C (MiFormFullImageName.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpInitBackupHive @ 0x1405985E0 (CmpInitBackupHive.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
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
