/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x14055CD0C
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

NTSTATUS CmpMarkCurrentProfileDirty()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  _QWORD *v2; // rbx
  __int64 v3; // rax
  unsigned int ValueByName; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+80h] [rbp+20h] BYREF
  int v7; // [rsp+84h] [rbp+24h]
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF

  v6 = -1;
  ObjectAttributes.Length = 48;
  v7 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v1 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
      CmpLockRegistryExclusive();
      v2 = Object;
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 8LL))(
             *(_QWORD *)(*((_QWORD *)Object + 1) + 24LL),
             *(unsigned int *)(*((_QWORD *)Object + 1) + 32LL),
             &v6);
      if ( v3 )
      {
        ValueByName = CmpFindValueByName(*(_QWORD *)(v2[1] + 24LL), v3, (int)&CmpCurrentConfigString);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v2[1] + 24LL) + 16LL))(*(_QWORD *)(v2[1] + 24LL), &v6);
        if ( ValueByName != -1 )
          HvpMarkCellDirty(*(_QWORD *)(v2[1] + 24LL), ValueByName, 1);
      }
      CmpUnlockRegistry();
      return ObfDereferenceObject(v2);
    }
  }
  return result;
}
