/*
 * XREFs of CmpCreateRegistryRoot @ 0x1407AE4D4
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     EnlistKeyBodyWithKCB @ 0x140491474 (EnlistKeyBodyWithKCB.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x1407AE788 (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  NTSTATUS v7; // eax
  __int64 v9; // [rsp+30h] [rbp-39h]
  __int64 v10; // [rsp+38h] [rbp-31h]
  PVOID v11; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  int v13; // [rsp+68h] [rbp-1h] BYREF
  __int64 v14; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+80h] [rbp+17h]
  ACL *v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)CmpCreateRootNode(a1, a2, &v19) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v13 = 48;
    v14 = 0LL;
    v15 = &CmRegistryRootName;
    v16 = 64;
    v17 = v2;
    v18 = 0LL;
    v3 = ObCreateObject(0, CmKeyObjectType, (__int64)&v13, 1, 0, 88, 0, 0, &Object);
    ExFreePoolWithTag(v2, 0);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      LODWORD(v10) = 0;
      LODWORD(v9) = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      if ( (int)CmpCreateKeyControlBlock(CmpMasterHive, v19, 0LL, 0LL, 0, &DestinationString.Length, v9, v10, &v22) >= 0 )
      {
        v4 = Object;
        v5 = v22;
        *(_DWORD *)Object = 1803104306;
        v4[1] = v5;
        v4[2] = 0LL;
        v6 = Object;
        *((_QWORD *)Object + 3) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v6[12] = 0;
        *((_QWORD *)v6 + 10) = v6 + 18;
        *((_QWORD *)v6 + 9) = v6 + 18;
        EnlistKeyBodyWithKCB((signed __int64)v6, 0);
        *((_QWORD *)v6 + 7) = 0LL;
        *((_QWORD *)v6 + 8) = 0LL;
        if ( ObInsertObject(v6, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v7 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v11, 0LL);
          CmpRegistryRootObject = v11;
          if ( v7 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
