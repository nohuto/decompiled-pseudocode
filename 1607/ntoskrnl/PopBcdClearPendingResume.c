/*
 * XREFs of PopBcdClearPendingResume @ 0x14053C630
 * Callers:
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x140532A04 (BcdFlushStore.c)
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 */

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &Handle);
  if ( (int)result >= 0 )
  {
    v3 = BcdDeleteElement(Handle, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BcdDeleteElement(Handle, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(Handle);
    return (unsigned int)v3;
  }
  return result;
}
