/*
 * XREFs of RtlAppendStringToString @ 0x1405446F0
 * Callers:
 *     MiFormFullImageName @ 0x140544648 (MiFormFullImageName.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     CmpInitBackupHive @ 0x14054DB38 (CmpInitBackupHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     CmpFlushBackupHive @ 0x1406044B0 (CmpFlushBackupHive.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
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
