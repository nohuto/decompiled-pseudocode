/*
 * XREFs of NtCreateSymbolicLinkObject @ 0x1404729FC
 * Callers:
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 *     IopReassignSystemRoot @ 0x1407B980C (IopReassignSystemRoot.c)
 *     CreateSystemRootLink @ 0x1407BA050 (CreateSystemRootLink.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  char PreviousMode; // r13
  unsigned __int16 v9; // ax
  wchar_t *v10; // rdx
  wchar_t *v11; // rdx
  __int64 v12; // rcx
  NTSTATUS inserted; // esi
  char *v14; // rdi
  SIZE_T MaximumLength; // rdx
  unsigned int v16; // esi
  PVOID PoolWithTag; // rax
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
  UNICODE_STRING *v30; // rax
  NTSTATUS v31; // [rsp+50h] [rbp-108h] BYREF
  UNICODE_STRING v32; // [rsp+58h] [rbp-100h] BYREF
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ACCESS_MASK v34; // [rsp+70h] [rbp-E8h]
  ACCESS_MASK v35; // [rsp+78h] [rbp-E0h] BYREF
  NTSTATUS v36; // [rsp+80h] [rbp-D8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-C8h] BYREF
  UNICODE_STRING *ObjectName; // [rsp+A0h] [rbp-B8h]
  PVOID NewObject; // [rsp+A8h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+B0h] [rbp-A8h] BYREF

  v34 = DesiredAccess;
  Handle = 0LL;
  Object = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v32, 0LL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    ObjectName = ObjectAttributes->ObjectName;
    if ( ObjectName )
    {
      DestinationString = *ObjectName;
      v9 = _mm_cvtsi128_si32((__m128i)DestinationString);
      if ( v9 )
      {
        v10 = (wchar_t *)((char *)DestinationString.Buffer + v9);
        if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < DestinationString.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v32 = *Name;
    if ( v32.MaximumLength )
    {
      v11 = (wchar_t *)((char *)v32.Buffer + v32.MaximumLength);
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < v32.Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v12 = (__int64)SymbolicLinkHandle;
    if ( (unsigned __int64)SymbolicLinkHandle >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  else
  {
    v32 = *Name;
    v30 = ObjectAttributes->ObjectName;
    if ( v30 )
      DestinationString = *v30;
  }
  if ( (v32.MaximumLength & 1) != 0 )
    v32.MaximumLength = 2 * (v32.MaximumLength >> 1);
  if ( !v32.MaximumLength || v32.Length > v32.MaximumLength || (v32.Length & 1) != 0 )
    return -1073741811;
  inserted = ObCreateObject(
               PreviousMode,
               ObpSymbolicLinkObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               0,
               40,
               0,
               0,
               &Object);
  if ( inserted < 0 )
  {
    v14 = (char *)Object;
  }
  else
  {
    v14 = (char *)Object;
    *(_QWORD *)Object = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)v14 + 6) = 0;
    MaximumLength = v32.MaximumLength;
    *((_WORD *)v14 + 5) = v32.MaximumLength;
    *((_WORD *)v14 + 4) = v32.Length;
    v16 = MaximumLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaximumLength, 0x746D7953u);
    *((_QWORD *)v14 + 2) = PoolWithTag;
    if ( !PoolWithTag )
    {
      ObfDereferenceObject(v14);
      inserted = -1073741801;
      goto LABEL_36;
    }
    memmove(PoolWithTag, v32.Buffer, v16);
    *((_DWORD *)v14 + 7) = RtlIsSandboxedToken(0LL, PreviousMode) ? 2 : 0;
    inserted = ObInsertObject(v14, 0LL, DesiredAccess, 0, &NewObject, &Handle);
    v31 = inserted;
    *SymbolicLinkHandle = Handle;
  }
  if ( inserted )
  {
LABEL_36:
    v18 = &v32;
    goto LABEL_27;
  }
  v18 = (UNICODE_STRING *)(v14 + 8);
LABEL_27:
  v36 = inserted;
  v35 = DesiredAccess;
  v19 = EtwApiCallsProvRegHandle;
  if ( EtwApiCallsProvRegHandle )
  {
    LOWORD(v31) = 0;
    v20 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v20 = 1;
    }
    v21 = v20;
    UserData[v21].Ptr = (ULONGLONG)&v31;
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
    UserData[v25].Ptr = (ULONGLONG)&v31;
    *(_QWORD *)&UserData[v25].Size = 2LL;
    v26 = v22 + 1;
    v27 = v26;
    UserData[v27].Ptr = (ULONGLONG)&v35;
    *(_QWORD *)&UserData[v27].Size = 4LL;
    v28 = ++v26;
    UserData[v28].Ptr = (ULONGLONG)&v36;
    *(_QWORD *)&UserData[v28].Size = 4LL;
    EtwWrite(v19, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v26 + 1, UserData);
  }
  return inserted;
}
