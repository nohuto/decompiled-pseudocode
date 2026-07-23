/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692C0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6B8 (RtlDoesFileExists_UEx.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A6A60 (NtEnumerateKey.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB260 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

int __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  size_t v8; // r15
  wchar_t *Buffer; // rdx
  char *v10; // rbx
  const WCHAR *v11; // rcx
  int v12; // r14d
  int v13; // ecx
  HANDLE v14; // r12
  int v15; // r15d
  int v16; // r14d
  NTSTATUS v17; // eax
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
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180108B28;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = NtOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v16 = v17;
    if ( v17 >= 0 || v17 == -1073741772 || v17 == -1073741431 )
    {
      v7 = (unsigned __int64)KeyHandle;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180108B28, v17);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_41;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LODWORD(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LODWORD(v7) = NtClose(*(HANDLE *)a2);
    return v7;
  }
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v7 = (unsigned __int64)NtCurrentPeb();
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL) & 0x8000) != 0 )
    {
      v7 = (unsigned __int64)NtCurrentPeb();
      v8 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
      if ( v8 + 16 <= 0xFFFE )
      {
        v7 = *(unsigned __int16 *)(a2 + 26);
        if ( v8 + 16 <= v7 )
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v10 = *(char **)(a2 + 32);
          memmove(v10, Buffer, v8);
          *(_OWORD *)&v10[v8] = xmmword_180118F08;
          v11 = *(const WCHAR **)(a2 + 32);
          *(_WORD *)(a2 + 24) = v8 + 14;
          LODWORD(v7) = RtlDoesFileExists_UEx(v11);
          if ( !(_BYTE)v7 )
            *(_WORD *)(a2 + 24) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
    }
    else
    {
      *(_WORD *)(a2 + 24) = 0;
    }
    return v7;
  }
  if ( *(_QWORD *)(a2 + 8) == 1LL )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)0x7FFE0030);
    v12 = DestinationString.Length;
    v13 = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    LODWORD(v7) = v12 + 16;
    if ( v12 + 16 <= v13 )
    {
      memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)v12);
      v7 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)((unsigned __int16)v12 + v7) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = v12 + 16;
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741789;
    }
    return v7;
  }
  LODWORD(v7) = -1;
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL || (v14 = *(HANDLE *)a2, v15 = *(_DWORD *)(a2 + 8), ResultLength = 0, !v14) )
  {
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LODWORD(v7) = NtEnumerateKey(v14, v15 - 2, KeyBasicInformation, KeyInformation, 0x220u, &ResultLength);
  v16 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 == -2147483622 )
    {
      *(_BYTE *)(a2 + 17) = 1;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(
                    0x33u,
                    0,
                    "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                    v15 - 2,
                    v7);
    goto LABEL_31;
  }
  LODWORD(v7) = v27;
  if ( v27 <= 0xFFFE )
  {
    v22[0] = v27;
    v22[1] = v27;
    v23 = &v28;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v14, v22, a2 + 24);
    v16 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(Length) = v7;
    LODWORD(v7) = DbgPrintEx(
                    0x33u,
                    0,
                    "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                    v22,
                    Length);
LABEL_31:
    *(_BYTE *)(a2 + 16) = 1;
LABEL_41:
    if ( a3 )
      *a3 = v16;
    return v7;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
