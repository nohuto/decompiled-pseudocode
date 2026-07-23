/*
 * XREFs of SeFilterToken @ 0x14064D7C8
 * Callers:
 *     <none>
 * Callees:
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 */

NTSTATUS __stdcall SeFilterToken(
        PACCESS_TOKEN ExistingToken,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PACCESS_TOKEN *FilteredToken)
{
  PACCESS_TOKEN *v6; // rsi
  ULONG PrivilegeCount; // ebx
  ULONG v8; // r10d
  SID_AND_ATTRIBUTES *v9; // r11
  ULONG GroupCount; // ebp
  SID_AND_ATTRIBUTES *Groups; // r14
  LUID_AND_ATTRIBUTES *Privileges; // rdi
  ULONG v14; // ecx
  ULONG *p_Attributes; // rax
  NTSTATUS inserted; // edi
  PVOID v17; // rbx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v6 = FilteredToken;
  PrivilegeCount = 0;
  Object = 0LL;
  v8 = 0;
  v9 = 0LL;
  GroupCount = 0;
  Groups = 0LL;
  Privileges = 0LL;
  *FilteredToken = 0LL;
  if ( SidsToDisable )
  {
    GroupCount = SidsToDisable->GroupCount;
    Groups = SidsToDisable->Groups;
  }
  if ( PrivilegesToDelete )
  {
    PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
    Privileges = PrivilegesToDelete->Privileges;
  }
  if ( RestrictedSids
    && (v8 = RestrictedSids->GroupCount, v9 = RestrictedSids->Groups, v14 = 0, RestrictedSids->GroupCount) )
  {
    p_Attributes = &RestrictedSids->Groups[0].Attributes;
    while ( !*p_Attributes )
    {
      ++v14;
      p_Attributes += 4;
      if ( v14 >= v8 )
        goto LABEL_10;
    }
    return -1073741811;
  }
  else
  {
LABEL_10:
    inserted = SepFilterToken(
                 (__int64)ExistingToken,
                 0,
                 Flags,
                 GroupCount,
                 (__int64)Groups,
                 PrivilegeCount,
                 (__int64)Privileges,
                 v8,
                 &v9->Sid,
                 0,
                 &Object);
    if ( inserted >= 0 )
    {
      v17 = Object;
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        SepAppendAceToTokenObjectAcl((__int64)v17, 8, SeAliasAdminsSid);
        *v6 = v17;
      }
    }
    return inserted;
  }
}
