/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1406A825C
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     EtwpQueryTrace @ 0x14048E7E4 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x140491C9C (EtwpCheckNotificationAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, char a2)
{
  unsigned int v2; // r8d
  char v4; // cl

  v2 = 0;
  if ( !a2 )
    return 0LL;
  v4 = *(_BYTE *)(a1 + 1738);
  if ( ((v4 - 49) & 0xCF) != 0 || v4 == 65 )
    return (unsigned int)-1073741790;
  return v2;
}
