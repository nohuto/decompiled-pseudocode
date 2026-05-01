/*
 * XREFs of ?RmpSystemTerminateHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003809C
 * Callers:
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180035350 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?RmpSystemTerminateModernHost@@YAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x1800380F0 (-RmpSystemTerminateModernHost@@YAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 */

NTSTATUS __fastcall RmpSystemTerminateHost(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // ecx
  NTSTATUS result; // eax

  v2 = *((_DWORD *)a1 + 14);
  if ( v2 )
  {
    if ( v2 != 1 )
      return -1073741811;
    result = NtTerminateJobObject(*((HANDLE *)a1 + 92), -1073741756);
  }
  else
  {
    result = RmpSystemTerminateModernHost(
               (char *)a1 + 64,
               *((unsigned int *)a1 + 149),
               *((unsigned int *)a1 + 150),
               *((_QWORD *)a1 + 3));
  }
  if ( result >= 0 )
    return 0;
  return result;
}
