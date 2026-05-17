/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180016F00
 * Callers:
 *     LdrpGetFullPath @ 0x18000C3E0 (LdrpGetFullPath.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_UstrEx @ 0x180018C40 (RtlGetFullPathName_UstrEx.c)
 *     RtlGetFullPathName_UEx @ 0x180018F30 (RtlGetFullPathName_UEx.c)
 *     RtlSetCurrentDirectory_U @ 0x180077BE0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x180010AD0 (RtlUpcaseUnicodeChar.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180017960 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpCheckRelativeDrive @ 0x18004D078 (RtlpCheckRelativeDrive.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004DB80 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18006EDF4 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18006F008 (RtlUnicodeStringCopy.c)
 *     RtlpReferenceCurrentDirectory @ 0x180077EEC (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x18007D8C0 (RtlpComputeBackupIndex.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800C8A68 (RtlUnicodeStringCopyString.c)
 *     RtlpCheckDeviceName @ 0x1800C8ADC (RtlpCheckDeviceName.c)
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
  unsigned int j; // ebx
  unsigned int v19; // r11d
  unsigned int Length; // r15d
  unsigned int v21; // edx
  unsigned int k; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  int v25; // edx
  int v26; // edx
  __int16 v27; // r8
  unsigned int v28; // ebx
  _WORD *v29; // rdx
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
  __int64 v40; // rax
  _CURDIR *v41; // rcx
  __int64 v42; // rax
  _CURDIR *p_CurrentDirectory; // rsi
  WCHAR v44; // ax
  WCHAR v45; // r15
  __int64 v46; // rax
  _CURDIR *v47; // rsi
  int v48; // eax
  int v49; // eax
  __int16 v50; // cx
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
  _WORD v63[4]; // [rsp+40h] [rbp-C8h] BYREF
  _WORD *v64; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v65; // [rsp+50h] [rbp-B8h]
  volatile signed __int32 *v66; // [rsp+58h] [rbp-B0h]
  int v67; // [rsp+60h] [rbp-A8h]
  __int64 v68; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  _CURDIR *v70; // [rsp+80h] [rbp-88h]
  int v71; // [rsp+88h] [rbp-80h]
  unsigned int v72; // [rsp+8Ch] [rbp-7Ch]
  WCHAR v73; // [rsp+90h] [rbp-78h]
  __int16 v74; // [rsp+94h] [rbp-74h]
  unsigned int v75; // [rsp+98h] [rbp-70h]
  _QWORD *v76; // [rsp+A0h] [rbp-68h]
  int v77; // [rsp+A8h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  WCHAR SourceString; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v80[6]; // [rsp+C2h] [rbp-46h]

  v76 = a4;
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
  v75 = *a1;
  v10 = v75 >> 1;
  if ( !(v75 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v75 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v59 = v13 != 92 && v13 != 47;
  v62 = v7 >> 1;
  v72 = v7 >> 1;
  memset(a3, 0, v7);
  v63[0] = 0;
  v65 = 2 * (v7 >> 1);
  v63[1] = v65;
  v64 = v6;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v55 = HIWORD(IsDosDeviceName_Ustr);
    v56 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v55 || (int)RtlpCheckDeviceName(a1, v55, a5) >= 0 && !*a5 )
    {
      if ( (int)v56 + 8 >= (unsigned int)v65 )
      {
        v57 = v56 + 10;
        if ( (unsigned int)(v56 + 10) > 0xFFFF )
          return 0;
        return v57;
      }
      else
      {
        RtlUnicodeStringCopy(v63, L"\b\n");
        RtlUnicodeStringCbCatStringN(v63, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v55 >> 1), v56);
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
  v66 = 0LL;
  v68 = 0LL;
  v58 = 0;
  j = 0;
  if ( v15 != 2 )
  {
    switch ( v15 )
    {
      case 1:
        v38 = 0;
        v71 = 0;
        for ( j = 2; j < v10; ++j )
        {
          v39 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v39 == 92 || v39 == 47 )
          {
            v71 = ++v38;
            if ( v38 == 2 )
              break;
          }
        }
        v60 = j;
        v67 = j;
        DosPath.Buffer = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_95;
      case 3:
        v42 = RtlpReferenceCurrentDirectory(0LL);
        v66 = (volatile signed __int32 *)v42;
        v68 = v42;
        v58 = 1;
        if ( v42 )
        {
          p_CurrentDirectory = (_CURDIR *)(v42 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v66 = 0LL;
        }
        v70 = p_CurrentDirectory;
        v74 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v44 = RtlUpcaseUnicodeChar(**((_WORD **)a1 + 1));
        v45 = v44;
        v73 = v44;
        if ( v74 == v44 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          RtlUnicodeStringCopy(v63, &DosPath);
          v6 = v64;
          v9 = v63[0];
        }
        else
        {
          RtlpCheckRelativeDrive(v44);
          SourceString = 61;
          *(_WORD *)v80 = v45;
          *(_DWORD *)&v80[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v49 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, v63);
          v77 = v49;
          if ( v49 < 0 )
          {
            if ( v49 == -1073741789 )
            {
              v9 = v63[0];
              if ( (unsigned int)v63[0] + 2 > 0xFFFF )
              {
                Length = 0;
                v61 = 0;
                v6 = v64;
                v28 = v7 >> 1;
                goto LABEL_52;
              }
              DosPath.Length = v63[0] + 2;
              v6 = v64;
            }
            else
            {
              v63[0] = 0;
              SourceString = v45;
              *(_DWORD *)v80 = 6029370;
              *(_WORD *)&v80[4] = 0;
              RtlUnicodeStringCopyString(v63, &SourceString);
              DosPath.Length = 8;
              v6 = v64;
              v9 = v63[0];
            }
          }
          else
          {
            v9 = v63[0];
            v50 = v63[0];
            v51 = (unsigned __int64)v63[0] >> 1;
            if ( (unsigned int)v51 <= 3 || (unsigned int)v51 >= v62 )
            {
              v6 = v64;
            }
            else
            {
              v6 = v64;
              v64[(unsigned int)v51] = 92;
              v9 = v50 + 2;
              v63[0] = v50 + 2;
            }
            DosPath.Length = v9;
          }
        }
        v19 = 3;
        v67 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v16) = 1;
        v46 = RtlpReferenceCurrentDirectory(v16);
        v66 = (volatile signed __int32 *)v46;
        v68 = v46;
        v58 = 1;
        if ( v46 )
        {
          v47 = (_CURDIR *)(v46 + 24);
        }
        else
        {
          v47 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v66 = 0LL;
          j = 0;
        }
        v70 = v47;
        v48 = RtlpComputeBackupIndex(v47);
        v60 = v48;
        v67 = v48;
        DosPath = v47->DosPath;
        if ( v48 == 3 )
          DosPath.Length = 4;
        else
          DosPath.Length = 2 * v48;
        goto LABEL_95;
      case 5:
        v40 = RtlpReferenceCurrentDirectory(0LL);
        v66 = (volatile signed __int32 *)v40;
        v68 = v40;
        v58 = 1;
        if ( v40 )
        {
          v41 = (_CURDIR *)(v40 + 24);
          *(_DWORD *)(a6 + 4) = *(_DWORD *)(v40 + 40);
        }
        else
        {
          v41 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v66 = 0LL;
          j = 0;
        }
        v70 = v41;
        DosPath = v41->DosPath;
        v60 = RtlpComputeBackupIndex(v41);
        v67 = v60;
LABEL_95:
        RtlUnicodeStringCopy(v63, &DosPath);
        v6 = v64;
        v9 = v63[0];
        v19 = v60;
        goto LABEL_19;
      case 6:
      case 7:
        v67 = 4;
        j = 4;
        if ( v10 < 4 )
          j = v10;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(v63, &DosPath);
        v9 = v63[0];
        v6 = v64;
        if ( v63[0] >= 6u )
          v64[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v19 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v59 = 0;
        goto LABEL_19;
      default:
        Length = 0;
        v61 = 0;
        v28 = v7 >> 1;
        goto LABEL_146;
    }
  }
  v19 = 3;
  v67 = 3;
LABEL_19:
  Length = DosPath.Length;
  v21 = v75 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v21 + 2 > v7 )
  {
    if ( v10 > 1 || **((_WORD **)a1 + 1) != 46 )
    {
      v31 = v21 + 2;
      if ( v31 > 0xFFFF )
        v31 = 0;
      Length = v31;
      v61 = v31;
      v28 = v7 >> 1;
      goto LABEL_52;
    }
    if ( v10 != 1 )
    {
      Length = v75 + DosPath.Length - 2 * j;
      if ( v21 > 0xFFFF )
        Length = 0;
      v28 = v7 >> 1;
      goto LABEL_51;
    }
    if ( DosPath.Length == 8 )
    {
      if ( v7 <= 8 )
      {
        Length = 10;
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
      v52 = v9;
      v53 = (unsigned __int64)v9 >> 1;
      if ( (_DWORD)v53 && v6[(unsigned int)(v53 - 1)] == 92 )
      {
        v9 -= 2;
        v63[0] = v52 - 2;
      }
    }
  }
  for ( k = 0; k < v9 >> 1; ++k )
  {
    if ( v6[k] == 47 )
      v6[k] = 92;
  }
  v23 = (unsigned __int64)v9 >> 1;
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
      if ( !(_DWORD)v23 || v6[(unsigned int)(v23 - 1)] != 92 )
      {
        v6[(unsigned int)v23] = 92;
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
          v65 = v6[(unsigned int)v23];
          v36 = v65;
          v6[(unsigned int)v23] = 0;
          if ( v36 == 92 )
          {
            while ( (unsigned int)v23 >= v19 )
            {
              v65 = v6[(unsigned int)v23];
              v37 = v65;
              v6[(unsigned int)v23] = 0;
              if ( v37 == 92 )
              {
                if ( (unsigned int)v23 < v19 )
                  goto LABEL_84;
                goto LABEL_81;
              }
              LODWORD(v23) = v23 - 1;
            }
            break;
          }
          LODWORD(v23) = v23 - 1;
        }
LABEL_84:
        LODWORD(v23) = v23 + 1;
LABEL_81:
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
              && v6[(unsigned int)(v23 - 1)] == 46
              && v6[(unsigned int)(v23 - 2)] != 46 )
            {
              LODWORD(v23) = v23 - 1;
            }
            break;
          }
          v6[(unsigned int)v23] = v27;
          LODWORD(v23) = v23 + 1;
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v59 && (unsigned int)v23 > v19 && v6[(unsigned int)(v23 - 1)] == 92 )
    LODWORD(v23) = v23 - 1;
  v28 = v7 >> 1;
  if ( (unsigned int)v23 < v62 )
    v6[(unsigned int)v23] = 0;
  while ( (_DWORD)v23 )
  {
    v23 = (unsigned int)(v23 - 1);
    v29 = &v6[v23];
    if ( *v29 != 32 && *v29 != 46 )
    {
      LODWORD(v23) = v23 + 1;
      break;
    }
    *v29 = 0;
  }
  v63[0] = 2 * v23;
  if ( v76 )
  {
    for ( m = v23; m && v6[m - 1] != 92; --m )
      ;
    if ( m >= (unsigned int)v23 || m < v19 )
      *v76 = 0LL;
    else
      *v76 = &v6[m];
  }
  Length = (unsigned __int16)(2 * v23);
LABEL_51:
  v61 = Length;
LABEL_52:
  v17 = v66;
LABEL_146:
  if ( v58 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v68 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v68);
      }
      Length = v61;
      v6 = v64;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( Length >= 2 * (unsigned __int64)v28 && v28 )
    *v6 = 0;
  return Length;
}
