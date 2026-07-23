/*
 * XREFs of KiCheckDueTimeExpired @ 0x1400CE988
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400CE2E8 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckDueTimeExpired(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rdx

  v3 = 0;
  if ( a2 == 2 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 248) - MEMORY[0xFFFFF780000003B0];
LABEL_3:
    LOBYTE(v3) = v4 > a3;
    return v3;
  }
  if ( !a2 )
    return 0LL;
  if ( a3 )
  {
    v4 = MEMORY[0xFFFFF78000000014];
    goto LABEL_3;
  }
  return 1LL;
}
