/*
 * XREFs of EtwpGetSchematizedFilterSize @ 0x14040E9B0
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14040AED0 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040E5E0 (EtwpRegisterUMGuid.c)
 *     EtwpCalculateUpdateNotification @ 0x140491000 (EtwpCalculateUpdateNotification.c)
 *     EtwpBuildNotificationPacket @ 0x140491E2C (EtwpBuildNotificationPacket.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetSchematizedFilterSize(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  unsigned int v5; // r8d
  _DWORD *v6; // r9
  __int64 v7; // r11

  v2 = *(_QWORD *)(a1 + 368);
  v3 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = (_DWORD *)(a1 + 112);
    v7 = v2 + 64;
    do
    {
      if ( *v6 && *(_QWORD *)v7 && ((unsigned __int8)(1 << v5) & a2) != 0 )
        v3 += (*(_DWORD *)(*(_QWORD *)v7 + 16LL) + 7) & 0xFFFFFFF8;
      ++v5;
      v6 += 8;
      v7 += 80LL;
    }
    while ( v5 < 8 );
  }
  return v3;
}
