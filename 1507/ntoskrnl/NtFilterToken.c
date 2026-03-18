/*
 * XREFs of NtFilterToken @ 0x14040F530
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14046E008 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  ULONG v7; // r13d
  KPROCESSOR_MODE PreviousMode; // si
  _QWORD *v10; // rcx
  ULONG v11; // ecx
  int inserted; // edi
  void *v13; // r14
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v17; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v19; // [rsp+6Ch] [rbp-7Ch]
  ULONG PrivilegeCount; // [rsp+70h] [rbp-78h]
  ULONG ulAddend[3]; // [rsp+74h] [rbp-74h] BYREF
  __int64 v22; // [rsp+80h] [rbp-68h] BYREF
  __int64 v23; // [rsp+88h] [rbp-60h] BYREF
  __int64 v24; // [rsp+90h] [rbp-58h] BYREF
  ULONG v25; // [rsp+98h] [rbp-50h]
  _DWORD v26[3]; // [rsp+9Ch] [rbp-4Ch] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-40h] BYREF
  PVOID v28; // [rsp+B0h] [rbp-38h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v29; // [rsp+B8h] [rbp-30h] BYREF

  v7 = Flags;
  v19 = 0;
  memset(ulAddend, 0, sizeof(ulAddend));
  GroupCount = 0;
  v24 = 0LL;
  LODWORD(v22) = 0;
  PrivilegeCount = 0;
  v23 = 0LL;
  v26[0] = 0;
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
    v25 = 0;
    while ( v11 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v11) = 0;
      v25 = v11;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 SidsToDisable->Groups,
                 0,
                 HandleInformation,
                 v17,
                 (__int64)&v24,
                 (__int64)&v22);
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
                   PrivilegesToDelete->Privileges,
                   Object,
                   HandleInformation,
                   v17,
                   (__int64)&v23,
                   (__int64)v26);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( ((unsigned __int8)RestrictedSids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   RestrictedSids->Groups,
                   0,
                   HandleInformation,
                   v17,
                   (__int64)&ulAddend[1],
                   (__int64)ulAddend);
    }
  }
  if ( inserted >= 0 )
  {
    *(_QWORD *)&Flags = 0LL;
    while ( Flags < v19 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&ulAddend[1] + 16LL * Flags + 8) )
      {
        inserted = -1073741811;
        goto LABEL_32;
      }
      *(_QWORD *)&Flags = Flags + 1;
    }
    inserted = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &v28,
                 &v29);
    if ( inserted >= 0 )
    {
      *(_QWORD *)&v26[1] = 0LL;
      LOBYTE(Flags) = PreviousMode;
      inserted = SepFilterToken(
                   (int)v28,
                   Flags,
                   v7,
                   GroupCount,
                   v24,
                   PrivilegeCount,
                   v23,
                   v19,
                   *(__int64 *)&ulAddend[1],
                   ulAddend[0],
                   (__int64)&v26[1]);
      if ( inserted >= 0 )
      {
        v13 = *(void **)&v26[1];
        inserted = ObInsertObject(*(PVOID *)&v26[1], 0LL, v29.GrantedAccess, 1u, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          SepAppendAceToTokenObjectAcl(v13, 8LL, SeAliasAdminsSid);
          ObfDereferenceObject(v13);
        }
      }
      ObfDereferenceObject(v28);
      if ( inserted >= 0 )
        *NewTokenHandle = Handle;
    }
  }
LABEL_32:
  if ( v24 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v24, *(_QWORD *)&Flags);
  }
  if ( v23 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v23, *(_QWORD *)&Flags);
  }
  if ( *(_QWORD *)&ulAddend[1] )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(*(_QWORD *)&ulAddend[1], *(_QWORD *)&Flags);
  }
  return inserted;
}
