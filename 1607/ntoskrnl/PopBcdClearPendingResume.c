/*
 * XREFs of PopBcdClearPendingResume @ 0x14053CB70
 * Callers:
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x140532F44 (BcdFlushStore.c)
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 */

NTSTATUS __fastcall PopBcdClearPendingResume(HANDLE BcdStoreHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  result = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( result >= 0 )
  {
    v3 = BcdDeleteElement(BcdObjectHandle, 0x26000005u);
    if ( v3 >= 0 )
    {
      v3 = BcdDeleteElement(BcdObjectHandle, 0x26000025u);
      if ( v3 >= 0 )
        BcdFlushStore(BcdStoreHandle);
    }
    BcdCloseObject(BcdObjectHandle);
    return v3;
  }
  return result;
}
