/*
 * XREFs of IoCreateSymbolicLink @ 0x1404EEF88
 * Callers:
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14015B320 (ZwCreateSymbolicLinkObject.c)
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
