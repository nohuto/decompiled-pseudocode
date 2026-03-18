/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x1404D05E0
 * Callers:
 *     SeDefaultObjectMethod @ 0x140486370 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404CFD70 (ObpReferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404D0650 (SeQuerySecurityDescriptorInfo.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  PSECURITY_DESCRIPTOR v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(
                                                      a1 - 48,
                                                      (__int64)a2,
                                                      (__int64)a3,
                                                      (__int64)a4);
  v7 = ObjectsSecurityDescriptor;
  v8 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v7 )
    ObDereferenceSecurityDescriptor((__int64)v7, 1u, v9, v10);
  return v8;
}
