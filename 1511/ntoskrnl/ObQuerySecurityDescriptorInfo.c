/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x140420A4C
 * Callers:
 *     SeDefaultObjectMethod @ 0x14042E060 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1404C19F8 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x140421050 (ObpReferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140421240 (SeQuerySecurityDescriptorInfo.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  PSECURITY_DESCRIPTOR v7; // rbp
  unsigned int v8; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v7 = ObjectsSecurityDescriptor;
  v8 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v7 )
    ObDereferenceSecurityDescriptor(v7, 1LL);
  return v8;
}
