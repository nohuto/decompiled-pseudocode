/*
 * XREFs of RtlGetFileMUIPath @ 0x180054700
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18001ECA0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18001FF50 (RtlIntegerToUnicode.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180054C04 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetFullPathName_U @ 0x180054E50 (RtlGetFullPathName_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlUnicodeStringToInteger @ 0x18006A7F0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800D6550 (RtlpMUIGetAllInstalledLang.c)
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
  ULONGLONG v31; // r10
  unsigned __int16 v32; // r8
  ULONGLONG v33; // rax
  unsigned __int64 i; // r9
  SIZE_T v35; // r8
  PVOID v36; // rax
  __int64 v37; // rax
  ULONGLONG v38; // rcx
  const WCHAR *j; // rbx
  __int64 v40; // rax
  const WCHAR *v41; // r12
  __int64 v42; // rax
  char v43; // r13
  ULONG v44; // eax
  PCWSTR v45; // rcx
  PVOID v46; // rax
  BOOLEAN v47; // al
  wchar_t *v48; // rbx
  ULONGLONG k; // rcx
  __int64 v50; // rax
  const WCHAR *v51; // r14
  __int64 v52; // rax
  char v53; // bl
  char v54; // [rsp+40h] [rbp-C0h]
  char v55; // [rsp+41h] [rbp-BFh] BYREF
  bool v56; // [rsp+42h] [rbp-BEh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v59[2]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ULONG NumberOfLanguages; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v62; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+88h] [rbp-78h] BYREF
  PWSTR FilePart; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v66; // [rsp+98h] [rbp-68h]
  void *v67; // [rsp+A0h] [rbp-60h]
  PULONG v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  _QWORD v70[2]; // [rsp+B8h] [rbp-48h] BYREF
  DWORD Lcid; // [rsp+C8h] [rbp-38h] BYREF
  int ProcessRegistryInfo; // [rsp+CCh] [rbp-34h]
  PCWSTR SourceString; // [rsp+D0h] [rbp-30h]
  PVOID v74; // [rsp+D8h] [rbp-28h]
  PULONGLONG v75; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING Source; // [rsp+F0h] [rbp-10h] BYREF
  char v77[16]; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v78; // [rsp+110h] [rbp+10h] BYREF
  char v79[8]; // [rsp+120h] [rbp+20h] BYREF
  _UNICODE_STRING String; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v81; // [rsp+140h] [rbp+40h] BYREF
  WCHAR v82; // [rsp+150h] [rbp+50h] BYREF
  __int64 v83; // [rsp+152h] [rbp+52h]

  v67 = FileMUIPath;
  v8 = 0LL;
  v9 = 0LL;
  v70[1] = FileMUIPathLength;
  v68 = LanguageLength;
  SourceString = Language;
  v10 = Flags;
  v75 = Enumerator;
  v59[0] = 0LL;
  v69 = 0LL;
  v66 = 0LL;
  v55 = 0;
  v82 = 0;
  v83 = 0LL;
  BaseAddress = 0LL;
  String1 = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v74 = 0LL;
  v62 = 0LL;
  FilePart = 0LL;
  v70[0] = 0LL;
  if ( !FilePath || !Enumerator )
  {
    v11 = -1073741811;
    goto LABEL_174;
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
    v31 = *Enumerator & 0xF;
    v69 = v31;
    v32 = v14 & 0xF;
    v33 = v14 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v32 ^= v33 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v23 = v33 & 0xFFF;
          v59[0] = v23;
        }
        else if ( i == 3 )
        {
          v8 = v33 & 0xFFF;
        }
      }
      else
      {
        v66 = v33 & 0xFFF;
      }
      v33 >>= 12;
    }
    v11 = ProcessRegistryInfo;
    if ( (((unsigned __int16)v33 ^ v32) & 0xFFF) != 0 )
    {
      v11 = -1073741776;
    }
    else
    {
      if ( v8 <= v23 )
      {
        if ( (v66 & 0x20) != 0 )
          v17 = 2;
        else
          v17 = (v66 & 0x40 | 0x20) >> 5;
        v9 = (const WCHAR *)BaseAddress;
        v56 = (v66 & 4) == 0;
        v54 = v31 & 1;
LABEL_29:
        if ( v17 != 1 )
        {
          if ( v17 == 2 )
          {
            if ( !v9 )
            {
              RtlpMUIGetAllInstalledLang(v70[0], &BaseAddress, v79);
              v9 = (const WCHAR *)BaseAddress;
            }
            v38 = 0LL;
            for ( j = v9; v38 < v8; j += v40 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v38;
              v40 = -1LL;
              do
                ++v40;
              while ( j[v40] );
            }
            if ( v8 >= v23 )
              goto LABEL_55;
            v41 = FilePart;
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              v78 = DestinationString;
              if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&v78, v62, v41, v54, v67, &v55) )
                break;
              ++v8;
              v42 = -1LL;
              do
                ++v42;
              while ( j[v42] );
              j += v42 + 1;
            }
            while ( v8 < v23 );
          }
          else
          {
            if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(v62, v77, &String1) )
              v8 = v23;
            v43 = 0;
            if ( !v8 )
            {
              v44 = *v68;
              if ( *v68 )
              {
                if ( SourceString )
                {
                  v45 = SourceString;
                  do
                  {
                    if ( !*v45 )
                      break;
                    ++v45;
                    --v44;
                  }
                  while ( v44 );
                  if ( v44 )
                  {
                    if ( v56 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      if ( RtlCultureNameToLCID(&DestinationString, &Value) )
                        v43 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String, SourceString);
                      if ( RtlUnicodeStringToInteger(&String, 0x10u, &Value) >= 0 )
                      {
                        v46 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        v74 = v46;
                        if ( !v46 )
                          goto LABEL_176;
                        DestinationString.Buffer = (unsigned __int16 *)v46;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v47 = RtlLCIDToCultureName(Value, &DestinationString);
                        v23 = v59[0];
                        v9 = (const WCHAR *)BaseAddress;
                        if ( v47 )
                          v43 = 1;
                      }
                    }
                  }
                }
              }
            }
            v48 = String1;
            for ( k = 0LL; k < v8; v48 += v50 + 1 )
            {
              if ( !v48 )
                break;
              if ( !*v48 )
                break;
              ++k;
              v50 = -1LL;
              do
                ++v50;
              while ( v48[v50] );
            }
            if ( v8 >= v23 )
              goto LABEL_55;
            v51 = FilePart;
            do
            {
              if ( v43 && wcsicmp(v48, DestinationString.Buffer) )
              {
                ++v8;
                v52 = -1LL;
                do
                  ++v52;
                while ( v48[v52] );
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, v48);
                v81 = DestinationString;
                if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&v81, v62, v51, v54, v67, &v55) )
                  break;
                ++v8;
                v52 = -1LL;
                do
                  ++v52;
                while ( v48[v52] );
              }
              v48 += v52 + 1;
            }
            while ( v8 < v23 );
            v9 = (const WCHAR *)BaseAddress;
          }
          goto LABEL_36;
        }
        if ( v9 )
        {
LABEL_31:
          v24 = 0LL;
          for ( m = v9; v24 < v8; m += v37 + 1 )
          {
            if ( !m )
              break;
            if ( !*m )
              break;
            ++v24;
            v37 = -1LL;
            do
              ++v37;
            while ( m[v37] );
          }
          if ( v8 >= v23 )
            goto LABEL_55;
          v26 = FilePart;
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            Source = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(&Source, v62, v26, v54, v67, &v55) )
              break;
            ++v8;
            v30 = -1LL;
            do
              ++v30;
            while ( m[v30] );
            m += v30 + 1;
          }
          while ( v8 < v23 );
LABEL_36:
          if ( v8 < v23 )
          {
            v27 = (WCHAR *)SourceString;
            v28 = (int *)v68;
            if ( SourceString || v68 )
            {
              if ( v56 )
                goto LABEL_39;
              v53 = RtlCultureNameToLCID(&DestinationString, &Lcid);
              if ( v53 )
                v53 = (int)RtlIntegerToUnicode((unsigned __int16)Lcid, 0x10u, -4, (char *)&v82) >= 0;
              RtlInitUnicodeString(&DestinationString, &v82);
              if ( v53 )
              {
LABEL_39:
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
            if ( !v67 || !v27 && v28 )
            {
              v11 = 0;
              goto LABEL_174;
            }
            if ( v55 )
            {
              v11 = -1073741789;
              goto LABEL_174;
            }
            v11 = 0;
LABEL_47:
            *v75 = v69 | (((v8 + 1) ^ v23 ^ v69 ^ v66) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v66 | ((v23 | ((v8 + 1) << 12)) << 24) | 0xCB7000));
LABEL_174:
            if ( !v74 )
              goto LABEL_66;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v74);
LABEL_176:
            v9 = (const WCHAR *)BaseAddress;
LABEL_66:
            if ( v9 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            goto LABEL_68;
          }
LABEL_55:
          v11 = -2147483642;
          goto LABEL_47;
        }
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
        if ( ReturnLength )
        {
          v35 = 0LL;
          if ( is_mul_ok(2uLL, ReturnLength) )
            v35 = 2LL * ReturnLength;
          if ( !v35 )
          {
            v11 = -1073741675;
LABEL_68:
            if ( String1 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
            goto LABEL_70;
          }
          v36 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v35);
          BaseAddress = v36;
          v9 = (const WCHAR *)v36;
          if ( v36 && RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, (PZZWSTR)v36, &ReturnLength) >= 0 )
          {
            v23 = v59[0];
            goto LABEL_31;
          }
          v23 = v59[0];
        }
        v8 = v23;
        goto LABEL_31;
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
  v66 = v10;
  if ( (v10 & 0x20) != 0 )
    v17 = 2;
  else
    v17 = (v10 & 0x40 | 0x20) >> 5;
  v56 = (v16 & 4) == 0;
  if ( (v16 & 0x200) == 0 && ((v16 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(FilePath)) )
  {
    v54 = 1;
    v69 = 1LL;
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
      RtlpMUIGetAllInstalledLang(v70[0], &BaseAddress, v59);
    }
    else
    {
      if ( v17 != 3 )
      {
        v23 = v59[0];
        v9 = (const WCHAR *)BaseAddress;
LABEL_28:
        v8 = 0LL;
        goto LABEL_29;
      }
      v59[0] = 0LL;
      RtlpMUIEnumerateFolder(v13, v59, &String1);
    }
    v23 = v59[0];
    v9 = (const WCHAR *)BaseAddress;
    goto LABEL_28;
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
    BaseAddress = v21;
    v9 = (const WCHAR *)v21;
    if ( !v21 )
    {
      v11 = -1073741801;
LABEL_70:
      v13 = (WCHAR *)v62;
      goto LABEL_12;
    }
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(v19, &NumberOfLanguages, (PZZWSTR)v21, &ReturnLength);
    if ( ThreadPreferredUILanguages < 0 )
    {
      v11 = ThreadPreferredUILanguages;
      goto LABEL_66;
    }
    v23 = NumberOfLanguages;
    v59[0] = NumberOfLanguages;
    goto LABEL_28;
  }
  v11 = -1073741675;
LABEL_12:
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  return v11;
}
