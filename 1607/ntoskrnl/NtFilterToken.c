/*
 * XREFs of NtFilterToken @ 0x14047BC68
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14045F228 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v10; // rcx
  ULONG v11; // ecx
  NTSTATUS inserted; // edi
  ULONG i; // edx
  PVOID v14; // r14
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v18; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v20; // [rsp+6Ch] [rbp-7Ch]
  UINT uAddend[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v22; // [rsp+78h] [rbp-70h] BYREF
  ULONG v23; // [rsp+80h] [rbp-68h]
  __int64 v24; // [rsp+84h] [rbp-64h] BYREF
  __int64 v25; // [rsp+90h] [rbp-58h] BYREF
  __int64 v26; // [rsp+98h] [rbp-50h] BYREF
  PVOID v27; // [rsp+A0h] [rbp-48h] BYREF
  PVOID v28; // [rsp+A8h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-38h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v30; // [rsp+B8h] [rbp-30h] BYREF

  v20 = 0;
  v22 = 0LL;
  uAddend[0] = 0;
  GroupCount = 0;
  v25 = 0LL;
  v24 = 0LL;
  uAddend[1] = 0;
  v26 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = (__int64)NewTokenHandle;
  if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v10 = *(_QWORD *)v10;
  if ( SidsToDisable )
  {
    if ( ((unsigned __int8)SidsToDisable & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    GroupCount = SidsToDisable->GroupCount;
    v11 = 0;
    v23 = 0;
    while ( v11 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v11) = 0;
      v23 = v11;
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
                 (unsigned int *)&v24);
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
      uAddend[1] = PrivilegesToDelete->PrivilegeCount;
      inserted = SeCaptureLuidAndAttributesArray(
                   (char *)PrivilegesToDelete->Privileges,
                   uAddend[1],
                   PreviousMode,
                   (__int64)PrivilegesToDelete,
                   Object,
                   HandleInformation,
                   v18,
                   &v26,
                   (_DWORD *)&v24 + 1);
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
                   (void **)&v22,
                   uAddend);
    }
  }
  if ( inserted >= 0 )
  {
    for ( i = 0; i < v20; ++i )
    {
      if ( *(_DWORD *)(v22 + 16LL * i + 8) )
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
                 &v28,
                 &v30);
    if ( inserted >= 0 )
    {
      v27 = 0LL;
      inserted = SepFilterToken(
                   (__int64)v28,
                   PreviousMode,
                   Flags,
                   GroupCount,
                   v25,
                   uAddend[1],
                   v26,
                   v20,
                   (PSID *)v22,
                   uAddend[0],
                   &v27);
      if ( inserted >= 0 )
      {
        v14 = v27;
        inserted = ObInsertObject(v27, 0LL, v30.GrantedAccess, 1u, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          SepAppendAceToTokenObjectAcl((__int64)v14, 8, SeAliasAdminsSid);
          ObfDereferenceObject(v14);
        }
      }
      ObfDereferenceObject(v28);
      if ( inserted >= 0 )
        *NewTokenHandle = Handle;
    }
  }
LABEL_32:
  if ( v25 )
    SeReleaseLuidAndAttributesArray((void *)v25, PreviousMode);
  if ( v26 )
    SeReleaseLuidAndAttributesArray((void *)v26, PreviousMode);
  if ( v22 )
    SeReleaseLuidAndAttributesArray((void *)v22, PreviousMode);
  return inserted;
}
