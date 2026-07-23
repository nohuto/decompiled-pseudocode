/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180026020
 * Callers:
 *     RtlGetFullPathName_UEx @ 0x18001C030 (RtlGetFullPathName_UEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     LdrpGetFullPath @ 0x18003FC30 (LdrpGetFullPath.c)
 *     RtlGetFullPathName_UstrEx @ 0x180060240 (RtlGetFullPathName_UstrEx.c)
 *     RtlSetCurrentDirectory_U @ 0x18006FB70 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180026A90 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCheckRelativeDrive @ 0x180045FCC (RtlpCheckRelativeDrive.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180046AD0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUpcaseUnicodeChar @ 0x180050A80 (RtlUpcaseUnicodeChar.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18005FB2C (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18006056C (RtlUnicodeStringCopy.c)
 *     RtlpComputeBackupIndex @ 0x1800715F4 (RtlpComputeBackupIndex.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800BBD48 (RtlUnicodeStringCopyString.c)
 *     RtlpCheckDeviceName @ 0x1800BBDBC (RtlpCheckDeviceName.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  unsigned __int16 *Buffer; // rsi
  unsigned int v7; // r13d
  unsigned __int16 v9; // r12
  unsigned int v10; // edi
  _WORD *v11; // rdx
  unsigned int i; // ecx
  __int16 v13; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rdx
  unsigned int m; // ebx
  unsigned int v19; // r11d
  unsigned int Length; // r15d
  unsigned int v21; // edx
  unsigned int j; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int16 v25; // r8
  unsigned int v26; // ebx
  unsigned __int16 *v27; // rdx
  unsigned int k; // edx
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int16 v31; // r9
  __int64 v32; // rcx
  __int16 v33; // dx
  unsigned __int16 v34; // dx
  unsigned __int16 v35; // dx
  int v36; // r8d
  __int16 v37; // dx
  _CURDIR *v38; // rax
  _CURDIR *v39; // rcx
  _CURDIR *v40; // rax
  _CURDIR *p_CurrentDirectory; // rsi
  WCHAR v42; // ax
  WCHAR v43; // r15
  _CURDIR *v44; // rax
  _CURDIR *v45; // rsi
  int v46; // eax
  NTSTATUS v47; // eax
  unsigned __int16 v48; // cx
  unsigned __int64 v49; // rax
  unsigned __int16 v50; // dx
  unsigned __int64 v51; // rax
  unsigned int v53; // edi
  __int64 v54; // rsi
  unsigned int v55; // ebx
  char v56; // [rsp+20h] [rbp-E8h]
  bool v57; // [rsp+21h] [rbp-E7h]
  unsigned int v58; // [rsp+24h] [rbp-E4h]
  unsigned int v59; // [rsp+2Ch] [rbp-DCh]
  unsigned int v60; // [rsp+30h] [rbp-D8h]
  _UNICODE_STRING Value; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v62; // [rsp+50h] [rbp-B8h]
  _CURDIR *v63; // [rsp+58h] [rbp-B0h]
  int v64; // [rsp+60h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  _CURDIR *v67; // [rsp+80h] [rbp-88h]
  int v68; // [rsp+88h] [rbp-80h]
  unsigned int v69; // [rsp+8Ch] [rbp-7Ch]
  WCHAR v70; // [rsp+90h] [rbp-78h]
  WCHAR v71; // [rsp+94h] [rbp-74h]
  unsigned int v72; // [rsp+98h] [rbp-70h]
  _QWORD *v73; // [rsp+A0h] [rbp-68h]
  NTSTATUS v74; // [rsp+A8h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  WCHAR SourceString; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v77[6]; // [rsp+C2h] [rbp-46h]

  v73 = a4;
  Buffer = a3;
  v7 = a2;
  v9 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a2 > 0xFFFF )
    v7 = 0xFFFF;
  *(_QWORD *)a6 = 0LL;
  v72 = *a1;
  v10 = v72 >> 1;
  if ( !(v72 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v72 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v57 = v13 != 92 && v13 != 47;
  v60 = v7 >> 1;
  v69 = v7 >> 1;
  memset(a3, 0, v7);
  Value.Length = 0;
  v62 = 2 * (v7 >> 1);
  Value.MaximumLength = v62;
  Value.Buffer = Buffer;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( !IsDosDeviceName_Ustr )
  {
    v15 = RtlDetermineDosPathNameType_Ustr(a1);
    *(_DWORD *)a6 = v15;
    *(_DWORD *)&DosPath.Length = 0;
    DosPath.Buffer = 0LL;
    v17 = 0LL;
    v63 = 0LL;
    BaseAddress = 0LL;
    v56 = 0;
    m = 0;
    if ( v15 == 2 )
    {
      v19 = 3;
      v64 = 3;
LABEL_19:
      Length = DosPath.Length;
      v21 = v72 + DosPath.Length - 2 * m;
      if ( (unsigned __int64)v21 + 2 <= v7 )
        goto LABEL_20;
      if ( v10 <= 1 && **((_WORD **)a1 + 1) == 46 )
      {
        if ( v10 != 1 )
        {
          Length = v72 + DosPath.Length - 2 * m;
          if ( v21 > 0xFFFF )
            Length = 0;
          v26 = v7 >> 1;
          goto LABEL_51;
        }
        if ( DosPath.Length == 8 )
        {
          if ( v7 <= 8 )
          {
            Length = 10;
            v26 = v7 >> 1;
            goto LABEL_51;
          }
        }
        else
        {
          if ( v7 < DosPath.Length )
          {
            v26 = v7 >> 1;
LABEL_51:
            v59 = Length;
            goto LABEL_52;
          }
          v50 = v9;
          v51 = (unsigned __int64)v9 >> 1;
          if ( (_DWORD)v51 && Buffer[(unsigned int)(v51 - 1)] == 92 )
          {
            v9 -= 2;
            Value.Length = v50 - 2;
          }
        }
LABEL_20:
        for ( j = 0; j < v9 >> 1; ++j )
        {
          if ( Buffer[j] == 47 )
            Buffer[j] = 92;
        }
        v23 = (unsigned __int64)v9 >> 1;
        while ( m < v10 )
        {
          v24 = *((_QWORD *)a1 + 1);
          if ( *(_WORD *)(v24 + 2LL * m) == 46 )
          {
            v30 = m + 1;
            if ( (_DWORD)v30 != v10 )
            {
              v31 = *(_WORD *)(v24 + 2 * v30);
              if ( v31 == 92 || v31 == 47 )
              {
                ++m;
              }
              else if ( v31 == 46
                     && ((v32 = m + 2, (_DWORD)v32 == v10) || (v33 = *(_WORD *)(v24 + 2 * v32), v33 == 92) || v33 == 47) )
              {
                while ( (unsigned int)v23 >= v19 )
                {
                  v62 = Buffer[(unsigned int)v23];
                  v34 = v62;
                  Buffer[(unsigned int)v23] = 0;
                  if ( v34 == 92 )
                  {
                    while ( (unsigned int)v23 >= v19 )
                    {
                      v62 = Buffer[(unsigned int)v23];
                      v35 = v62;
                      Buffer[(unsigned int)v23] = 0;
                      if ( v35 == 92 )
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
                ++m;
              }
              else
              {
LABEL_27:
                while ( m < v10 )
                {
                  v25 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * m);
                  if ( v25 == 92 || v25 == 47 )
                  {
                    if ( m < v10
                      && (unsigned int)v23 >= 2
                      && Buffer[(unsigned int)(v23 - 1)] == 46
                      && Buffer[(unsigned int)(v23 - 2)] != 46 )
                    {
                      LODWORD(v23) = v23 - 1;
                    }
                    break;
                  }
                  Buffer[(unsigned int)v23] = v25;
                  LODWORD(v23) = v23 + 1;
                  ++m;
                }
                --m;
              }
            }
          }
          else
          {
            if ( *(_WORD *)(v24 + 2LL * m) != 47 && *(_WORD *)(v24 + 2LL * m) != 92 )
              goto LABEL_27;
            if ( !(_DWORD)v23 || Buffer[(unsigned int)(v23 - 1)] != 92 )
            {
              Buffer[(unsigned int)v23] = 92;
              LODWORD(v23) = v23 + 1;
            }
          }
          ++m;
        }
        if ( v57 && (unsigned int)v23 > v19 && Buffer[(unsigned int)(v23 - 1)] == 92 )
          LODWORD(v23) = v23 - 1;
        v26 = v7 >> 1;
        if ( (unsigned int)v23 < v60 )
          Buffer[(unsigned int)v23] = 0;
        while ( (_DWORD)v23 )
        {
          v23 = (unsigned int)(v23 - 1);
          v27 = &Buffer[v23];
          if ( *v27 != 32 && *v27 != 46 )
          {
            LODWORD(v23) = v23 + 1;
            break;
          }
          *v27 = 0;
        }
        Value.Length = 2 * v23;
        if ( v73 )
        {
          for ( k = v23; k && Buffer[k - 1] != 92; --k )
            ;
          if ( k >= (unsigned int)v23 || k < v19 )
            *v73 = 0LL;
          else
            *v73 = &Buffer[k];
        }
        Length = (unsigned __int16)(2 * v23);
        goto LABEL_51;
      }
      v29 = v21 + 2;
      if ( v29 > 0xFFFF )
        v29 = 0;
      Length = v29;
      v59 = v29;
      v26 = v7 >> 1;
LABEL_52:
      v17 = (volatile signed __int32 *)v63;
LABEL_146:
      if ( v56 )
      {
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
          {
            NtClose(*((HANDLE *)BaseAddress + 1));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          }
          Length = v59;
          Buffer = Value.Buffer;
        }
        else
        {
          RtlLeaveCriticalSection(&FastPebLock);
        }
      }
      if ( Length >= 2 * (unsigned __int64)v26 && v26 )
        *Buffer = 0;
      return Length;
    }
    switch ( v15 )
    {
      case 1:
        v36 = 0;
        v68 = 0;
        for ( m = 2; m < v10; ++m )
        {
          v37 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * m);
          if ( v37 == 92 || v37 == 47 )
          {
            v68 = ++v36;
            if ( v36 == 2 )
              break;
          }
        }
        v58 = m;
        v64 = m;
        DosPath.Buffer = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * m;
        DosPath.MaximumLength = a1[1];
        goto LABEL_101;
      case 3:
        v40 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL);
        v63 = v40;
        BaseAddress = v40;
        v56 = 1;
        if ( v40 )
        {
          p_CurrentDirectory = v40 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v63 = 0LL;
        }
        v67 = p_CurrentDirectory;
        v71 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v42 = RtlUpcaseUnicodeChar(**((_WORD **)a1 + 1));
        v43 = v42;
        v70 = v42;
        if ( v71 == v42 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          RtlUnicodeStringCopy(&Value, &DosPath);
          Buffer = Value.Buffer;
          v9 = Value.Length;
        }
        else
        {
          RtlpCheckRelativeDrive(v42);
          SourceString = 61;
          *(_WORD *)v77 = v43;
          *(_DWORD *)&v77[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v47 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v74 = v47;
          if ( v47 < 0 )
          {
            if ( v47 == -1073741789 )
            {
              v9 = Value.Length;
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                Length = 0;
                v59 = 0;
                Buffer = Value.Buffer;
                v26 = v7 >> 1;
                goto LABEL_52;
              }
              DosPath.Length = Value.Length + 2;
              Buffer = Value.Buffer;
            }
            else
            {
              Value.Length = 0;
              SourceString = v43;
              *(_DWORD *)v77 = 6029370;
              *(_WORD *)&v77[4] = 0;
              RtlUnicodeStringCopyString(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
              v9 = Value.Length;
            }
          }
          else
          {
            v9 = Value.Length;
            v48 = Value.Length;
            v49 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v49 <= 3 || (unsigned int)v49 >= v60 )
            {
              Buffer = Value.Buffer;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v49] = 92;
              v9 = v48 + 2;
              Value.Length = v48 + 2;
            }
            DosPath.Length = v9;
          }
        }
        v19 = 3;
        v64 = 3;
        m = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v16) = 1;
        v44 = (_CURDIR *)RtlpReferenceCurrentDirectory(v16);
        v63 = v44;
        BaseAddress = v44;
        v56 = 1;
        if ( v44 )
        {
          v45 = v44 + 1;
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v63 = 0LL;
          m = 0;
        }
        v67 = v45;
        v46 = RtlpComputeBackupIndex(v45);
        v58 = v46;
        v64 = v46;
        DosPath = v45->DosPath;
        if ( v46 == 3 )
          DosPath.Length = 4;
        else
          DosPath.Length = 2 * v46;
        goto LABEL_101;
      case 5:
        v38 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL);
        v63 = v38;
        BaseAddress = v38;
        v56 = 1;
        if ( v38 )
        {
          v39 = v38 + 1;
          *(_DWORD *)(a6 + 4) = v38[1].Handle;
        }
        else
        {
          v39 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v63 = 0LL;
          m = 0;
        }
        v67 = v39;
        DosPath = v39->DosPath;
        v58 = RtlpComputeBackupIndex(v39);
        v64 = v58;
LABEL_101:
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        v9 = Value.Length;
        v19 = v58;
        goto LABEL_19;
      case 6:
      case 7:
        v64 = 4;
        m = 4;
        if ( v10 < 4 )
          m = v10;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(&Value, &DosPath);
        v9 = Value.Length;
        Buffer = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v19 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v57 = 0;
        goto LABEL_19;
      default:
        Length = 0;
        v59 = 0;
        v26 = v7 >> 1;
        goto LABEL_146;
    }
  }
  v53 = HIWORD(IsDosDeviceName_Ustr);
  v54 = (unsigned __int16)IsDosDeviceName_Ustr;
  if ( a5 )
  {
    if ( v53 && ((int)RtlpCheckDeviceName(a1, v53, a5) < 0 || *a5) )
      return 0LL;
  }
  if ( (int)v54 + 8 >= (unsigned int)v62 )
  {
    v55 = v54 + 10;
    if ( (unsigned int)(v54 + 10) > 0xFFFF )
      return 0;
    return v55;
  }
  else
  {
    RtlUnicodeStringCopy(&Value, L"\b\n");
    RtlUnicodeStringCbCatStringN(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v53 >> 1), v54);
    return (unsigned int)(v54 + 8);
  }
}
