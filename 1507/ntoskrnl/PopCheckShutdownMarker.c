/*
 * XREFs of PopCheckShutdownMarker @ 0x1407E8B40
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     RtlGetSetBootStatusData @ 0x140583084 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140583F50 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140584278 (RtlUnlockBootStatusData.c)
 *     PopDiagTraceDirtyTransition @ 0x1407FB858 (PopDiagTraceDirtyTransition.c)
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
      if ( (_BYTE)word_140353750 )
        PopDiagTraceDirtyTransition(a1, HIBYTE(word_140353750), PopBsdPowerTransition);
    }
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}
