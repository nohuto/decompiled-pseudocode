/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x14051DBB0
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
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
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF

  v6 = -1;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
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
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)Object + 1) + 32LL) + 8LL))(
             *(_QWORD *)(*((_QWORD *)Object + 1) + 32LL),
             *(unsigned int *)(*((_QWORD *)Object + 1) + 40LL),
             &v6);
      if ( v3 )
      {
        ValueByName = CmpFindValueByName(*(_QWORD *)(v2[1] + 32LL), v3);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v2[1] + 32LL) + 16LL))(*(_QWORD *)(v2[1] + 32LL), &v6);
        if ( ValueByName != -1 )
          HvpMarkCellDirty(*(_QWORD *)(v2[1] + 32LL), ValueByName, 1);
      }
      CmpUnlockRegistry();
      return ObfDereferenceObject(v2);
    }
  }
  return result;
}
