/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x140443F00
 * Callers:
 *     PiCMOpenObjectKey @ 0x140442BB8 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x1404B28C0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404BE4F4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14051A4C4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
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
