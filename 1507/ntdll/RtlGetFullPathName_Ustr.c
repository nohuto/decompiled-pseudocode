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
        _WORD *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  _WORD *v6; // rsi
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
  __int16 v25; // r8
  unsigned int v26; // ebx
  _WORD *v27; // rdx
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
  __int64 v38; // rax
  _CURDIR *v39; // rcx
  __int64 v40; // rax
  _CURDIR *p_CurrentDirectory; // rsi
  WCHAR v42; // ax
  WCHAR v43; // r15
  __int64 v44; // rax
  _CURDIR *v45; // rsi
  int v46; // eax
  int v47; // eax
  __int16 v48; // cx
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
  _WORD v61[4]; // [rsp+40h] [rbp-C8h] BYREF
  _WORD *v62; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v63; // [rsp+50h] [rbp-B8h]
  volatile signed __int32 *v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+60h] [rbp-A8h]
  __int64 v66; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  _CURDIR *v68; // [rsp+80h] [rbp-88h]
  int v69; // [rsp+88h] [rbp-80h]
  unsigned int v70; // [rsp+8Ch] [rbp-7Ch]
  WCHAR v71; // [rsp+90h] [rbp-78h]
  __int16 v72; // [rsp+94h] [rbp-74h]
  unsigned int v73; // [rsp+98h] [rbp-70h]
  _QWORD *v74; // [rsp+A0h] [rbp-68h]
  int v75; // [rsp+A8h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  WCHAR SourceString; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v78[6]; // [rsp+C2h] [rbp-46h]

  v74 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0;
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
  v57 = v13 != 92 && v13 != 47;
  v60 = v7 >> 1;
  v70 = v7 >> 1;
  memset(a3, 0, v7);
  v61[0] = 0;
  v63 = 2 * (v7 >> 1);
  v61[1] = v63;
  v62 = v6;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( !IsDosDeviceName_Ustr )
  {
    v15 = RtlDetermineDosPathNameType_Ustr(a1);
    *(_DWORD *)a6 = v15;
    *(_DWORD *)&DosPath.Length = 0;
    DosPath.Buffer = 0LL;
    v17 = 0LL;
    v64 = 0LL;
    v66 = 0LL;
    v56 = 0;
    m = 0;
    if ( v15 == 2 )
    {
      v19 = 3;
      v65 = 3;
LABEL_19:
      Length = DosPath.Length;
      v21 = v73 + DosPath.Length - 2 * m;
      if ( (unsigned __int64)v21 + 2 <= v7 )
        goto LABEL_20;
      if ( v10 <= 1 && **((_WORD **)a1 + 1) == 46 )
      {
        if ( v10 != 1 )
        {
          Length = v73 + DosPath.Length - 2 * m;
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
          if ( (_DWORD)v51 && v6[(unsigned int)(v51 - 1)] == 92 )
          {
            v9 -= 2;
            v61[0] = v50 - 2;
          }
        }
LABEL_20:
        for ( j = 0; j < v9 >> 1; ++j )
        {
          if ( v6[j] == 47 )
            v6[j] = 92;
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
                  v63 = v6[(unsigned int)v23];
                  v34 = v63;
                  v6[(unsigned int)v23] = 0;
                  if ( v34 == 92 )
                  {
                    while ( (unsigned int)v23 >= v19 )
                    {
                      v63 = v6[(unsigned int)v23];
                      v35 = v63;
                      v6[(unsigned int)v23] = 0;
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
                      && v6[(unsigned int)(v23 - 1)] == 46
                      && v6[(unsigned int)(v23 - 2)] != 46 )
                    {
                      LODWORD(v23) = v23 - 1;
                    }
                    break;
                  }
                  v6[(unsigned int)v23] = v25;
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
            if ( !(_DWORD)v23 || v6[(unsigned int)(v23 - 1)] != 92 )
            {
              v6[(unsigned int)v23] = 92;
              LODWORD(v23) = v23 + 1;
            }
          }
          ++m;
        }
        if ( v57 && (unsigned int)v23 > v19 && v6[(unsigned int)(v23 - 1)] == 92 )
          LODWORD(v23) = v23 - 1;
        v26 = v7 >> 1;
        if ( (unsigned int)v23 < v60 )
          v6[(unsigned int)v23] = 0;
        while ( (_DWORD)v23 )
        {
          v23 = (unsigned int)(v23 - 1);
          v27 = &v6[v23];
          if ( *v27 != 32 && *v27 != 46 )
          {
            LODWORD(v23) = v23 + 1;
            break;
          }
          *v27 = 0;
        }
        v61[0] = 2 * v23;
        if ( v74 )
        {
          for ( k = v23; k && v6[k - 1] != 92; --k )
            ;
          if ( k >= (unsigned int)v23 || k < v19 )
            *v74 = 0LL;
          else
            *v74 = &v6[k];
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
      v17 = v64;
LABEL_146:
      if ( v56 )
      {
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
          {
            NtClose(*(HANDLE *)(v66 + 8));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v66);
          }
          Length = v59;
          v6 = v62;
        }
        else
        {
          RtlLeaveCriticalSection(&FastPebLock);
        }
      }
      if ( Length >= 2 * (unsigned __int64)v26 && v26 )
        *v6 = 0;
      return Length;
    }
    switch ( v15 )
    {
      case 1:
        v36 = 0;
        v69 = 0;
        for ( m = 2; m < v10; ++m )
        {
          v37 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * m);
          if ( v37 == 92 || v37 == 47 )
          {
            v69 = ++v36;
            if ( v36 == 2 )
              break;
          }
        }
        v58 = m;
        v65 = m;
        DosPath.Buffer = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * m;
        DosPath.MaximumLength = a1[1];
        goto LABEL_101;
      case 3:
        v40 = RtlpReferenceCurrentDirectory(0LL);
        v64 = (volatile signed __int32 *)v40;
        v66 = v40;
        v56 = 1;
        if ( v40 )
        {
          p_CurrentDirectory = (_CURDIR *)(v40 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
        }
        v68 = p_CurrentDirectory;
        v72 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v42 = RtlUpcaseUnicodeChar(**((unsigned __int16 **)a1 + 1));
        v43 = v42;
        v71 = v42;
        if ( v72 == v42 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          RtlUnicodeStringCopy(v61, &DosPath);
          v6 = v62;
          v9 = v61[0];
        }
        else
        {
          RtlpCheckRelativeDrive(v42);
          SourceString = 61;
          *(_WORD *)v78 = v43;
          *(_DWORD *)&v78[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v47 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, v61);
          v75 = v47;
          if ( v47 < 0 )
          {
            if ( v47 == -1073741789 )
            {
              v9 = v61[0];
              if ( (unsigned int)v61[0] + 2 > 0xFFFF )
              {
                Length = 0;
                v59 = 0;
                v6 = v62;
                v26 = v7 >> 1;
                goto LABEL_52;
              }
              DosPath.Length = v61[0] + 2;
              v6 = v62;
            }
            else
            {
              v61[0] = 0;
              SourceString = v43;
              *(_DWORD *)v78 = 6029370;
              *(_WORD *)&v78[4] = 0;
              RtlUnicodeStringCopyString(v61, &SourceString);
              DosPath.Length = 8;
              v6 = v62;
              v9 = v61[0];
            }
          }
          else
          {
            v9 = v61[0];
            v48 = v61[0];
            v49 = (unsigned __int64)v61[0] >> 1;
            if ( (unsigned int)v49 <= 3 || (unsigned int)v49 >= v60 )
            {
              v6 = v62;
            }
            else
            {
              v6 = v62;
              v62[(unsigned int)v49] = 92;
              v9 = v48 + 2;
              v61[0] = v48 + 2;
            }
            DosPath.Length = v9;
          }
        }
        v19 = 3;
        v65 = 3;
        m = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v16) = 1;
        v44 = RtlpReferenceCurrentDirectory(v16);
        v64 = (volatile signed __int32 *)v44;
        v66 = v44;
        v56 = 1;
        if ( v44 )
        {
          v45 = (_CURDIR *)(v44 + 24);
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
          m = 0;
        }
        v68 = v45;
        v46 = RtlpComputeBackupIndex(v45);
        v58 = v46;
        v65 = v46;
        DosPath = v45->DosPath;
        if ( v46 == 3 )
          DosPath.Length = 4;
        else
          DosPath.Length = 2 * v46;
        goto LABEL_101;
      case 5:
        v38 = RtlpReferenceCurrentDirectory(0LL);
        v64 = (volatile signed __int32 *)v38;
        v66 = v38;
        v56 = 1;
        if ( v38 )
        {
          v39 = (_CURDIR *)(v38 + 24);
          *(_DWORD *)(a6 + 4) = *(_DWORD *)(v38 + 40);
        }
        else
        {
          v39 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
          m = 0;
        }
        v68 = v39;
        DosPath = v39->DosPath;
        v58 = RtlpComputeBackupIndex(v39);
        v65 = v58;
LABEL_101:
        RtlUnicodeStringCopy(v61, &DosPath);
        v6 = v62;
        v9 = v61[0];
        v19 = v58;
        goto LABEL_19;
      case 6:
      case 7:
        v65 = 4;
        m = 4;
        if ( v10 < 4 )
          m = v10;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(v61, &DosPath);
        v9 = v61[0];
        v6 = v62;
        if ( v61[0] >= 6u )
          v62[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
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
  if ( (int)v54 + 8 >= (unsigned int)v63 )
  {
    v55 = v54 + 10;
    if ( (unsigned int)(v54 + 10) > 0xFFFF )
      return 0;
    return v55;
  }
  else
  {
    RtlUnicodeStringCopy(v61, L"\b\n");
    RtlUnicodeStringCbCatStringN(v61, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v53 >> 1), v54);
    return (unsigned int)(v54 + 8);
  }
}
