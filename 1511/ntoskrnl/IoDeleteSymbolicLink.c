/*
 * XREFs of IoDeleteSymbolicLink @ 0x1404C6394
 * Callers:
 *     VerifierIoDeleteSymbolicLink @ 0x1406C0734 (VerifierIoDeleteSymbolicLink.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x140152640 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x140152980 (ZwOpenSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int TemporaryObject; // ebx
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v3.RootDirectory = 0LL;
  v3.ObjectName = SymbolicLinkName;
  v3.Length = 48;
  v3.Attributes = 576;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  TemporaryObject = ZwOpenSymbolicLinkObject(&Handle, 0x10000u, &v3);
  if ( TemporaryObject >= 0 )
  {
    TemporaryObject = ZwMakeTemporaryObject(Handle);
    if ( TemporaryObject >= 0 )
      ZwClose(Handle);
  }
  return TemporaryObject;
}
