/*
 * XREFs of ObpAssignSecurity @ 0x14041E8D0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     ObAssignSecurity @ 0x140548D00 (ObAssignSecurity.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x140012B10 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140012B90 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x1404BBEA8 (SeDeassignSecurity.c)
 *     SeAssignSecurityEx @ 0x1404BE6A4 (SeAssignSecurityEx.c)
 */

int __fastcall ObpAssignSecurity(__int64 a1, __int64 a2, void *a3, POBJECT_TYPE a4, int a5, char a6)
{
  int v8; // r15d
  PSECURITY_DESCRIPTOR v10; // rdi
  int result; // eax
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // ebx
  int PoolType; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-40h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+60h] [rbp-38h] BYREF
  int v19; // [rsp+A0h] [rbp+8h] BYREF

  v16 = 8LL;
  SecurityDescriptor = 0LL;
  NewDescriptor = 0LL;
  v8 = a2;
  v10 = 0LL;
  result = SeComputeAutoInheritByObjectTypeEx((__int64)a4, *(_QWORD *)(a1 + 64), a2, &v19, &v16);
  if ( result >= 0 )
  {
    v12 = a5 | v19;
    if ( a6 )
    {
      result = SeAssignSecurityEx(
                 0LL,
                 *(PSECURITY_DESCRIPTOR *)(a1 + 64),
                 &NewDescriptor,
                 0LL,
                 a4 == ObpDirectoryObjectType,
                 0,
                 (PSECURITY_SUBJECT_CONTEXT)(a1 + 32),
                 &a4->TypeInfo.GenericMapping,
                 PagedPool);
      if ( result < 0 )
        return result;
      v10 = NewDescriptor;
    }
    if ( v10 )
      LODWORD(v13) = (_DWORD)v10;
    else
      v13 = *(_QWORD *)(a1 + 64);
    v14 = SeAssignSecurityEx2(
            v8,
            v13,
            (int)&SecurityDescriptor,
            0LL,
            a4 == ObpDirectoryObjectType,
            v12,
            &v16,
            a1 + 32,
            (__int64)&a4->TypeInfo.GenericMapping);
    if ( v14 < 0 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    else
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      LOBYTE(PoolType) = KeGetCurrentThread()->PreviousMode;
      v14 = a4->TypeInfo.SecurityProcedure(
              a3,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &a4->TypeInfo.GenericMapping,
              PoolType);
      if ( v14 < 0 )
        SeDeassignSecurity(&SecurityDescriptor);
    }
    return v14;
  }
  return result;
}
