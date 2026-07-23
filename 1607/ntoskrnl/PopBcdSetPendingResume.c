/*
 * XREFs of PopBcdSetPendingResume @ 0x140534F24
 * Callers:
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14053D87C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     PopBcdSetupResumeObject @ 0x14053F610 (PopBcdSetupResumeObject.c)
 */

__int64 __fastcall PopBcdSetPendingResume(HANDLE BcdStoreHandle, __int64 a2, __int64 a3, void *a4)
{
  NTSTATUS v6; // ebx
  BCD_FLAGS v7; // r8d
  NTSTATUS v8; // eax
  BCD_FLAGS v9; // r8d
  HANDLE v10; // rdi
  BCD_FLAGS v11; // r8d
  BCD_FLAGS v12; // r8d
  __int16 Buffer; // [rsp+30h] [rbp-30h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-28h] BYREF
  GUID Identifier; // [rsp+40h] [rbp-20h] BYREF

  BcdObjectHandle = 0LL;
  v6 = PopBcdSetupResumeObject(a4);
  if ( v6 >= 0 )
  {
    HIBYTE(Buffer) = 0;
    LOBYTE(Buffer) = (_BYTE)KdDebuggerEnabled != 0;
    BcdSetElementDataWithFlags(a4, 0x26000006u, v7, &Buffer, 2u);
    v6 = BcdQueryObject(a4, 0, 0LL, &Identifier);
    if ( v6 >= 0 )
    {
      v8 = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
      v10 = BcdObjectHandle;
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x23000006u, v9, &Identifier, 0x10u);
        if ( v6 >= 0 )
        {
          Buffer = 1;
          v6 = BcdSetElementDataWithFlags(v10, 0x26000005u, v11, &Buffer, 2u);
          if ( v6 >= 0 )
          {
            Buffer = (unsigned __int8)byte_140303500;
            v6 = BcdSetElementDataWithFlags(v10, 0x26000025u, v12, &Buffer, 2u);
            if ( v6 >= 0 )
              v6 = 0;
          }
        }
      }
      if ( v10 )
        BcdCloseObject(v10);
    }
  }
  return (unsigned int)v6;
}
