/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x18001D820
 * Callers:
 *     LdrpGetFullPath @ 0x18000EEF4 (LdrpGetFullPath.c)
 *     RtlGetFullPathName_UEx @ 0x180011760 (RtlGetFullPathName_UEx.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019120 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlSetCurrentDirectory_U @ 0x180079050 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlpCheckRelativeDrive @ 0x180001718 (RtlpCheckRelativeDrive.c)
 *     RtlUpcaseUnicodeChar @ 0x180011C30 (RtlUpcaseUnicodeChar.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E280 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005F1E0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18006C798 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18006C9AC (RtlUnicodeStringCopy.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007935C (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x180082398 (RtlpComputeBackupIndex.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800CFF08 (RtlUnicodeStringCopyString.c)
 *     RtlpCheckDeviceName @ 0x1800CFF7C (RtlpCheckDeviceName.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        wchar_t *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  wchar_t *Buffer; // rsi
  unsigned int v7; // r13d
  unsigned __int16 Length; // r12
  unsigned int v10; // edi
  _WORD *v11; // rdx
  unsigned int i; // ecx
  __int16 v13; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rdx
  unsigned int j; // ebx
  unsigned int v19; // r11d
  unsigned int v20; // r15d
  unsigned int v21; // edx
  unsigned int k; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  int v25; // edx
  int v26; // edx
  wchar_t v27; // r8
  unsigned int v28; // ebx
  wchar_t *v29; // rdx
  unsigned int m; // edx
  unsigned int v31; // edx
  __int64 v32; // rdx
  __int16 v33; // r9
  __int64 v34; // rcx
  __int16 v35; // dx
  unsigned __int16 v36; // dx
  unsigned __int16 v37; // dx
  int v38; // r8d
  __int16 v39; // dx
  _CURDIR *v40; // rax
  _CURDIR *v41; // rcx
  _CURDIR *v42; // rax
  _CURDIR *p_CurrentDirectory; // rsi
  wchar_t v44; // ax
  WCHAR v45; // r15
  _CURDIR *v46; // rax
  _CURDIR *v47; // rsi
  int v48; // eax
  NTSTATUS v49; // eax
  unsigned __int16 v50; // cx
  unsigned __int64 v51; // rax
  unsigned __int16 v52; // dx
  unsigned __int64 v53; // rax
  unsigned int v55; // edi
  __int64 v56; // rsi
  unsigned int v57; // ebx
  char v58; // [rsp+20h] [rbp-E8h]
  bool v59; // [rsp+21h] [rbp-E7h]
  unsigned int v60; // [rsp+24h] [rbp-E4h]
  unsigned int v61; // [rsp+2Ch] [rbp-DCh]
  unsigned int v62; // [rsp+30h] [rbp-D8h]
  _UNICODE_STRING Value; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v64; // [rsp+50h] [rbp-B8h]
  _CURDIR *v65; // [rsp+58h] [rbp-B0h]
  int v66; // [rsp+60h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  _CURDIR *v69; // [rsp+80h] [rbp-88h]
  WCHAR v70; // [rsp+88h] [rbp-80h]
  wchar_t v71; // [rsp+8Ch] [rbp-7Ch]
  int v72; // [rsp+90h] [rbp-78h]
  unsigned int v73; // [rsp+94h] [rbp-74h]
  unsigned int v74; // [rsp+98h] [rbp-70h]
  NTSTATUS v75; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v76; // [rsp+A0h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v79[6]; // [rsp+BAh] [rbp-4Eh]

  v76 = a4;
  Buffer = a3;
  v7 = a2;
  Length = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a2 > 0xFFFF )
    v7 = 0xFFFF;
  *(_QWORD *)a6 = 0LL;
  v73 = *a1;
  v10 = v73 >> 1;
  if ( !(v73 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v73 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v59 = v13 != 92 && v13 != 47;
  v62 = v7 >> 1;
  v74 = v7 >> 1;
  memset(a3, 0, v7);
  Value.Length = 0;
  v64 = 2 * (v7 >> 1);
  Value.MaximumLength = v64;
  Value.Buffer = Buffer;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v55 = HIWORD(IsDosDeviceName_Ustr);
    v56 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v55 || (int)RtlpCheckDeviceName(a1, v55, a5) >= 0 && !*a5 )
    {
      if ( (int)v56 + 8 >= (unsigned int)v64 )
      {
        v57 = v56 + 10;
        if ( (unsigned int)(v56 + 10) > 0xFFFF )
          return 0;
        return v57;
      }
      else
      {
        RtlUnicodeStringCopy(&Value, L"\b\n");
        RtlUnicodeStringCbCatStringN(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v55 >> 1), v56);
        return (unsigned int)(v56 + 8);
      }
    }
    return 0LL;
  }
  v15 = RtlDetermineDosPathNameType_Ustr(a1);
  *(_DWORD *)a6 = v15;
  *(_DWORD *)&DosPath.Length = 0;
  DosPath.Buffer = 0LL;
  v17 = 0LL;
  v65 = 0LL;
  BaseAddress = 0LL;
  v58 = 0;
  j = 0;
  if ( v15 != 2 )
  {
    switch ( v15 )
    {
      case 1:
        v38 = 0;
        v72 = 0;
        for ( j = 2; j < v10; ++j )
        {
          v39 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v39 == 92 || v39 == 47 )
          {
            v72 = ++v38;
            if ( v38 == 2 )
              break;
          }
        }
        v60 = j;
        v66 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_94;
      case 3:
        v42 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL);
        v65 = v42;
        BaseAddress = v42;
        v58 = 1;
        if ( v42 )
        {
          p_CurrentDirectory = v42 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v65 = 0LL;
        }
        v69 = p_CurrentDirectory;
        v70 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v44 = RtlUpcaseUnicodeChar(**((_WORD **)a1 + 1));
        v45 = v44;
        v71 = v44;
        if ( v70 == v44 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          RtlUnicodeStringCopy(&Value, &DosPath);
          Buffer = Value.Buffer;
          Length = Value.Length;
        }
        else
        {
          RtlpCheckRelativeDrive(v44);
          SourceString = 61;
          *(_WORD *)v79 = v45;
          *(_DWORD *)&v79[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v49 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v75 = v49;
          if ( v49 < 0 )
          {
            if ( v49 == -1073741789 )
            {
              Length = Value.Length;
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                v20 = 0;
                v61 = 0;
                Buffer = Value.Buffer;
                v28 = v7 >> 1;
                goto LABEL_52;
              }
              DosPath.Length = Value.Length + 2;
              Buffer = Value.Buffer;
            }
            else
            {
              Value.Length = 0;
              SourceString = v45;
              *(_DWORD *)v79 = 6029370;
              *(_WORD *)&v79[4] = 0;
              RtlUnicodeStringCopyString(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
              Length = Value.Length;
            }
          }
          else
          {
            Length = Value.Length;
            v50 = Value.Length;
            v51 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v51 <= 3 || (unsigned int)v51 >= v62 )
            {
              Buffer = Value.Buffer;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v51] = 92;
              Length = v50 + 2;
              Value.Length = v50 + 2;
            }
            DosPath.Length = Length;
          }
        }
        v19 = 3;
        v66 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v16) = 1;
        v46 = (_CURDIR *)RtlpReferenceCurrentDirectory(v16);
        v65 = v46;
        BaseAddress = v46;
        v58 = 1;
        if ( v46 )
        {
          v47 = v46 + 1;
        }
        else
        {
          v47 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v65 = 0LL;
          j = 0;
        }
        v69 = v47;
        v48 = RtlpComputeBackupIndex(v47);
        v60 = v48;
        v66 = v48;
        DosPath = v47->DosPath;
        if ( v48 == 3 )
          DosPath.Length = 4;
        else
          DosPath.Length = 2 * v48;
        goto LABEL_94;
      case 5:
        v40 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL);
        v65 = v40;
        BaseAddress = v40;
        v58 = 1;
        if ( v40 )
        {
          v41 = v40 + 1;
          *(_DWORD *)(a6 + 4) = v40[1].Handle;
        }
        else
        {
          v41 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v65 = 0LL;
          j = 0;
        }
        v69 = v41;
        DosPath = v41->DosPath;
        v60 = RtlpComputeBackupIndex(v41);
        v66 = v60;
LABEL_94:
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        Length = Value.Length;
        v19 = v60;
        goto LABEL_19;
      case 6:
      case 7:
        v66 = 4;
        j = 4;
        if ( v10 < 4 )
          j = v10;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(&Value, &DosPath);
        Length = Value.Length;
        Buffer = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v19 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v59 = 0;
        goto LABEL_19;
      default:
        v20 = 0;
        v61 = 0;
        v28 = v7 >> 1;
        goto LABEL_146;
    }
  }
  v19 = 3;
  v66 = 3;
LABEL_19:
  v20 = DosPath.Length;
  v21 = v73 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v21 + 2 > v7 )
  {
    if ( v10 > 1 || **((_WORD **)a1 + 1) != 46 )
    {
      v31 = v21 + 2;
      if ( v31 > 0xFFFF )
        v31 = 0;
      v20 = v31;
      v61 = v31;
      v28 = v7 >> 1;
      goto LABEL_52;
    }
    if ( v10 != 1 )
    {
      v20 = v73 + DosPath.Length - 2 * j;
      if ( v21 > 0xFFFF )
        v20 = 0;
      v28 = v7 >> 1;
      goto LABEL_51;
    }
    if ( DosPath.Length == 8 )
    {
      if ( v7 <= 8 )
      {
        v20 = 10;
        v28 = v7 >> 1;
        goto LABEL_51;
      }
    }
    else
    {
      if ( v7 < DosPath.Length )
      {
        v28 = v7 >> 1;
        goto LABEL_51;
      }
      v52 = Length;
      v53 = (unsigned __int64)Length >> 1;
      if ( (_DWORD)v53 && Buffer[(unsigned int)(v53 - 1)] == 92 )
      {
        Length -= 2;
        Value.Length = v52 - 2;
      }
    }
  }
  for ( k = 0; k < Length >> 1; ++k )
  {
    if ( Buffer[k] == 47 )
      Buffer[k] = 92;
  }
  v23 = (unsigned __int64)Length >> 1;
  while ( j < v10 )
  {
    v24 = *((_QWORD *)a1 + 1);
    v25 = *(unsigned __int16 *)(v24 + 2LL * j);
    if ( v25 == 92 )
      goto LABEL_36;
    v26 = v25 - 46;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_27;
LABEL_36:
      if ( !(_DWORD)v23 || Buffer[(unsigned int)(v23 - 1)] != 92 )
      {
        Buffer[(unsigned int)v23] = 92;
        LODWORD(v23) = v23 + 1;
      }
      goto LABEL_35;
    }
    v32 = j + 1;
    if ( (_DWORD)v32 != v10 )
    {
      v33 = *(_WORD *)(v24 + 2 * v32);
      if ( v33 == 92 || v33 == 47 )
      {
        ++j;
      }
      else if ( v33 == 46
             && ((v34 = j + 2, (_DWORD)v34 == v10) || (v35 = *(_WORD *)(v24 + 2 * v34), v35 == 92) || v35 == 47) )
      {
        while ( (unsigned int)v23 >= v19 )
        {
          v64 = Buffer[(unsigned int)v23];
          v36 = v64;
          Buffer[(unsigned int)v23] = 0;
          if ( v36 == 92 )
          {
            while ( (unsigned int)v23 >= v19 )
            {
              v64 = Buffer[(unsigned int)v23];
              v37 = v64;
              Buffer[(unsigned int)v23] = 0;
              if ( v37 == 92 )
              {
                if ( (unsigned int)v23 < v19 )
                  goto LABEL_83;
                goto LABEL_80;
              }
              LODWORD(v23) = v23 - 1;
            }
            break;
          }
          LODWORD(v23) = v23 - 1;
        }
LABEL_83:
        LODWORD(v23) = v23 + 1;
LABEL_80:
        ++j;
      }
      else
      {
LABEL_27:
        while ( j < v10 )
        {
          v27 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v27 == 92 || v27 == 47 )
          {
            if ( j < v10
              && (unsigned int)v23 >= 2
              && Buffer[(unsigned int)(v23 - 1)] == 46
              && Buffer[(unsigned int)(v23 - 2)] != 46 )
            {
              LODWORD(v23) = v23 - 1;
            }
            break;
          }
          Buffer[(unsigned int)v23] = v27;
          LODWORD(v23) = v23 + 1;
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v59 && (unsigned int)v23 > v19 && Buffer[(unsigned int)(v23 - 1)] == 92 )
    LODWORD(v23) = v23 - 1;
  v28 = v7 >> 1;
  if ( (unsigned int)v23 < v62 )
    Buffer[(unsigned int)v23] = 0;
  while ( (_DWORD)v23 )
  {
    v23 = (unsigned int)(v23 - 1);
    v29 = &Buffer[v23];
    if ( *v29 != 32 && *v29 != 46 )
    {
      LODWORD(v23) = v23 + 1;
      break;
    }
    *v29 = 0;
  }
  Value.Length = 2 * v23;
  if ( v76 )
  {
    for ( m = v23; m && Buffer[m - 1] != 92; --m )
      ;
    if ( m >= (unsigned int)v23 || m < v19 )
      *v76 = 0LL;
    else
      *v76 = &Buffer[m];
  }
  v20 = (unsigned __int16)(2 * v23);
LABEL_51:
  v61 = v20;
LABEL_52:
  v17 = (volatile signed __int32 *)v65;
LABEL_146:
  if ( v58 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        NtClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      v20 = v61;
      Buffer = Value.Buffer;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( v20 >= 2 * (unsigned __int64)v28 && v28 )
    *Buffer = 0;
  return v20;
}
