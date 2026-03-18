/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1403E10D0
 * Callers:
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1403B4F34 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x1404C2D98 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1404C53D0 (ExpWnfDeletePermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140547FEC (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 *v3; // rdi
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  int v7; // eax
  ULONG CreateOptions; // ecx
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+38h] BYREF

  v3 = &ExpWnfNameStoreDescriptors[4 * a1];
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v9);
      v6 = v9;
      v4 = (volatile signed __int64 *)(v9 + 8);
    }
    else
    {
      PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v12);
      v6 = v12;
      v4 = (volatile signed __int64 *)(v12 + 16);
    }
    PsDereferenceMonitorContextServerSilo(v6);
  }
  else
  {
    v4 = (volatile signed __int64 *)&ExpWnfWellKnownNameStoreRootKey;
  }
  if ( *v4 )
    goto LABEL_4;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v3 + 1);
  v7 = *((_DWORD *)v3 + 6);
  CreateOptions = *((_DWORD *)v3 + 7) != 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v7 != 0 ? 131097 : 983103, &ObjectAttributes, 0, 0LL, CreateOptions, 0LL);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(v4, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
LABEL_4:
    *a2 = *v4;
    return 0;
  }
  return result;
}
