/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x140509FD0
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkCopyProcessDebugPort @ 0x14046ACD0 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x140666668 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x1406685CC (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140668A2C (NtRemoveProcessDebug.c)
 * Callees:
 *     <none>
 */

char __fastcall PspCheckForInvalidAccessByProtection(char a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char v3; // r9
  int v5; // eax

  v3 = 0;
  if ( a1 )
  {
    if ( (a3 & 7) != 0 )
    {
      if ( (unsigned __int8)(a2 & 7) < (unsigned __int8)(a3 & 7) )
        return 1;
      v5 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)a2 >> 4));
      if ( !_bittest(&v5, a3 >> 4) )
        return 1;
    }
  }
  return v3;
}
