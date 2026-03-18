/*
 * XREFs of IoCreateSymbolicLink @ 0x1404C1FE0
 * Callers:
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     VerifierIoCreateSymbolicLink @ 0x1406C070C (VerifierIoCreateSymbolicLink.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140752B34 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x140151C80 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v2; // ebx
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v4.Length = 48;
  v4.RootDirectory = 0LL;
  v4.Attributes = 592;
  v4.SecurityQualityOfService = 0LL;
  v4.ObjectName = SymbolicLinkName;
  v4.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  v2 = ZwCreateSymbolicLinkObject(&Handle, 0xF0001u, &v4, DeviceName);
  if ( v2 >= 0 )
    ZwClose(Handle);
  return v2;
}
