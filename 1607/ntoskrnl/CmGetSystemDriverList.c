/*
 * XREFs of CmGetSystemDriverList @ 0x1407AF6CC
 * Callers:
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpFindControlSet @ 0x1405603BC (CmpFindControlSet.c)
 *     CmpFreeDriverList @ 0x1407AF8A0 (CmpFreeDriverList.c)
 *     CmpSortDriverList @ 0x1407AF920 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x1407B03C8 (CmpFindDrivers.c)
 */

HANDLE *__fastcall CmGetSystemDriverList(__int64 a1)
{
  HANDLE v2; // rbx
  PVOID v3; // rdi
  __int64 v4; // rax
  ULONG_PTR v5; // rsi
  char Drivers; // al
  ULONG_PTR v7; // rcx
  __int64 *v8; // rax
  int v9; // ecx
  HANDLE *PoolWithTag; // r14
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // [rsp+28h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16[2]; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  v16[1] = (__int64)v16;
  ObjectAttributes.Length = 48;
  v16[0] = (__int64)v16;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  v2 = KeyHandle;
  if ( ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL) < 0 )
  {
LABEL_19:
    NtClose(v2);
    return 0LL;
  }
  CmpLockRegistryExclusive();
  v3 = Object;
  v4 = *((_QWORD *)Object + 1);
  v5 = *(_QWORD *)(v4 + 24);
  if ( (unsigned int)CmpFindControlSet(v5, *(unsigned int *)(v4 + 32), (int)&CmpCurrentString, &KeyHandle) == -1 )
  {
LABEL_18:
    CmpUnlockRegistry();
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    goto LABEL_19;
  }
  Drivers = CmpFindDrivers(v5, (__int64)v16, v14, a1, v15);
  v7 = v5;
  if ( !Drivers )
  {
LABEL_17:
    CmpFreeDriverList(v7, v16);
    goto LABEL_18;
  }
  if ( !(unsigned __int8)CmpSortDriverList(v5) )
  {
    v7 = v5;
    goto LABEL_17;
  }
  CmpUnlockRegistry();
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  NtClose(v2);
  v8 = (__int64 *)v16[0];
  v9 = 0;
  while ( v8 != v16 )
  {
    v8 = (__int64 *)*v8;
    ++v9;
  }
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v9 + 1), 0x20204D43u);
  if ( !PoolWithTag )
    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
  v11 = v16[0];
  v12 = 0LL;
  while ( (__int64 *)v11 != v16 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v11 + 32);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&PoolWithTag[v12], 0x2001Fu, &ObjectAttributes) >= 0 )
      v12 = (unsigned int)(v12 + 1);
    v11 = *(_QWORD *)v11;
  }
  PoolWithTag[v12] = 0LL;
  CmpFreeDriverList(v5, v16);
  return PoolWithTag;
}
