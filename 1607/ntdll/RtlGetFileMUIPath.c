/*
 * XREFs of RtlGetFileMUIPath @ 0x180069A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     RtlIntegerToUnicode @ 0x180014BA0 (RtlIntegerToUnicode.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4A4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetFullPathName_U @ 0x18006A920 (RtlGetFullPathName_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlUnicodeStringToInteger @ 0x18006AEA0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7310 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800E76B0 (RtlpMUIGetAllInstalledLang.c)
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
  const WCHAR *v9; // r14
  ULONGLONG v10; // rdi
  NTSTATUS v11; // ebx
  WCHAR *Heap; // rax
  WCHAR *v13; // r14
  ULONGLONG v14; // rax
  __int16 v16; // ax
  int v17; // edi
  int v18; // ecx
  ULONG v19; // esi
  SIZE_T v20; // r8
  PVOID v21; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  ULONGLONG v23; // r15
  ULONGLONG v24; // rcx
  const WCHAR *m; // rbx
  const WCHAR *v26; // r12
  WCHAR *v27; // r12
  int *v28; // rdi
  unsigned __int64 Length; // rbx
  __int64 v30; // rax
  ULONGLONG v31; // rcx
  const WCHAR *k; // rbx
  __int64 v33; // rax
  const WCHAR *v34; // r12
  char v35; // r13
  ULONG v36; // eax
  wchar_t *v37; // rbx
  ULONGLONG j; // rcx
  __int64 v39; // rax
  const WCHAR *v40; // r14
  __int64 v41; // rax
  PVOID v42; // rax
  SIZE_T v43; // r8
  PVOID v44; // rax
  PCWSTR v45; // rcx
  char v46; // bl
  ULONGLONG v47; // r10
  unsigned __int16 v48; // r8
  ULONGLONG v49; // rax
  unsigned __int64 i; // r9
  __int64 v51; // rax
  BOOLEAN v52; // al
  __int64 v53; // rax
  char v54; // [rsp+40h] [rbp-C0h]
  char v55; // [rsp+41h] [rbp-BFh] BYREF
  bool v56; // [rsp+42h] [rbp-BEh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PVOID v58; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v59[2]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG NumberOfLanguages; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v62; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+88h] [rbp-78h] BYREF
  PWSTR FilePart; // [rsp+90h] [rbp-70h] BYREF
  void *v66; // [rsp+98h] [rbp-68h]
  ULONGLONG v67; // [rsp+A0h] [rbp-60h]
  int ProcessRegistryInfo; // [rsp+A8h] [rbp-58h]
  DWORD Lcid; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD v70[2]; // [rsp+B0h] [rbp-50h] BYREF
  PULONG v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  PCWSTR SourceString; // [rsp+D0h] [rbp-30h]
  PVOID BaseAddress; // [rsp+D8h] [rbp-28h]
  PULONGLONG v75; // [rsp+E0h] [rbp-20h]
  char v76[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v77[16]; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING Source; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v79; // [rsp+110h] [rbp+10h] BYREF
  _UNICODE_STRING String; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v81; // [rsp+130h] [rbp+30h] BYREF
  WCHAR v82; // [rsp+140h] [rbp+40h] BYREF
  __int64 v83; // [rsp+142h] [rbp+42h]

  v66 = FileMUIPath;
  v8 = 0LL;
  v9 = 0LL;
  v70[1] = FileMUIPathLength;
  v71 = LanguageLength;
  SourceString = Language;
  v10 = Flags;
  v75 = Enumerator;
  v59[0] = 0LL;
  v72 = 0LL;
  v67 = 0LL;
  v55 = 0;
  v82 = 0;
  v83 = 0LL;
  v58 = 0LL;
  String1 = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  BaseAddress = 0LL;
  v62 = 0LL;
  FilePart = 0LL;
  v70[0] = 0LL;
  if ( !FilePath || !Enumerator )
  {
    v11 = -1073741811;
    goto LABEL_63;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo(v70);
  v11 = ProcessRegistryInfo;
  if ( ProcessRegistryInfo < 0 )
    return v11;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
  v62 = Heap;
  v13 = Heap;
  if ( !Heap )
    return -1073741801;
  if ( RtlGetFullPathName_U(FilePath, 0x208u, Heap, &FilePart) - 1 > 0x206
    || !FilePart
    || FilePart <= v13
    || FilePart >= v13 + 260 )
  {
    goto LABEL_11;
  }
  *(FilePart - 1) = 0;
  v14 = *Enumerator;
  if ( *Enumerator )
  {
    v23 = v59[0];
    v47 = *Enumerator & 0xF;
    v72 = v47;
    v48 = v14 & 0xF;
    v49 = v14 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v48 ^= v49 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v23 = v49 & 0xFFF;
          v59[0] = v23;
        }
        else if ( i == 3 )
        {
          v8 = v49 & 0xFFF;
        }
      }
      else
      {
        v67 = v49 & 0xFFF;
      }
      v49 >>= 12;
    }
    v11 = ProcessRegistryInfo;
    if ( (((unsigned __int16)v49 ^ v48) & 0xFFF) != 0 )
    {
      v11 = -1073741776;
    }
    else
    {
      if ( v8 <= v23 )
      {
        if ( (v67 & 0x20) != 0 )
          v17 = 2;
        else
          v17 = (v67 & 0x40 | 0x20) >> 5;
        v9 = (const WCHAR *)v58;
        v56 = (v67 & 4) == 0;
        v54 = v47 & 1;
LABEL_32:
        if ( v17 != 1 )
        {
          if ( v17 != 2 )
          {
            if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(v62, v77, &String1) )
              v8 = v23;
            v35 = 0;
            if ( !v8 )
            {
              v36 = *v71;
              if ( *v71 )
              {
                if ( SourceString )
                {
                  v45 = SourceString;
                  do
                  {
                    if ( !*v45 )
                      break;
                    ++v45;
                    --v36;
                  }
                  while ( v36 );
                  if ( v36 )
                  {
                    if ( v56 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      if ( RtlCultureNameToLCID(&DestinationString, &Value) )
                        v35 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String, SourceString);
                      if ( RtlUnicodeStringToInteger(&String, 0x10u, &Value) >= 0 )
                      {
                        v42 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        BaseAddress = v42;
                        if ( !v42 )
                        {
LABEL_102:
                          v9 = (const WCHAR *)v58;
                          goto LABEL_103;
                        }
                        DestinationString.Buffer = (wchar_t *)v42;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v52 = RtlLCIDToCultureName(Value, &DestinationString);
                        v23 = v59[0];
                        v9 = (const WCHAR *)v58;
                        if ( v52 )
                          v35 = 1;
                      }
                    }
                  }
                }
              }
            }
            v37 = String1;
            for ( j = 0LL; j < v8; v37 += v39 + 1 )
            {
              if ( !v37 )
                break;
              if ( !*v37 )
                break;
              ++j;
              v39 = -1LL;
              do
                ++v39;
              while ( v37[v39] );
            }
            if ( v8 < v23 )
            {
              v40 = FilePart;
              while ( 1 )
              {
                if ( v35 && wcsicmp(v37, DestinationString.Buffer) )
                {
                  ++v8;
                  v41 = -1LL;
                  do
                    ++v41;
                  while ( v37[v41] );
                }
                else
                {
                  RtlInitUnicodeString(&DestinationString, v37);
                  v81 = DestinationString;
                  if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&v81, v62, v40, v54, v66, &v55) )
                  {
LABEL_99:
                    v9 = (const WCHAR *)v58;
                    goto LABEL_39;
                  }
                  ++v8;
                  v41 = -1LL;
                  do
                    ++v41;
                  while ( v37[v41] );
                }
                v37 += v41 + 1;
                if ( v8 >= v23 )
                  goto LABEL_99;
              }
            }
            goto LABEL_58;
          }
          if ( !v9 )
          {
            RtlpMUIGetAllInstalledLang(v70[0], &v58, v76);
            v9 = (const WCHAR *)v58;
          }
          v31 = 0LL;
          for ( k = v9; v31 < v8; k += v33 + 1 )
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            ++v31;
            v33 = -1LL;
            do
              ++v33;
            while ( k[v33] );
          }
          if ( v8 >= v23 )
          {
LABEL_58:
            v11 = -2147483642;
            goto LABEL_50;
          }
          v34 = FilePart;
          do
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            RtlInitUnicodeString(&DestinationString, k);
            v79 = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&v79, v62, v34, v54, v66, &v55) )
              break;
            ++v8;
            v53 = -1LL;
            do
              ++v53;
            while ( k[v53] );
            k += v53 + 1;
          }
          while ( v8 < v23 );
LABEL_39:
          if ( v8 < v23 )
          {
            v27 = (WCHAR *)SourceString;
            v28 = (int *)v71;
            if ( SourceString || v71 )
            {
              if ( v56 )
                goto LABEL_42;
              v46 = RtlCultureNameToLCID(&DestinationString, &Lcid);
              if ( v46 )
                v46 = (int)RtlIntegerToUnicode((unsigned __int16)Lcid, 0x10u, -4, (char *)&v82) >= 0;
              RtlInitUnicodeString(&DestinationString, &v82);
              if ( v46 )
              {
LABEL_42:
                if ( v27 )
                {
                  if ( v28 )
                  {
                    if ( *v28 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      v55 = 1;
                    }
                    else
                    {
                      Length = DestinationString.Length;
                      memmove(v27, DestinationString.Buffer, DestinationString.Length);
                      v27[Length >> 1] = 0;
                    }
                  }
                }
                else if ( v28 )
                {
                  *v28 = 85;
                }
              }
            }
            if ( !v66 || !v27 && v28 )
            {
              v11 = 0;
              goto LABEL_63;
            }
            if ( v55 )
            {
              v11 = -1073741789;
              goto LABEL_63;
            }
            v11 = 0;
LABEL_50:
            *v75 = v72 | (((v8 + 1) ^ v23 ^ v72 ^ v67) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v67 | ((v23 | ((v8 + 1) << 12)) << 24) | 0xCB7000));
LABEL_63:
            if ( !BaseAddress )
              goto LABEL_103;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            goto LABEL_102;
          }
          goto LABEL_58;
        }
        if ( v9 )
        {
LABEL_34:
          v24 = 0LL;
          for ( m = v9; v24 < v8; m += v51 + 1 )
          {
            if ( !m )
              break;
            if ( !*m )
              break;
            ++v24;
            v51 = -1LL;
            do
              ++v51;
            while ( m[v51] );
          }
          if ( v8 >= v23 )
            goto LABEL_58;
          v26 = FilePart;
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            Source = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&Source, v62, v26, v54, v66, &v55) )
              break;
            ++v8;
            v30 = -1LL;
            do
              ++v30;
            while ( m[v30] );
            m += v30 + 1;
          }
          while ( v8 < v23 );
          goto LABEL_39;
        }
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
        if ( ReturnLength )
        {
          v43 = 0LL;
          if ( is_mul_ok(2uLL, ReturnLength) )
            v43 = 2LL * ReturnLength;
          if ( !v43 )
          {
            v11 = -1073741675;
LABEL_105:
            if ( String1 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
            goto LABEL_107;
          }
          v44 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v43);
          v58 = v44;
          v9 = (const WCHAR *)v44;
          if ( v44 && RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, (PZZWSTR)v44, &ReturnLength) >= 0 )
          {
            v23 = v59[0];
            goto LABEL_34;
          }
          v23 = v59[0];
        }
        v8 = v23;
        goto LABEL_34;
      }
      v11 = -2147483642;
    }
    goto LABEL_12;
  }
  if ( (v10 & 0xC) == 0xC
    || (v10 & 0x30) == 0x30
    || (v10 & 0x50) == 0x50
    || (v10 & 0x60) == 0x60
    || (v10 & 0x70) == 112
    || (v10 & 0x300) == 768 )
  {
LABEL_11:
    v11 = -1073741811;
    goto LABEL_12;
  }
  v16 = v10;
  v67 = v10;
  if ( (v10 & 0x20) != 0 )
    v17 = 2;
  else
    v17 = (v10 & 0x40 | 0x20) >> 5;
  v56 = (v16 & 4) == 0;
  if ( (v16 & 0x200) == 0 && ((v16 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(FilePath)) )
  {
    v54 = 1;
    v72 = 1LL;
  }
  else
  {
    v54 = 0;
  }
  v18 = v17 - 1;
  if ( v17 != 1 )
  {
    if ( v17 == 2 )
    {
      v59[0] = 0LL;
      RtlpMUIGetAllInstalledLang(v70[0], &v58, v59);
    }
    else
    {
      if ( v17 != 3 )
      {
        v23 = v59[0];
        v9 = (const WCHAR *)v58;
LABEL_31:
        v8 = 0LL;
        goto LABEL_32;
      }
      v59[0] = 0LL;
      RtlpMUIEnumerateFolder(v13, v59, &String1);
    }
    v23 = v59[0];
    v9 = (const WCHAR *)v58;
    goto LABEL_31;
  }
  v19 = v18 + 48;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(v18 + 48, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( !ReturnLength )
    goto LABEL_12;
  v20 = 0LL;
  if ( is_mul_ok(2uLL, ReturnLength) )
    v20 = 2LL * ReturnLength;
  if ( v20 )
  {
    v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v19 - 40, v20);
    v58 = v21;
    v9 = (const WCHAR *)v21;
    if ( !v21 )
    {
      v11 = -1073741801;
LABEL_107:
      v13 = (WCHAR *)v62;
      goto LABEL_12;
    }
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(v19, &NumberOfLanguages, (PZZWSTR)v21, &ReturnLength);
    if ( ThreadPreferredUILanguages < 0 )
    {
      v11 = ThreadPreferredUILanguages;
LABEL_103:
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v58);
      goto LABEL_105;
    }
    v23 = NumberOfLanguages;
    v59[0] = NumberOfLanguages;
    goto LABEL_31;
  }
  v11 = -1073741675;
LABEL_12:
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  return v11;
}
