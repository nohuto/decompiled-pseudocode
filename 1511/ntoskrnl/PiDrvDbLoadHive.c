/*
 * XREFs of PiDrvDbLoadHive @ 0x1404BDEE0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1404BDD10 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x140152580 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x140153BE0 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, __int64 a2, HANDLE *a3)
{
  int Key; // ebx
  __int64 v5; // r8
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-9h] BYREF
  int v8; // [rsp+78h] [rbp+27h] BYREF
  __int64 v9; // [rsp+80h] [rbp+2Fh]
  __int64 v10; // [rsp+88h] [rbp+37h]
  int v11; // [rsp+90h] [rbp+3Fh]
  __int128 v12; // [rsp+98h] [rbp+47h]

  *a3 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v9 = 0LL;
  ObjectAttributes.Length = 48;
  v8 = 48;
  ObjectAttributes.ObjectName = a1;
  v10 = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = 576;
  v12 = 0LL;
  Key = ZwLoadKeyEx((__int64)&ObjectAttributes, (__int64)&v8, 128LL);
  if ( Key >= 0 )
  {
    Key = ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
    if ( Key < 0 )
      ZwUnloadKey2((__int64)&ObjectAttributes, 0LL, v5);
  }
  return (unsigned int)Key;
}
