/*
 * XREFs of PopCheckShutdownMarker @ 0x1407661AC
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     RtlGetSetBootStatusData @ 0x14050BC64 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x14050CBEC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14050CE8C (RtlUnlockBootStatusData.c)
 *     PopDiagTraceDirtyTransition @ 0x140784EF4 (PopDiagTraceDirtyTransition.c)
 */

int __fastcall PopCheckShutdownMarker(__int64 a1)
{
  int result; // eax
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    if ( RtlGetSetBootStatusData(FileHandle, 1u, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL) >= 0 )
    {
      if ( (_BYTE)word_1403059E0 )
        PopDiagTraceDirtyTransition(a1, HIBYTE(word_1403059E0), PopBsdPowerTransition);
    }
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}
