/*
 * XREFs of SmpInitializeKnownDllsInternal @ 0x140007090
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400050A0 (SmpInitializeKnownDlls.c)
 * Callees:
 *     SmpRandomizeDllList @ 0x140007500 (SmpRandomizeDllList.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     SmpTerminate @ 0x14001371C (SmpTerminate.c)
 */

__int64 __fastcall SmpInitializeKnownDllsInternal(__int64 a1, void *a2, int a3, int a4)
{
  int v6; // r14d
  unsigned __int8 v7; // r13
  int v8; // edx
  unsigned int v9; // r15d
  unsigned int v10; // edi
  _QWORD *v11; // r12
  __int64 v12; // rbx
  const UNICODE_STRING *v13; // rsi
  __int64 v14; // rbx
  __int16 v15; // ax
  int v16; // eax
  int v17; // ebx
  PVOID *v18; // r14
  int v19; // r15d
  PVOID *v20; // rbx
  struct _UNICODE_STRING *v21; // rsi
  _QWORD *v22; // rcx
  void **Buffer; // rax
  void *v24; // r8
  int v25; // eax
  _QWORD *v26; // rcx
  PVOID *v27; // rax
  __int64 v28; // r8
  char v30[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh]
  int v32; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v33; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v34; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h]
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  const UNICODE_STRING *v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  _WORD *v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  _QWORD v45[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v48; // [rsp+D8h] [rbp-28h]
  _QWORD *v49; // [rsp+E0h] [rbp-20h]
  HANDLE Handle; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+F0h] [rbp-10h]
  int *v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+104h] [rbp+4h]
  __int16 v55; // [rsp+108h] [rbp+8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+150h] [rbp+50h] BYREF

  v36 = a3;
  v31 = a4;
  BaseAddress = 0LL;
  v32 = 0;
  v6 = a4;
  v7 = 0;
  v8 = SmpRandomizeDllList(&SmpKnownDllsList, &BaseAddress, &v32);
  if ( v8 >= 0 )
  {
    ObjectAttributes.Length = 48;
    v45[1] = &v33;
    ObjectAttributes.RootDirectory = a2;
    v49 = v45;
    v48 = &SmpProcessModuleImports;
    v43 = SmpKnownDllSecurityDescriptor;
    v52 = &v39;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v47[0] = 64;
    v47[1] = 7;
    v39 = 48;
    v40 = a1;
    v42 = 80;
    v41 = 0LL;
    v44 = 0LL;
    v51 = 983071;
    v53 = 16;
    while ( 1 )
    {
      v9 = v32;
      v34 = &v33;
      v33 = &v33;
      v10 = 0;
      if ( v32 )
        break;
LABEL_20:
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
      v18 = (PVOID *)v33;
      BaseAddress = 0LL;
      v19 = 0;
      v32 = 0;
      if ( v33 == &v33 )
        return 0;
      do
      {
        v20 = (PVOID *)SmpKnownDllsList;
        v21 = (struct _UNICODE_STRING *)v18;
        v18 = (PVOID *)*v18;
        if ( SmpKnownDllsList == &SmpKnownDllsList )
        {
LABEL_27:
          v32 = ++v19;
        }
        else
        {
          while ( 1 )
          {
            String1 = (UNICODE_STRING)*((_OWORD *)v20 + 1);
            if ( *((_WORD *)v20 + 8) && *(_WORD *)v20[3] == 95 )
            {
              ++String1.Buffer;
              String1.Length -= 2;
              String1.MaximumLength -= 2;
            }
            if ( !RtlCompareUnicodeString(&String1, v21 + 1, 1u) )
              break;
            v20 = (PVOID *)*v20;
            if ( v20 == &SmpKnownDllsList )
              goto LABEL_27;
          }
          v22 = *(_QWORD **)&v21->Length;
          Buffer = (void **)v21->Buffer;
          if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v21->Length + 8LL) != v21 || *Buffer != v21 )
            __fastfail(3u);
          *Buffer = v22;
          v22[1] = Buffer;
          RtlFreeUnicodeString(v21 + 2);
          v24 = *(void **)&v21[3].Length;
          if ( v24 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v24);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v21);
          v19 = v32;
        }
      }
      while ( v18 != &v33 );
      if ( !v19 )
        return 0;
      v25 = SmpRandomizeDllList(&v33, &BaseAddress, &v32);
      v26 = v33;
      v8 = v25;
      v27 = v34;
      if ( *((PVOID **)v33 + 1) != &v33 || *v34 != &v33 )
        __fastfail(3u);
      *v34 = v33;
      v26[1] = v27;
      v28 = qword_140025A18;
      if ( *((PVOID **)SmpKnownDllsList + 1) != &SmpKnownDllsList || *(PVOID **)qword_140025A18 != &SmpKnownDllsList )
        __fastfail(3u);
      if ( *(_QWORD **)(*v26 + 8LL) != v26 || *(_QWORD **)v26[1] != v26 )
        __fastfail(3u);
      *(_QWORD *)qword_140025A18 = v26;
      qword_140025A18 = v26[1];
      *(_QWORD *)v26[1] = &SmpKnownDllsList;
      v26[1] = v28;
      if ( v8 < 0 )
        return (unsigned int)v8;
      v6 = v31;
    }
    v11 = BaseAddress;
    while ( 1 )
    {
      v12 = SmpExcludeKnownDllsList;
      v13 = (const UNICODE_STRING *)v11[2 * v10 + 1];
      if ( (__int64 *)SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
      {
        while ( RtlCompareUnicodeString((PCUNICODE_STRING)(v12 + 16), v13 + 1, 1u) )
        {
          v12 = *(_QWORD *)v12;
          if ( (__int64 *)v12 == &SmpExcludeKnownDllsList )
            goto LABEL_52;
        }
        if ( v12 )
        {
LABEL_64:
          v6 = v31;
          goto LABEL_19;
        }
LABEL_52:
        v6 = v31;
      }
      v14 = SmpExcludeKnownDllsList;
      if ( (__int64 *)SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
      {
        while ( RtlCompareUnicodeString((PCUNICODE_STRING)(v14 + 16), v13 + 2, 1u) )
        {
          v14 = *(_QWORD *)v14;
          if ( (__int64 *)v14 == &SmpExcludeKnownDllsList )
            goto LABEL_57;
        }
        if ( v14 )
          goto LABEL_64;
LABEL_57:
        v6 = v31;
      }
      v54 = 0x1000000;
      if ( v13[1].Length >= 2u && *v13[1].Buffer == 95 )
      {
        if ( v36 || !v6 )
          goto LABEL_19;
        v54 = 17825792;
      }
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13[2];
      if ( NtOpenFile(&FileHandle, 0x120020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
        break;
LABEL_19:
      if ( ++v10 >= v9 )
        goto LABEL_20;
    }
    v41 = v13 + 2;
    v45[0] = v13 + 2;
    if ( v43 )
    {
      v15 = v43[1];
      v7 = v15 & 8;
      v43[1] = v15 | 8;
    }
    v16 = LdrVerifyImageMatchesChecksumEx((unsigned __int64)FileHandle | 1, v47);
    v17 = v16;
    if ( v43 )
      v43[1] ^= (v7 ^ (unsigned __int8)v43[1]) & 8;
    if ( v16 >= 0 )
    {
      if ( (v55 & 0x2000) == 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Non-DLL file included in KnownDLL list.");
        v17 = -1073740945;
LABEL_66:
        Parameters[0] = (unsigned __int64)&DestinationString;
        Parameters[1] = v17;
        Parameters[2] = (unsigned __int64)&v13[2];
        SmpTerminate(Parameters, 5u, 3u);
        __debugbreak();
      }
      NtClose(Handle);
      goto LABEL_17;
    }
    v30[0] = 1;
    if ( v16 == -1073740760 )
    {
      if ( (int)RtlAppxIsFileOwnedByTrustedInstaller(FileHandle, v30) >= 0 && !v30[0] )
        goto LABEL_18;
    }
    else if ( v16 == -1073741771 )
    {
LABEL_18:
      NtClose(FileHandle);
      goto LABEL_19;
    }
    RtlInitUnicodeString(&DestinationString, L"Verification of a KnownDLL failed.");
LABEL_17:
    if ( v17 < 0 )
      goto LABEL_66;
    goto LABEL_18;
  }
  return (unsigned int)v8;
}
