/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x1404F89B4
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1404D6418 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404E6B44 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1404F9B40 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140647E10 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PiCMDuplicateRegistryHandle(
        void *a1,
        __int64 a2,
        ACCESS_MASK a3,
        KPROCESSOR_MODE a4,
        HANDLE *Handle)
{
  NTSTATUS v7; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
    v7 = ObOpenObjectByPointer(Object, 0x440u, 0LL, a3, (POBJECT_TYPE)CmKeyObjectType, a4, Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
