/*
 * XREFs of NtCreateSymbolicLinkObject @ 0x140411194
 * Callers:
 *     BuildKnownDlls @ 0x1407BD39C (BuildKnownDlls.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407E2610 (ObpCreateDosDevicesDirectory.c)
 *     IopReassignSystemRoot @ 0x1407E4D04 (IopReassignSystemRoot.c)
 *     CreateSystemRootLink @ 0x1407E59E8 (CreateSystemRootLink.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  _QWORD *v8; // rcx
  int v9; // r9d
  char PreviousMode; // r13
  UNICODE_STRING *v11; // rax
  int inserted; // esi
  char *v13; // rdi
  SIZE_T MaximumLength; // rdx
  unsigned int v15; // esi
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  UNICODE_STRING *v18; // rdi
  REGHANDLE v19; // r10
  unsigned int v20; // r9d
  __int64 v21; // rax
  unsigned int v22; // r9d
  ULONGLONG Buffer; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int16 v30; // ax
  wchar_t *v31; // rdx
  wchar_t *v32; // rdx
  int v33; // [rsp+50h] [rbp-108h] BYREF
  UNICODE_STRING v34; // [rsp+58h] [rbp-100h] BYREF
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  _DWORD v36[4]; // [rsp+70h] [rbp-E8h] BYREF
  int v37; // [rsp+80h] [rbp-D8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-C8h] BYREF
  UNICODE_STRING *ObjectName; // [rsp+A0h] [rbp-B8h]
  PVOID NewObject; // [rsp+A8h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+B0h] [rbp-A8h] BYREF

  v36[2] = DesiredAccess;
  Handle = 0LL;
  Object = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v34, 0LL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    ObjectName = ObjectAttributes->ObjectName;
    if ( ObjectName )
    {
      DestinationString = *ObjectName;
      v30 = _mm_cvtsi128_si32((__m128i)DestinationString);
      if ( v30 )
      {
        v31 = (wchar_t *)((char *)DestinationString.Buffer + v30);
        if ( (unsigned __int64)v31 > MmUserProbeAddress || v31 < DestinationString.Buffer )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    v34 = *Name;
    if ( v34.MaximumLength )
    {
      v32 = (wchar_t *)((char *)v34.Buffer + v34.MaximumLength);
      if ( (unsigned __int64)v32 > MmUserProbeAddress || v32 < v34.Buffer )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v8 = SymbolicLinkHandle;
    if ( (unsigned __int64)SymbolicLinkHandle >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  else
  {
    v34 = *Name;
    v11 = ObjectAttributes->ObjectName;
    if ( v11 )
      DestinationString = *v11;
  }
  if ( (v34.MaximumLength & 1) != 0 )
    v34.MaximumLength = 2 * (v34.MaximumLength >> 1);
  if ( !v34.MaximumLength || v34.Length > v34.MaximumLength || (v34.Length & 1) != 0 )
    return -1073741811;
  LOBYTE(v9) = PreviousMode;
  LOBYTE(v8) = PreviousMode;
  inserted = ObCreateObject(
               (_DWORD)v8,
               (_DWORD)ObpSymbolicLinkObjectType,
               (_DWORD)ObjectAttributes,
               v9,
               0,
               32,
               0,
               0,
               (__int64)&Object);
  if ( inserted < 0 )
  {
    v13 = (char *)Object;
  }
  else
  {
    v13 = (char *)Object;
    *(_QWORD *)Object = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)v13 + 6) = 0;
    MaximumLength = v34.MaximumLength;
    *((_WORD *)v13 + 5) = v34.MaximumLength;
    *((_WORD *)v13 + 4) = v34.Length;
    v15 = MaximumLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaximumLength, 0x746D7953u);
    *((_QWORD *)v13 + 2) = PoolWithTag;
    if ( !PoolWithTag )
    {
      ObfDereferenceObject(v13);
      inserted = -1073741801;
      goto LABEL_36;
    }
    memmove(PoolWithTag, v34.Buffer, v15);
    LOBYTE(v17) = PreviousMode;
    *((_DWORD *)v13 + 7) = (unsigned __int8)RtlIsSandboxedToken(0LL, v17) != 0 ? 2 : 0;
    inserted = ObInsertObject(v13, 0LL, DesiredAccess, 0, &NewObject, &Handle);
    v33 = inserted;
    *SymbolicLinkHandle = Handle;
  }
  if ( inserted )
  {
LABEL_36:
    v18 = &v34;
    goto LABEL_14;
  }
  v18 = (UNICODE_STRING *)(v13 + 8);
LABEL_14:
  v37 = inserted;
  v36[0] = DesiredAccess;
  v19 = EtwApiCallsProvRegHandle;
  if ( EtwApiCallsProvRegHandle )
  {
    LOWORD(v33) = 0;
    v20 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v20 = 1;
    }
    v21 = v20;
    UserData[v21].Ptr = (ULONGLONG)&v33;
    *(_QWORD *)&UserData[v21].Size = 2LL;
    v22 = v20 + 1;
    Buffer = (ULONGLONG)v18->Buffer;
    if ( Buffer )
    {
      v24 = v22;
      UserData[v24].Ptr = Buffer;
      UserData[v24].Size = v18->Length;
      *(&UserData[0].Reserved + 1 * v24) = 0;
      ++v22;
    }
    v25 = v22;
    UserData[v25].Ptr = (ULONGLONG)&v33;
    *(_QWORD *)&UserData[v25].Size = 2LL;
    v26 = v22 + 1;
    v27 = v26;
    UserData[v27].Ptr = (ULONGLONG)v36;
    *(_QWORD *)&UserData[v27].Size = 4LL;
    v28 = ++v26;
    UserData[v28].Ptr = (ULONGLONG)&v37;
    *(_QWORD *)&UserData[v28].Size = 4LL;
    EtwWrite(v19, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v26 + 1, UserData);
  }
  return inserted;
}
