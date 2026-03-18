/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1404A4564
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1403E38B4 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     PspThreadOpen @ 0x1404A44EC (PspThreadOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x1405EE178 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x1405EFBC8 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x1405EFF80 (NtRemoveProcessDebug.c)
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
