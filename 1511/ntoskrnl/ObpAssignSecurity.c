/*
 * XREFs of ObpAssignSecurity @ 0x14046E22C
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObAssignSecurity @ 0x14050D10C (ObAssignSecurity.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x14007E030 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14007E0B0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeAssignSecurityEx @ 0x1404B2D64 (SeAssignSecurityEx.c)
 *     SeDeassignSecurity @ 0x1404B4020 (SeDeassignSecurity.c)
 */

int __fastcall ObpAssignSecurity(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        void *a3,
        POBJECT_TYPE a4,
        int a5,
        char a6)
{
  int v9; // r12d
  __int64 ClientToken; // rdx
  PSECURITY_DESCRIPTOR v12; // rbx
  int result; // eax
  int v14; // esi
  PACCESS_TOKEN v15; // rdx
  int v16; // esi
  int v17; // ebx
  int PoolType; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+A0h] [rbp+30h] BYREF

  v19 = 8LL;
  SecurityDescriptor = 0LL;
  v9 = a2;
  ClientToken = (__int64)a1[2].ClientToken;
  v12 = 0LL;
  NewDescriptor = 0LL;
  result = SeComputeAutoInheritByObjectTypeEx((__int64)a4, ClientToken, a2, &v22, &v19);
  if ( result >= 0 )
  {
    v14 = a5 | v22;
    if ( a6 )
    {
      result = SeAssignSecurityEx(
                 0LL,
                 a1[2].ClientToken,
                 &NewDescriptor,
                 0LL,
                 a4 == ObpDirectoryObjectType,
                 0,
                 a1 + 1,
                 &a4->TypeInfo.GenericMapping,
                 PagedPool);
      if ( result < 0 )
        return result;
      v12 = NewDescriptor;
    }
    if ( v12 )
      LODWORD(v15) = (_DWORD)v12;
    else
      v15 = a1[2].ClientToken;
    v16 = SeAssignSecurityEx2(
            v9,
            (int)v15,
            (int)&SecurityDescriptor,
            0LL,
            a4 == ObpDirectoryObjectType,
            v14,
            &v19,
            (__int64)&a1[1],
            (__int64)&a4->TypeInfo.GenericMapping);
    if ( v16 < 0 )
    {
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      return v16;
    }
    else
    {
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      LOBYTE(PoolType) = KeGetCurrentThread()->PreviousMode;
      v17 = a4->TypeInfo.SecurityProcedure(
              a3,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &a4->TypeInfo.GenericMapping,
              PoolType);
      if ( v17 < 0 )
        SeDeassignSecurity(&SecurityDescriptor);
      return v17;
    }
  }
  return result;
}
