/*
 * XREFs of VrpCreateNamespaceNodePlaceholderKey @ 0x140614980
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140613440 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall VrpCreateNamespaceNodePlaceholderKey(__int64 a1)
{
  NTSTATUS v2; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  KeyHandle = 0LL;
  if ( *(_WORD *)(a1 + 32) )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 32);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v2 >= 0 && Disposition == 1 )
      *(_DWORD *)(a1 + 48) |= 4u;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v2;
}
