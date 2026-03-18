/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1403F63DC
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1404C2B04 (ExpWnfDeletePermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x1404EF04C (ExpWnfRegisterPermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14057FC78 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406B9F14 (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A020 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 *v3; // r8
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  bool v6; // zf
  int v7; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+18h] BYREF

  v3 = &ExpWnfNameStoreDescriptors[4 * a1];
  if ( a1 )
  {
    if ( a1 == 1 )
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 896);
    else
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 904);
  }
  else
  {
    v4 = (volatile signed __int64 *)&ExpWnfWellKnownNameStoreRootKey;
  }
  if ( *v4 )
  {
    *a2 = *v4;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v3 + 1);
  v6 = *((_DWORD *)v3 + 7) == 0;
  v7 = *((_DWORD *)v3 + 6);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v7 != 0 ? 131097 : 983103, &ObjectAttributes, 0, 0LL, !v6, 0LL);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(v4, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    *a2 = *v4;
    return 0;
  }
  return result;
}
