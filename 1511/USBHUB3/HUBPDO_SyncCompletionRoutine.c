/*
 * XREFs of HUBPDO_SyncCompletionRoutine @ 0x1C0011D50
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00100E4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 */

__int64 __fastcall HUBPDO_SyncCompletionRoutine(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  int v3; // ecx
  __int64 v5; // rbx
  __int64 v6; // rbx
  int USBDErrorFromNTStatus; // eax

  v3 = *(_DWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a2 + 184);
  if ( v3 < 0 && *(_DWORD *)(v5 + 24) == 2228227 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !*(_DWORD *)(v6 + 4) )
    {
      if ( v3 == -1073741667 )
        USBDErrorFromNTStatus = -1073713152;
      else
        USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v3);
      *(_DWORD *)(v6 + 4) = USBDErrorFromNTStatus;
    }
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
