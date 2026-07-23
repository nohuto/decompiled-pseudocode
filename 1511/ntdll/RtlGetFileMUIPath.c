/*
 * XREFs of RtlGetFileMUIPath @ 0x18003F210
 * Callers:
 *     <none>
 * Callees:
 *     RtlIntegerToUnicode @ 0x1800193F0 (RtlIntegerToUnicode.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18003FC68 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetFullPathName_U @ 0x180041B80 (RtlGetFullPathName_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlUnicodeStringToInteger @ 0x180075D40 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800DE3C0 (RtlpMUIGetAllInstalledLang.c)
 */

NTSTATUS __cdecl RtlGetFileMUIPath(
        ULONG Flags,
        PCWSTR FilePath,
        PWSTR Language,
        PULONG LanguageLength,
        PWSTR FileMUIPath,
        PULONG FileMUIPathLength,
        PULONGLONG Enumerator)
{
  ULONGLONG v8; // rsi
  PCWSTR v9; // r14
  ULONGLONG v10; // rdi
  NTSTATUS v11; // ebx
  WCHAR *Heap; // rax
  WCHAR *v13; // r14
  ULONGLONG v14; // rax
  ULONGLONG v15; // r15
  char v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int16 v18; // r8
  ULONGLONG v19; // rax
  int v20; // edi
  __int16 v21; // ax
  SIZE_T v22; // r8
  WCHAR *v23; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  SIZE_T v25; // r8
  WCHAR *v26; // rax
  ULONGLONG v27; // rcx
  const WCHAR *k; // rbx
  __int64 v29; // rax
  const WCHAR *v30; // r12
  __int64 v31; // rax
  ULONGLONG v32; // rcx
  const WCHAR *i; // rbx
  __int64 v34; // rax
  const WCHAR *v35; // r12
  __int64 v36; // rax
  char v37; // r13
  ULONG v38; // eax
  PCWSTR v39; // rcx
  PVOID v40; // rax
  BOOLEAN v41; // al
  wchar_t *v42; // rbx
  ULONGLONG j; // rcx
  __int64 v44; // rax
  const WCHAR *v45; // r14
  __int64 v46; // rax
  WCHAR *v47; // r12
  int *v48; // rdi
  char v49; // bl
  unsigned __int64 Length; // rbx
  char v52; // [rsp+40h] [rbp-C0h]
  char v53; // [rsp+41h] [rbp-BFh] BYREF
  bool v54; // [rsp+42h] [rbp-BEh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PCWSTR SourceString; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v57[2]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG NumberOfLanguages; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v60; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+88h] [rbp-78h] BYREF
  PWSTR FilePart; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v64; // [rsp+98h] [rbp-68h]
  void *v65; // [rsp+A0h] [rbp-60h]
  PULONG v66; // [rsp+A8h] [rbp-58h]
  ULONGLONG v67; // [rsp+B0h] [rbp-50h]
  _QWORD v68[2]; // [rsp+B8h] [rbp-48h] BYREF
  DWORD Lcid; // [rsp+C8h] [rbp-38h] BYREF
  int ProcessRegistryInfo; // [rsp+CCh] [rbp-34h]
  PCWSTR v71; // [rsp+D0h] [rbp-30h]
  PVOID BaseAddress; // [rsp+D8h] [rbp-28h]
  PULONGLONG v73; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING Source; // [rsp+F0h] [rbp-10h] BYREF
  char v75[16]; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v76; // [rsp+110h] [rbp+10h] BYREF
  char v77[8]; // [rsp+120h] [rbp+20h] BYREF
  _UNICODE_STRING String; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v79; // [rsp+140h] [rbp+40h] BYREF
  WCHAR v80; // [rsp+150h] [rbp+50h] BYREF
  __int64 v81; // [rsp+152h] [rbp+52h]

  v65 = FileMUIPath;
  v8 = 0LL;
  v9 = 0LL;
  v68[1] = FileMUIPathLength;
  v66 = LanguageLength;
  v71 = Language;
  v10 = Flags;
  v73 = Enumerator;
  v57[0] = 0LL;
  v67 = 0LL;
  v64 = 0LL;
  v53 = 0;
  v80 = 0;
  v81 = 0LL;
  SourceString = 0LL;
  String1 = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  BaseAddress = 0LL;
  v60 = 0LL;
  FilePart = 0LL;
  v68[0] = 0LL;
  if ( !FilePath || !Enumerator )
  {
    v11 = -1073741811;
    goto LABEL_162;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo(v68, (__int64)FilePath, (__int64)Language);
  v11 = ProcessRegistryInfo;
  if ( ProcessRegistryInfo < 0 )
    return v11;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
  v60 = Heap;
  v13 = Heap;
  if ( !Heap )
    return -1073741801;
  if ( RtlGetFullPathName_U(FilePath, 0x208u, Heap, &FilePart) - 1 > 0x206
    || !FilePart
    || FilePart <= v13
    || FilePart >= v13 + 260 )
  {
    goto LABEL_160;
  }
  *(FilePart - 1) = 0;
  v14 = *Enumerator;
  if ( *Enumerator )
  {
    v15 = v57[0];
    v16 = v14 & 0xF;
    v17 = 0LL;
    v67 = *Enumerator & 0xF;
    v18 = v14 & 0xF;
    v19 = v14 >> 4;
    do
    {
      v18 ^= v19 & 0xFFF;
      if ( v17 )
      {
        if ( v17 == 2 )
        {
          v15 = v19 & 0xFFF;
          v57[0] = v15;
        }
        else if ( v17 == 3 )
        {
          v8 = v19 & 0xFFF;
        }
      }
      else
      {
        v64 = v19 & 0xFFF;
      }
      v19 >>= 12;
      ++v17;
    }
    while ( v17 < 4 );
    v11 = ProcessRegistryInfo;
    if ( (((unsigned __int16)v19 ^ v18) & 0xFFF) != 0 )
    {
      v11 = -1073741776;
      goto LABEL_170;
    }
    if ( v8 > v15 )
    {
      v11 = -2147483642;
      goto LABEL_170;
    }
    if ( (v64 & 0x20) != 0 )
      v20 = 2;
    else
      v20 = (v64 & 0x40 | 0x20) >> 5;
    v9 = SourceString;
    v54 = (v64 & 4) == 0;
    v52 = v16 & 1;
LABEL_57:
    if ( v20 != 1 )
    {
      if ( v20 == 2 )
      {
        if ( !v9 )
        {
          RtlpMUIGetAllInstalledLang(v68[0], &SourceString, v77);
          v9 = SourceString;
        }
        v32 = 0LL;
        for ( i = v9; v32 < v8; i += v34 + 1 )
        {
          if ( !i )
            break;
          if ( !*i )
            break;
          ++v32;
          v34 = -1LL;
          do
            ++v34;
          while ( i[v34] );
        }
        if ( v8 >= v15 )
          goto LABEL_157;
        v35 = FilePart;
        do
        {
          if ( !i )
            break;
          if ( !*i )
            break;
          RtlInitUnicodeString(&DestinationString, i);
          v76 = DestinationString;
          if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&v76, v60, v35, v52, v65, &v53) )
            break;
          ++v8;
          v36 = -1LL;
          do
            ++v36;
          while ( i[v36] );
          i += v36 + 1;
        }
        while ( v8 < v15 );
      }
      else
      {
        if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(v60, v75, &String1) )
          v8 = v15;
        v37 = 0;
        if ( !v8 )
        {
          v38 = *v66;
          if ( *v66 )
          {
            if ( v71 )
            {
              v39 = v71;
              do
              {
                if ( !*v39 )
                  break;
                ++v39;
                --v38;
              }
              while ( v38 );
              if ( v38 )
              {
                if ( v54 )
                {
                  RtlInitUnicodeString(&DestinationString, v71);
                  if ( RtlCultureNameToLCID(&DestinationString, &Value) )
                    v37 = 1;
                }
                else
                {
                  RtlInitUnicodeString(&String, v71);
                  if ( RtlUnicodeStringToInteger(&String, 0x10u, &Value) >= 0 )
                  {
                    v40 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                    BaseAddress = v40;
                    if ( !v40 )
                      goto LABEL_164;
                    DestinationString.Buffer = (unsigned __int16 *)v40;
                    *(_DWORD *)&DestinationString.Length = 11141120;
                    v41 = RtlLCIDToCultureName(Value, &DestinationString);
                    v15 = v57[0];
                    v9 = SourceString;
                    if ( v41 )
                      v37 = 1;
                  }
                }
              }
            }
          }
        }
        v42 = String1;
        for ( j = 0LL; j < v8; v42 += v44 + 1 )
        {
          if ( !v42 )
            break;
          if ( !*v42 )
            break;
          ++j;
          v44 = -1LL;
          do
            ++v44;
          while ( v42[v44] );
        }
        if ( v8 >= v15 )
          goto LABEL_157;
        v45 = FilePart;
        do
        {
          if ( v37 && wcsicmp(v42, DestinationString.Buffer) )
          {
            ++v8;
            v46 = -1LL;
            do
              ++v46;
            while ( v42[v46] );
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v42);
            v79 = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&v79, v60, v45, v52, v65, &v53) )
              break;
            ++v8;
            v46 = -1LL;
            do
              ++v46;
            while ( v42[v46] );
          }
          v42 += v46 + 1;
        }
        while ( v8 < v15 );
        v9 = SourceString;
      }
      goto LABEL_136;
    }
    if ( !v9 )
    {
      ReturnLength = 0;
      RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
      if ( ReturnLength )
      {
        v25 = 0LL;
        if ( is_mul_ok(2uLL, ReturnLength) )
          v25 = 2LL * ReturnLength;
        if ( !v25 )
        {
          v11 = -1073741675;
LABEL_167:
          if ( String1 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
          goto LABEL_169;
        }
        v26 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v25);
        SourceString = v26;
        v9 = v26;
        if ( v26 && RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v26, &ReturnLength) >= 0 )
        {
          v15 = v57[0];
          goto LABEL_69;
        }
        v15 = v57[0];
      }
      v8 = v15;
    }
LABEL_69:
    v27 = 0LL;
    for ( k = v9; v27 < v8; k += v29 + 1 )
    {
      if ( !k )
        break;
      if ( !*k )
        break;
      ++v27;
      v29 = -1LL;
      do
        ++v29;
      while ( k[v29] );
    }
    if ( v8 >= v15 )
      goto LABEL_157;
    v30 = FilePart;
    do
    {
      if ( !*k )
        break;
      RtlInitUnicodeString(&DestinationString, k);
      Source = DestinationString;
      if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&Source, v60, v30, v52, v65, &v53) )
        break;
      ++v8;
      v31 = -1LL;
      do
        ++v31;
      while ( k[v31] );
      k += v31 + 1;
    }
    while ( v8 < v15 );
LABEL_136:
    if ( v8 < v15 )
    {
      v47 = (WCHAR *)v71;
      v48 = (int *)v66;
      if ( v71 || v66 )
      {
        if ( v54 )
          goto LABEL_143;
        v49 = RtlCultureNameToLCID(&DestinationString, &Lcid);
        if ( v49 )
          v49 = (int)RtlIntegerToUnicode((unsigned __int16)Lcid, 0x10u, -4, (char *)&v80) >= 0;
        RtlInitUnicodeString(&DestinationString, &v80);
        if ( v49 )
        {
LABEL_143:
          if ( v47 )
          {
            if ( v48 )
            {
              if ( *v48 <= (unsigned int)(DestinationString.Length >> 1) )
              {
                v53 = 1;
              }
              else
              {
                Length = DestinationString.Length;
                memmove(v47, DestinationString.Buffer, DestinationString.Length);
                v47[Length >> 1] = 0;
              }
            }
          }
          else if ( v48 )
          {
            *v48 = 85;
          }
        }
      }
      if ( !v65 || !v47 && v48 )
      {
        v11 = 0;
        goto LABEL_162;
      }
      if ( v53 )
      {
        v11 = -1073741789;
LABEL_162:
        if ( !BaseAddress )
          goto LABEL_165;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
LABEL_164:
        v9 = SourceString;
LABEL_165:
        if ( v9 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
        goto LABEL_167;
      }
      v11 = 0;
LABEL_158:
      *v73 = v67 | (((v8 + 1) ^ v15 ^ v67 ^ v64) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                 * (v64 | ((v15 | ((v8 + 1) << 12)) << 24) | 0xCB7000));
      goto LABEL_162;
    }
LABEL_157:
    v11 = -2147483642;
    goto LABEL_158;
  }
  if ( (v10 & 0xC) == 0xC
    || (v10 & 0x30) == 0x30
    || (v10 & 0x50) == 0x50
    || (v10 & 0x60) == 0x60
    || (v10 & 0x70) == 112
    || (v10 & 0x300) == 768 )
  {
LABEL_160:
    v11 = -1073741811;
    goto LABEL_170;
  }
  v21 = v10;
  v64 = v10;
  if ( (v10 & 0x20) != 0 )
    v20 = 2;
  else
    v20 = (v10 & 0x40 | 0x20) >> 5;
  v54 = (v21 & 4) == 0;
  if ( (v21 & 0x200) == 0 && ((v21 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(FilePath)) )
  {
    v52 = 1;
    v67 = 1LL;
  }
  else
  {
    v52 = 0;
  }
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v57[0] = 0LL;
      RtlpMUIGetAllInstalledLang(v68[0], &SourceString, v57);
    }
    else
    {
      if ( v20 != 3 )
      {
        v15 = v57[0];
        v9 = SourceString;
LABEL_56:
        v8 = 0LL;
        goto LABEL_57;
      }
      v57[0] = 0LL;
      RtlpMUIEnumerateFolder(v13, v57, &String1);
    }
    v15 = v57[0];
    v9 = SourceString;
    goto LABEL_56;
  }
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( !ReturnLength )
    goto LABEL_170;
  v22 = 0LL;
  if ( is_mul_ok(2uLL, ReturnLength) )
    v22 = 2LL * ReturnLength;
  if ( !v22 )
  {
    v11 = -1073741675;
    goto LABEL_170;
  }
  v23 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
  SourceString = v23;
  v9 = v23;
  if ( v23 )
  {
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v23, &ReturnLength);
    if ( ThreadPreferredUILanguages < 0 )
    {
      v11 = ThreadPreferredUILanguages;
      goto LABEL_165;
    }
    v15 = NumberOfLanguages;
    v57[0] = NumberOfLanguages;
    goto LABEL_56;
  }
  v11 = -1073741801;
LABEL_169:
  v13 = (WCHAR *)v60;
LABEL_170:
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  return v11;
}
