/*
 * XREFs of CmGetSystemDriverList @ 0x140753C54
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     NtOpenKey @ 0x1404A5C10 (NtOpenKey.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     CmpFindControlSet @ 0x140523A10 (CmpFindControlSet.c)
 *     CmpFreeDriverList @ 0x140753E28 (CmpFreeDriverList.c)
 *     CmpSortDriverList @ 0x140753EA8 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x140754D08 (CmpFindDrivers.c)
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
  __int64 v15[2]; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  v15[1] = (__int64)v15;
  ObjectAttributes.Length = 48;
  v15[0] = (__int64)v15;
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
  v5 = *(_QWORD *)(v4 + 32);
  if ( (unsigned int)CmpFindControlSet(v5, *(unsigned int *)(v4 + 40), (__int64)&CmpCurrentString, &KeyHandle) == -1 )
  {
LABEL_18:
    CmpUnlockRegistry();
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    goto LABEL_19;
  }
  Drivers = CmpFindDrivers(v5, (__int64)v15, v14, a1);
  v7 = v5;
  if ( !Drivers )
  {
LABEL_17:
    CmpFreeDriverList(v7, v15);
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
  v8 = (__int64 *)v15[0];
  v9 = 0;
  while ( v8 != v15 )
  {
    v8 = (__int64 *)*v8;
    ++v9;
  }
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v9 + 1), 0x20204D43u);
  if ( !PoolWithTag )
    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
  v11 = v15[0];
  v12 = 0LL;
  while ( (__int64 *)v11 != v15 )
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
  CmpFreeDriverList(v5, v15);
  return PoolWithTag;
}
