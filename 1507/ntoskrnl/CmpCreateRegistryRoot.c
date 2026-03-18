/*
 * XREFs of CmpCreateRegistryRoot @ 0x1407D7838
 * Callers:
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EnlistKeyBodyWithKCB @ 0x140449DEC (EnlistKeyBodyWithKCB.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x1407D79B4 (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // r9d
  int v4; // ebx
  char *KeyControlBlock; // rax
  char *v6; // rbx
  _QWORD *v7; // rax
  _DWORD *v8; // rbx
  NTSTATUS v9; // eax
  int v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  ACL *v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  unsigned int v17; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h]
  HANDLE Handle; // [rsp+C0h] [rbp+40h] BYREF
  PVOID v20; // [rsp+C8h] [rbp+48h] BYREF

  if ( (unsigned __int8)CmpCreateRootNode(a1, a2, &v17) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v15 = v2;
    v11 = 48;
    LOBYTE(v3) = 1;
    v12 = 0LL;
    v14 = 64;
    v13 = &CmRegistryRootName;
    v16 = 0LL;
    v4 = ObCreateObject(0, (int)CmKeyObjectType, (int)&v11, v3);
    ExFreePoolWithTag(v2, 0);
    if ( v4 >= 0 )
    {
      KeyControlBlock = (char *)CmpCreateKeyControlBlock(CmpMasterHive, v17, 0LL, 0, (__m128i *)&CmRegistryRootName);
      v6 = KeyControlBlock;
      if ( KeyControlBlock )
      {
        CmpUnlockKcb(KeyControlBlock);
        v7 = Object;
        *(_DWORD *)Object = 1803104306;
        v7[1] = v6;
        v7[2] = 0LL;
        v8 = Object;
        *((_QWORD *)Object + 3) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v8[12] = 0;
        *((_QWORD *)v8 + 10) = v8 + 18;
        *((_QWORD *)v8 + 9) = v8 + 18;
        EnlistKeyBodyWithKCB((signed __int64)v8, 0);
        *((_QWORD *)v8 + 7) = 0LL;
        *((_QWORD *)v8 + 8) = 0LL;
        if ( ObInsertObject(v8, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v9 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v20, 0LL);
          CmpRegistryRootObject = v20;
          if ( v9 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
