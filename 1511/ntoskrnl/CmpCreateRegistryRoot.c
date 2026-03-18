/*
 * XREFs of CmpCreateRegistryRoot @ 0x140745C60
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EnlistKeyBodyWithKCB @ 0x1403E0248 (EnlistKeyBodyWithKCB.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x140745B5C (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  char *KeyControlBlock; // rax
  char *v5; // rbx
  _QWORD *v6; // rax
  _DWORD *v7; // rbx
  NTSTATUS v8; // eax
  int v10; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  ACL *v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+40h] BYREF
  PVOID v19; // [rsp+C8h] [rbp+48h] BYREF

  if ( CmpCreateRootNode(a1, a2, &v16) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v14 = v2;
    v10 = 48;
    v11 = 0LL;
    v13 = 64;
    v12 = &CmRegistryRootName;
    v15 = 0LL;
    v3 = ObCreateObject(0, CmKeyObjectType, (__int64)&v10, 1, 0, 88, 0, 0, &Object);
    ExFreePoolWithTag(v2, 0);
    if ( v3 >= 0 )
    {
      KeyControlBlock = (char *)CmpCreateKeyControlBlock(CmpMasterHive, v16, 0LL, 0, (__m128i *)&CmRegistryRootName);
      v5 = KeyControlBlock;
      if ( KeyControlBlock )
      {
        CmpUnlockKcb(KeyControlBlock);
        v6 = Object;
        *(_DWORD *)Object = 1803104306;
        v6[1] = v5;
        v6[2] = 0LL;
        v7 = Object;
        *((_QWORD *)Object + 3) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v7[12] = 0;
        *((_QWORD *)v7 + 10) = v7 + 18;
        *((_QWORD *)v7 + 9) = v7 + 18;
        EnlistKeyBodyWithKCB((signed __int64)v7, 0);
        *((_QWORD *)v7 + 7) = 0LL;
        *((_QWORD *)v7 + 8) = 0LL;
        if ( ObInsertObject(v7, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v8 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v19, 0LL);
          CmpRegistryRootObject = v19;
          if ( v8 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
