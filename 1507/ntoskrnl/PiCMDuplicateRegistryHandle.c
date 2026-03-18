/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x140442BAC
 * Callers:
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1404451DC (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14054BB34 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406932CC (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
