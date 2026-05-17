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

__int64 __fastcall RtlGetFileMUIPath(
        unsigned int a1,
        __int64 a2,
        const WCHAR *a3,
        int *a4,
        void *a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v8; // rsi
  const WCHAR *v9; // r14
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 Heap; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  char v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int16 v18; // r8
  unsigned __int64 v19; // rax
  int v20; // edi
  __int16 v21; // ax
  __int64 v22; // r8
  WCHAR *v23; // rax
  int ThreadPreferredUILanguages; // eax
  __int64 v25; // r8
  WCHAR *v26; // rax
  unsigned __int64 v27; // rcx
  const WCHAR *k; // rbx
  __int64 v29; // rax
  int v30; // r12d
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  const WCHAR *i; // rbx
  __int64 v34; // rax
  int v35; // r12d
  __int64 v36; // rax
  char v37; // r13
  int v38; // eax
  PCWSTR v39; // rcx
  unsigned __int16 *v40; // rax
  char v41; // al
  wchar_t *v42; // rbx
  unsigned __int64 j; // rcx
  __int64 v44; // rax
  int v45; // r14d
  __int64 v46; // rax
  WCHAR *v47; // r12
  int *v48; // rdi
  char v49; // bl
  unsigned __int64 Length; // rbx
  char v52; // [rsp+40h] [rbp-C0h]
  _BYTE v53[15]; // [rsp+41h] [rbp-BFh] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+70h] [rbp-90h] BYREF
  int v57[2]; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v59; // [rsp+88h] [rbp-78h] BYREF
  int v60[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h]
  void *v62; // [rsp+A0h] [rbp-60h]
  int *v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h] BYREF
  int v66[2]; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+C8h] [rbp-38h] BYREF
  int v68; // [rsp+CCh] [rbp-34h]
  PCWSTR v69; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v70; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v71; // [rsp+E0h] [rbp-20h]
  int v72[4]; // [rsp+F0h] [rbp-10h] BYREF
  char v73[16]; // [rsp+100h] [rbp+0h] BYREF
  int v74[4]; // [rsp+110h] [rbp+10h] BYREF
  char v75[8]; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v76; // [rsp+128h] [rbp+28h] BYREF
  int v77[4]; // [rsp+140h] [rbp+40h] BYREF
  WCHAR v78; // [rsp+150h] [rbp+50h] BYREF
  __int64 v79; // [rsp+152h] [rbp+52h]

  v62 = a5;
  v8 = 0LL;
  v9 = 0LL;
  *(_QWORD *)v66 = a6;
  v63 = a4;
  v69 = a3;
  v10 = a1;
  v71 = a7;
  v54[0] = 0LL;
  v64 = 0LL;
  v61 = 0LL;
  v53[0] = 0;
  v78 = 0;
  v79 = 0LL;
  *(_QWORD *)&v53[7] = 0LL;
  String1 = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v70 = 0LL;
  *(_QWORD *)v57 = 0LL;
  *(_QWORD *)v60 = 0LL;
  v65 = 0LL;
  if ( !a2 || !a7 )
  {
    v11 = -1073741811;
    goto LABEL_162;
  }
  v68 = RtlpCreateProcessRegistryInfo(&v65, a2, (__int64)a3);
  v11 = v68;
  if ( v68 < 0 )
    return v11;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
  *(_QWORD *)v57 = Heap;
  v13 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  if ( (unsigned int)RtlGetFullPathName_U(a2, 520LL, Heap, v60) - 1 > 0x206
    || !*(_QWORD *)v60
    || *(_QWORD *)v60 <= v13
    || *(_QWORD *)v60 >= v13 + 520 )
  {
    goto LABEL_160;
  }
  *(_WORD *)(*(_QWORD *)v60 - 2LL) = 0;
  v14 = *a7;
  if ( *a7 )
  {
    v15 = v54[0];
    v16 = v14 & 0xF;
    v17 = 0LL;
    v64 = *a7 & 0xF;
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
          v54[0] = v15;
        }
        else if ( v17 == 3 )
        {
          v8 = v19 & 0xFFF;
        }
      }
      else
      {
        v61 = v19 & 0xFFF;
      }
      v19 >>= 12;
      ++v17;
    }
    while ( v17 < 4 );
    v11 = v68;
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
    if ( (v61 & 0x20) != 0 )
      v20 = 2;
    else
      v20 = (unsigned __int64)(v61 & 0x40 | 0x20) >> 5;
    v9 = *(const WCHAR **)&v53[7];
    v53[1] = (v61 & 4) == 0;
    v52 = v16 & 1;
LABEL_57:
    if ( v20 != 1 )
    {
      if ( v20 == 2 )
      {
        if ( !v9 )
        {
          RtlpMUIGetAllInstalledLang(v65, &v53[7], v75);
          v9 = *(const WCHAR **)&v53[7];
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
        v35 = v60[0];
        do
        {
          if ( !i )
            break;
          if ( !*i )
            break;
          RtlInitUnicodeString(&DestinationString, i);
          *(UNICODE_STRING *)v74 = DestinationString;
          if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath((int)v74, v57[0], v35, v66[0], v52, v62, (__int64)v53) )
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
        if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(*(_QWORD *)v57, v73, &String1) )
          v8 = v15;
        v37 = 0;
        if ( !v8 )
        {
          v38 = *v63;
          if ( *v63 )
          {
            if ( v69 )
            {
              v39 = v69;
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
                if ( v53[1] )
                {
                  RtlInitUnicodeString(&DestinationString, v69);
                  if ( RtlCultureNameToLCID(&DestinationString.Length, (int *)&v59) )
                    v37 = 1;
                }
                else
                {
                  RtlInitUnicodeString(&v76, v69);
                  if ( (int)RtlUnicodeStringToInteger(&v76, 16LL, &v59) >= 0 )
                  {
                    v40 = (unsigned __int16 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
                    v70 = v40;
                    if ( !v40 )
                      goto LABEL_164;
                    DestinationString.Buffer = v40;
                    *(_DWORD *)&DestinationString.Length = 11141120;
                    v41 = RtlLCIDToCultureName(v59, (__int64)&DestinationString);
                    v15 = v54[0];
                    v9 = *(const WCHAR **)&v53[7];
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
        v45 = v60[0];
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
            *(UNICODE_STRING *)v77 = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath((int)v77, v57[0], v45, v66[0], v52, v62, (__int64)v53) )
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
        v9 = *(const WCHAR **)&v53[7];
      }
      goto LABEL_136;
    }
    if ( !v9 )
    {
      *(_DWORD *)&v53[3] = 0;
      RtlGetThreadPreferredUILanguages(48, (__int64)&v56, 0LL, &v53[3]);
      if ( *(_DWORD *)&v53[3] )
      {
        v25 = 0LL;
        if ( is_mul_ok(2uLL, *(unsigned int *)&v53[3]) )
          v25 = 2LL * *(unsigned int *)&v53[3];
        if ( !v25 )
        {
          v11 = -1073741675;
LABEL_167:
          if ( String1 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String1);
          goto LABEL_169;
        }
        v26 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v25);
        *(_QWORD *)&v53[7] = v26;
        v9 = v26;
        if ( v26 && (int)RtlGetThreadPreferredUILanguages(48, (__int64)&v56, v26, &v53[3]) >= 0 )
        {
          v15 = v54[0];
          goto LABEL_69;
        }
        v15 = v54[0];
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
    v30 = v60[0];
    do
    {
      if ( !*k )
        break;
      RtlInitUnicodeString(&DestinationString, k);
      *(UNICODE_STRING *)v72 = DestinationString;
      if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath((int)v72, v57[0], v30, v66[0], v52, v62, (__int64)v53) )
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
      v47 = (WCHAR *)v69;
      v48 = v63;
      if ( v69 || v63 )
      {
        if ( v53[1] )
          goto LABEL_143;
        v49 = RtlCultureNameToLCID(&DestinationString.Length, &v67);
        if ( v49 )
          v49 = (int)RtlIntegerToUnicode((unsigned __int16)v67, 0x10u, -4, (char *)&v78) >= 0;
        RtlInitUnicodeString(&DestinationString, &v78);
        if ( v49 )
        {
LABEL_143:
          if ( v47 )
          {
            if ( v48 )
            {
              if ( *v48 <= (unsigned int)(DestinationString.Length >> 1) )
              {
                v53[0] = 1;
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
      if ( !v62 || !v47 && v48 )
      {
        v11 = 0;
        goto LABEL_162;
      }
      if ( v53[0] )
      {
        v11 = -1073741789;
LABEL_162:
        if ( !v70 )
          goto LABEL_165;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v70);
LABEL_164:
        v9 = *(const WCHAR **)&v53[7];
LABEL_165:
        if ( v9 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int64 *)&v53[7]);
        goto LABEL_167;
      }
      v11 = 0;
LABEL_158:
      *v71 = v64 | (((v8 + 1) ^ v15 ^ v64 ^ v61) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                 * (v61 | ((v15 | ((v8 + 1) << 12)) << 24) | 0xCB7000));
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
  v61 = v10;
  if ( (v10 & 0x20) != 0 )
    v20 = 2;
  else
    v20 = (unsigned __int64)(v10 & 0x40 | 0x20) >> 5;
  v53[1] = (v21 & 4) == 0;
  if ( (v21 & 0x200) == 0 && ((v21 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(a2)) )
  {
    v52 = 1;
    v64 = 1LL;
  }
  else
  {
    v52 = 0;
  }
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v54[0] = 0LL;
      RtlpMUIGetAllInstalledLang(v65, &v53[7], v54);
    }
    else
    {
      if ( v20 != 3 )
      {
        v15 = v54[0];
        v9 = *(const WCHAR **)&v53[7];
LABEL_56:
        v8 = 0LL;
        goto LABEL_57;
      }
      v54[0] = 0LL;
      RtlpMUIEnumerateFolder(v13, v54, &String1);
    }
    v15 = v54[0];
    v9 = *(const WCHAR **)&v53[7];
    goto LABEL_56;
  }
  *(_DWORD *)&v53[3] = 0;
  RtlGetThreadPreferredUILanguages(48, (__int64)&v56, 0LL, &v53[3]);
  if ( !*(_DWORD *)&v53[3] )
    goto LABEL_170;
  v22 = 0LL;
  if ( is_mul_ok(2uLL, *(unsigned int *)&v53[3]) )
    v22 = 2LL * *(unsigned int *)&v53[3];
  if ( !v22 )
  {
    v11 = -1073741675;
    goto LABEL_170;
  }
  v23 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v22);
  *(_QWORD *)&v53[7] = v23;
  v9 = v23;
  if ( v23 )
  {
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48, (__int64)&v56, v23, &v53[3]);
    if ( ThreadPreferredUILanguages < 0 )
    {
      v11 = ThreadPreferredUILanguages;
      goto LABEL_165;
    }
    v15 = v56;
    v54[0] = v56;
    goto LABEL_56;
  }
  v11 = -1073741801;
LABEL_169:
  v13 = *(_QWORD *)v57;
LABEL_170:
  if ( v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  return v11;
}
