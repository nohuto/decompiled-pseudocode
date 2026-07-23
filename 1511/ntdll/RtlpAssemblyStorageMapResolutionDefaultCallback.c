/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800426C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlDoesFileExists_UEx @ 0x18003FE78 (RtlDoesFileExists_UEx.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A5700 (NtEnumerateKey.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800D2F4C (RtlpGetAssemblyStorageMapRootLocation.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // r14d
  int v8; // ecx
  unsigned __int64 v9; // rax
  size_t v10; // r15
  unsigned __int16 *Buffer; // rdx
  char *v12; // rbx
  const WCHAR *v13; // rcx
  NTSTATUS v14; // eax
  int v15; // r14d
  HANDLE v16; // r12
  int v17; // r15d
  __int64 Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v22[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v23; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v27; // [rsp+9Ch] [rbp-64h]
  char v28; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    ObjectAttributes.Length = 48;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180101470;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = NtOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v15 = v14;
    if ( v14 >= 0 || v14 == -1073741772 || v14 == -1073741431 )
    {
      v9 = (unsigned __int64)KeyHandle;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v9;
      return v9;
    }
    LOBYTE(v9) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180101470, v14);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_41;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LOBYTE(v9) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LOBYTE(v9) = NtClose(*(HANDLE *)a2);
  }
  else if ( *(_QWORD *)(a2 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) == 1LL )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)0x7FFE0030);
      v7 = DestinationString.Length;
      v8 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      LOBYTE(v9) = v7 + 16;
      if ( v7 + 16 > v8 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)v7);
        v9 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)((unsigned __int16)v7 + v9) = *(_OWORD *)L"\\WinSxS\\";
        *(_WORD *)(a2 + 24) = v7 + 16;
      }
      return v9;
    }
    LOBYTE(v9) = -1;
    if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL || (v16 = *(HANDLE *)a2, v17 = *(_DWORD *)(a2 + 8), ResultLength = 0, !v16) )
    {
      *(_BYTE *)(a2 + 17) = 1;
      return v9;
    }
    LODWORD(v9) = NtEnumerateKey(v16, v17 - 2, KeyBasicInformation, KeyInformation, 0x220u, &ResultLength);
    v15 = v9;
    if ( (v9 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v9 == -2147483622 )
      {
        *(_BYTE *)(a2 + 17) = 1;
        return v9;
      }
      LOBYTE(v9) = DbgPrintEx(
                     0x33u,
                     0,
                     "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                     v17 - 2,
                     v9);
      goto LABEL_33;
    }
    LOBYTE(v9) = v27;
    if ( v27 <= 0xFFFE )
    {
      v22[0] = v27;
      v22[1] = v27;
      v23 = &v28;
      LODWORD(v9) = RtlpGetAssemblyStorageMapRootLocation(v16, v22, a2 + 24);
      v15 = v9;
      if ( (v9 & 0x80000000) == 0LL )
        return v9;
      LODWORD(Length) = v9;
      LOBYTE(v9) = DbgPrintEx(
                     0x33u,
                     0,
                     "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                     v22,
                     Length);
LABEL_33:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_41:
      if ( a3 )
        *a3 = v15;
      return v9;
    }
    *(_BYTE *)(a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  else
  {
    v9 = (unsigned __int64)NtCurrentPeb();
    v10 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 32) + 96LL);
    if ( v10 + 16 > 0xFFFE )
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v9 = *(unsigned __int16 *)(a2 + 26);
      if ( v10 + 16 > v9 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
          Buffer = (unsigned __int16 *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
        v12 = *(char **)(a2 + 32);
        memmove(v12, Buffer, v10);
        *(_OWORD *)&v12[v10] = *(_OWORD *)L".Local\\";
        v13 = *(const WCHAR **)(a2 + 32);
        *(_WORD *)(a2 + 24) = v10 + 14;
        LOBYTE(v9) = RtlDoesFileExists_UEx(v13, 1);
        if ( !(_BYTE)v9 )
          *(_WORD *)(a2 + 24) = 0;
      }
    }
  }
  return v9;
}
