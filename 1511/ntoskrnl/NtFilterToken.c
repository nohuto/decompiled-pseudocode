/*
 * XREFs of NtFilterToken @ 0x1404BD130
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1403C334C (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1403C3368 (SeCaptureLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  char PreviousMode; // si
  _QWORD *v10; // rcx
  ULONG v11; // ecx
  NTSTATUS inserted; // edi
  ULONG i; // edx
  void *v14; // r14
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v18; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v20; // [rsp+6Ch] [rbp-7Ch]
  ULONG PrivilegeCount; // [rsp+70h] [rbp-78h]
  unsigned int v22[3]; // [rsp+74h] [rbp-74h] BYREF
  __int64 v23; // [rsp+80h] [rbp-68h] BYREF
  __int64 v24; // [rsp+88h] [rbp-60h] BYREF
  __int64 v25; // [rsp+90h] [rbp-58h] BYREF
  ULONG v26; // [rsp+98h] [rbp-50h]
  _DWORD v27[3]; // [rsp+9Ch] [rbp-4Ch] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-40h] BYREF
  PVOID v29; // [rsp+B0h] [rbp-38h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v30; // [rsp+B8h] [rbp-30h] BYREF

  v20 = 0;
  memset(v22, 0, sizeof(v22));
  GroupCount = 0;
  v25 = 0LL;
  LODWORD(v23) = 0;
  PrivilegeCount = 0;
  v24 = 0LL;
  v27[0] = 0;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = NewTokenHandle;
  if ( (unsigned __int64)NewTokenHandle >= MmUserProbeAddress )
    v10 = (_QWORD *)MmUserProbeAddress;
  *v10 = *v10;
  if ( SidsToDisable )
  {
    if ( ((unsigned __int8)SidsToDisable & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    GroupCount = SidsToDisable->GroupCount;
    v11 = 0;
    v26 = 0;
    while ( v11 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v11) = 0;
      v26 = v11;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 (char *)SidsToDisable->Groups,
                 GroupCount,
                 PreviousMode,
                 0LL,
                 0,
                 HandleInformation,
                 v18,
                 (void **)&v25,
                 (unsigned int *)&v23);
  }
  else
  {
    inserted = 0;
  }
  if ( inserted >= 0 )
  {
    if ( PrivilegesToDelete )
    {
      if ( ((unsigned __int8)PrivilegesToDelete & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
      inserted = SeCaptureLuidAndAttributesArray(
                   (char *)PrivilegesToDelete->Privileges,
                   PrivilegesToDelete->PrivilegeCount,
                   PreviousMode,
                   (__int64)PrivilegesToDelete,
                   Object,
                   HandleInformation,
                   v18,
                   &v24,
                   v27);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( ((unsigned __int8)RestrictedSids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   (char *)RestrictedSids->Groups,
                   RestrictedSids->GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   HandleInformation,
                   v18,
                   (void **)&v22[1],
                   v22);
    }
  }
  if ( inserted >= 0 )
  {
    for ( i = 0; i < v20; ++i )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v22[1] + 16LL * i + 8) )
      {
        inserted = -1073741811;
        goto LABEL_32;
      }
    }
    inserted = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &v29,
                 &v30);
    if ( inserted >= 0 )
    {
      *(_QWORD *)&v27[1] = 0LL;
      inserted = SepFilterToken(
                   (__int64)v29,
                   PreviousMode,
                   Flags,
                   GroupCount,
                   v25,
                   PrivilegeCount,
                   v24,
                   v20,
                   *(PSID **)&v22[1],
                   v22[0],
                   &v27[1]);
      if ( inserted >= 0 )
      {
        v14 = *(void **)&v27[1];
        inserted = ObInsertObject(*(PVOID *)&v27[1], 0LL, v30.GrantedAccess, 1u, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          SepAppendAceToTokenObjectAcl((__int64)v14, 8, SeAliasAdminsSid);
          ObfDereferenceObject(v14);
        }
      }
      ObfDereferenceObject(v29);
      if ( inserted >= 0 )
        *NewTokenHandle = Handle;
    }
  }
LABEL_32:
  if ( v25 )
    SeReleaseLuidAndAttributesArray((void *)v25, PreviousMode);
  if ( v24 )
    SeReleaseLuidAndAttributesArray((void *)v24, PreviousMode);
  if ( *(_QWORD *)&v22[1] )
    SeReleaseLuidAndAttributesArray(*(void **)&v22[1], PreviousMode);
  return inserted;
}
