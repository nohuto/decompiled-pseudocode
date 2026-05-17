/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692D0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18005BFC0 (DbgPrintEx.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6C8 (RtlDoesFileExists_UEx.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A6A60 (NtEnumerateKey.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB1A0 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

int __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  size_t v8; // r15
  wchar_t *Buffer; // rdx
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int Length; // r14d
  int v14; // ecx
  HANDLE v15; // r12
  int v16; // r15d
  int v17; // r14d
  int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v24; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  void *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  _BYTE v31[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+9Ch] [rbp-64h]
  char v33; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v26 = 48;
    v22 = 0LL;
    v27 = 0LL;
    v29 = 64;
    v28 = &unk_180108B28;
    v30 = 0LL;
    v18 = NtOpenKey(&v22, 8LL, &v26);
    v17 = v18;
    if ( v18 >= 0 || v18 == -1073741772 || v18 == -1073741431 )
    {
      v7 = v22;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180108B28, v18);
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
          LOBYTE(v11) = 1;
          *(_OWORD *)&v10[v8] = xmmword_180118F08;
          v12 = *(_QWORD *)(a2 + 32);
          *(_WORD *)(a2 + 24) = v8 + 14;
          LODWORD(v7) = RtlDoesFileExists_UEx(v12, v11);
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
    Length = DestinationString.Length;
    v14 = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    LODWORD(v7) = Length + 16;
    if ( Length + 16 <= v14 )
    {
      memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)Length);
      v7 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)((unsigned __int16)Length + v7) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = Length + 16;
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
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL || (v15 = *(HANDLE *)a2, v16 = *(_DWORD *)(a2 + 8), v21 = 0, !v15) )
  {
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LODWORD(v7) = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, int *))NtEnumerateKey)(
                  v15,
                  (unsigned int)(v16 - 2),
                  0LL,
                  v31,
                  544,
                  &v21);
  v17 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 == -2147483622 )
    {
      *(_BYTE *)(a2 + 17) = 1;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(
                    51,
                    0,
                    "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                    v16 - 2,
                    v7);
    goto LABEL_31;
  }
  LODWORD(v7) = v32;
  if ( v32 <= 0xFFFE )
  {
    v23[0] = v32;
    v23[1] = v32;
    v24 = &v33;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v15, v23, a2 + 24);
    v17 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(v20) = v7;
    LODWORD(v7) = DbgPrintEx(
                    51,
                    0,
                    "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                    v23,
                    v20);
LABEL_31:
    *(_BYTE *)(a2 + 16) = 1;
LABEL_41:
    if ( a3 )
      *a3 = v17;
    return v7;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
