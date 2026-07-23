/*
 * XREFs of PopBcdClearPendingResume @ 0x1404FBDA4
 * Callers:
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x140152180 (ZwFlushKey.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __fastcall PopBcdClearPendingResume(HANDLE KeyHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  __int64 v4; // rcx
  char v5; // bp
  __int64 v6; // rcx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  result = BcdOpenObject(KeyHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( result >= 0 )
  {
    v3 = BcdDeleteElement(BcdObjectHandle, 0x26000005u);
    if ( v3 >= 0 )
    {
      v3 = BcdDeleteElement(BcdObjectHandle, 0x26000025u);
      if ( v3 >= 0 )
      {
        LOBYTE(v4) = BiIsOfflineHandle((char)KeyHandle);
        v5 = v4;
        if ( (int)BiAcquireBcdSyncMutant(v4) >= 0 )
        {
          ZwFlushKey(KeyHandle);
          LOBYTE(v6) = v5;
          BiReleaseBcdSyncMutant(v6);
        }
      }
    }
    BcdCloseObject(BcdObjectHandle);
    return v3;
  }
  return result;
}
