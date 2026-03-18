/*
 * XREFs of W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14029F99C
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14029FB14 (W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 * Callees:
 *     ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x14029FC08 (-DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = DeviceClassCDROMNotifyWorker(*(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION **)(a2 + 8));
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
