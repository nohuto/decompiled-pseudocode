/*
 * XREFs of IoCreateSymbolicLink @ 0x14058107C
 * Callers:
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     VerifierIoCreateSymbolicLink @ 0x140741F00 (VerifierIoCreateSymbolicLink.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x1407B9CBC (WmipDriverEntry.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x140180630 (ZwCreateSymbolicLinkObject.c)
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
