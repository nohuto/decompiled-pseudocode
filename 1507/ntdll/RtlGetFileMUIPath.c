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
  __int16 v16; // ax
  int v17; // edi
  int v18; // ecx
  int v19; // esi
  __int64 v20; // r8
  WCHAR *v21; // rax
  int ThreadPreferredUILanguages; // eax
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  const WCHAR *m; // rbx
  int v26; // r12d
  WCHAR *v27; // r12
  int *v28; // rdi
  unsigned __int64 Length; // rbx
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned __int16 v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int64 i; // r9
  __int64 v35; // r8
  WCHAR *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  const WCHAR *j; // rbx
  __int64 v40; // rax
  int v41; // r12d
  __int64 v42; // rax
  char v43; // r13
  int v44; // eax
  PCWSTR v45; // rcx
  unsigned __int16 *v46; // rax
  char v47; // al
  wchar_t *v48; // rbx
  unsigned __int64 k; // rcx
  __int64 v50; // rax
  int v51; // r14d
  __int64 v52; // rax
  char v53; // bl
  char v54; // [rsp+40h] [rbp-C0h]
  _BYTE v55[15]; // [rsp+41h] [rbp-BFh] BYREF
  _QWORD v56[2]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-90h] BYREF
  int v59[2]; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v61; // [rsp+88h] [rbp-78h] BYREF
  int v62[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h]
  void *v64; // [rsp+A0h] [rbp-60h]
  int *v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h] BYREF
  int v68[2]; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+C8h] [rbp-38h] BYREF
  int v70; // [rsp+CCh] [rbp-34h]
  PCWSTR SourceString; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v72; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v73; // [rsp+E0h] [rbp-20h]
  int v74[4]; // [rsp+F0h] [rbp-10h] BYREF
  char v75[16]; // [rsp+100h] [rbp+0h] BYREF
  int v76[4]; // [rsp+110h] [rbp+10h] BYREF
  char v77[8]; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v78; // [rsp+128h] [rbp+28h] BYREF
  int v79[4]; // [rsp+140h] [rbp+40h] BYREF
  WCHAR v80; // [rsp+150h] [rbp+50h] BYREF
  __int64 v81; // [rsp+152h] [rbp+52h]

  v64 = a5;
  v8 = 0LL;
  v9 = 0LL;
  *(_QWORD *)v68 = a6;
  v65 = a4;
  SourceString = a3;
  v10 = a1;
  v73 = a7;
  v56[0] = 0LL;
  v66 = 0LL;
  v63 = 0LL;
  v55[0] = 0;
  v80 = 0;
  v81 = 0LL;
  *(_QWORD *)&v55[7] = 0LL;
  String1 = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v72 = 0LL;
  *(_QWORD *)v59 = 0LL;
  *(_QWORD *)v62 = 0LL;
  v67 = 0LL;
  if ( !a2 || !a7 )
  {
    v11 = -1073741811;
    goto LABEL_174;
  }
  v70 = RtlpCreateProcessRegistryInfo(&v67);
  v11 = v70;
  if ( v70 < 0 )
    return v11;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
  *(_QWORD *)v59 = Heap;
  v13 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  if ( (unsigned int)RtlGetFullPathName_U(a2, 520LL, Heap, v62) - 1 > 0x206
    || !*(_QWORD *)v62
    || *(_QWORD *)v62 <= v13
    || *(_QWORD *)v62 >= v13 + 520 )
  {
    goto LABEL_11;
  }
  *(_WORD *)(*(_QWORD *)v62 - 2LL) = 0;
  v14 = *a7;
  if ( *a7 )
  {
    v23 = v56[0];
    v31 = *a7 & 0xF;
    v66 = v31;
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
          v56[0] = v23;
        }
        else if ( i == 3 )
        {
          v8 = v33 & 0xFFF;
        }
      }
      else
      {
        v63 = v33 & 0xFFF;
      }
      v33 >>= 12;
    }
    v11 = v70;
    if ( (((unsigned __int16)v33 ^ v32) & 0xFFF) != 0 )
    {
      v11 = -1073741776;
    }
    else
    {
      if ( v8 <= v23 )
      {
        if ( (v63 & 0x20) != 0 )
          v17 = 2;
        else
          v17 = (unsigned __int64)(v63 & 0x40 | 0x20) >> 5;
        v9 = *(const WCHAR **)&v55[7];
        v55[1] = (v63 & 4) == 0;
        v54 = v31 & 1;
LABEL_29:
        if ( v17 != 1 )
        {
          if ( v17 == 2 )
          {
            if ( !v9 )
            {
              RtlpMUIGetAllInstalledLang(v67, &v55[7], v77);
              v9 = *(const WCHAR **)&v55[7];
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
            v41 = v62[0];
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              *(UNICODE_STRING *)v76 = DestinationString;
              if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath((int)v76, v59[0], v41, v68[0], v54, v64, (__int64)v55) )
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
            if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(*(_QWORD *)v59, v75, &String1) )
              v8 = v23;
            v43 = 0;
            if ( !v8 )
            {
              v44 = *v65;
              if ( *v65 )
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
                    if ( v55[1] )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      if ( RtlCultureNameToLCID(&DestinationString.Length, &v61) )
                        v43 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&v78, SourceString);
                      if ( (int)RtlUnicodeStringToInteger(&v78, 16LL, &v61) >= 0 )
                      {
                        v46 = (unsigned __int16 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
                        v72 = v46;
                        if ( !v46 )
                          goto LABEL_176;
                        DestinationString.Buffer = v46;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v47 = RtlLCIDToCultureName(v61, (__int64)&DestinationString);
                        v23 = v56[0];
                        v9 = *(const WCHAR **)&v55[7];
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
            v51 = v62[0];
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
                *(UNICODE_STRING *)v79 = DestinationString;
                if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(
                                        (int)v79,
                                        v59[0],
                                        v51,
                                        v68[0],
                                        v54,
                                        v64,
                                        (__int64)v55) )
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
            v9 = *(const WCHAR **)&v55[7];
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
          v26 = v62[0];
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            *(UNICODE_STRING *)v74 = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath((int)v74, v59[0], v26, v68[0], v54, v64, (__int64)v55) )
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
            v28 = v65;
            if ( SourceString || v65 )
            {
              if ( v55[1] )
                goto LABEL_39;
              v53 = RtlCultureNameToLCID(&DestinationString.Length, &v69);
              if ( v53 )
                v53 = (int)RtlIntegerToUnicode((unsigned __int16)v69, 0x10u, -4, (char *)&v80) >= 0;
              RtlInitUnicodeString(&DestinationString, &v80);
              if ( v53 )
              {
LABEL_39:
                if ( v27 )
                {
                  if ( v28 )
                  {
                    if ( *v28 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      v55[0] = 1;
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
            if ( !v64 || !v27 && v28 )
            {
              v11 = 0;
              goto LABEL_174;
            }
            if ( v55[0] )
            {
              v11 = -1073741789;
              goto LABEL_174;
            }
            v11 = 0;
LABEL_47:
            *v73 = v66 | (((v8 + 1) ^ v23 ^ v66 ^ v63) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v63 | ((v23 | ((v8 + 1) << 12)) << 24) | 0xCB7000));
LABEL_174:
            if ( !v72 )
              goto LABEL_66;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v72);
LABEL_176:
            v9 = *(const WCHAR **)&v55[7];
LABEL_66:
            if ( v9 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int64 *)&v55[7]);
            goto LABEL_68;
          }
LABEL_55:
          v11 = -2147483642;
          goto LABEL_47;
        }
        *(_DWORD *)&v55[3] = 0;
        RtlGetThreadPreferredUILanguages(48, (__int64)&v58, 0LL, &v55[3]);
        if ( *(_DWORD *)&v55[3] )
        {
          v35 = 0LL;
          if ( is_mul_ok(2uLL, *(unsigned int *)&v55[3]) )
            v35 = 2LL * *(unsigned int *)&v55[3];
          if ( !v35 )
          {
            v11 = -1073741675;
LABEL_68:
            if ( String1 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String1);
            goto LABEL_70;
          }
          v36 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v35);
          *(_QWORD *)&v55[7] = v36;
          v9 = v36;
          if ( v36 && (int)RtlGetThreadPreferredUILanguages(48, (__int64)&v58, v36, &v55[3]) >= 0 )
          {
            v23 = v56[0];
            goto LABEL_31;
          }
          v23 = v56[0];
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
  v63 = v10;
  if ( (v10 & 0x20) != 0 )
    v17 = 2;
  else
    v17 = (unsigned __int64)(v10 & 0x40 | 0x20) >> 5;
  v55[1] = (v16 & 4) == 0;
  if ( (v16 & 0x200) == 0 && ((v16 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(a2)) )
  {
    v54 = 1;
    v66 = 1LL;
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
      v56[0] = 0LL;
      RtlpMUIGetAllInstalledLang(v67, &v55[7], v56);
    }
    else
    {
      if ( v17 != 3 )
      {
        v23 = v56[0];
        v9 = *(const WCHAR **)&v55[7];
LABEL_28:
        v8 = 0LL;
        goto LABEL_29;
      }
      v56[0] = 0LL;
      RtlpMUIEnumerateFolder(v13, v56, &String1);
    }
    v23 = v56[0];
    v9 = *(const WCHAR **)&v55[7];
    goto LABEL_28;
  }
  v19 = v18 + 48;
  *(_DWORD *)&v55[3] = 0;
  RtlGetThreadPreferredUILanguages(v18 + 48, (__int64)&v58, 0LL, &v55[3]);
  if ( !*(_DWORD *)&v55[3] )
    goto LABEL_12;
  v20 = 0LL;
  if ( is_mul_ok(2uLL, *(unsigned int *)&v55[3]) )
    v20 = 2LL * *(unsigned int *)&v55[3];
  if ( v20 )
  {
    v21 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v19 - 40, v20);
    *(_QWORD *)&v55[7] = v21;
    v9 = v21;
    if ( !v21 )
    {
      v11 = -1073741801;
LABEL_70:
      v13 = *(_QWORD *)v59;
      goto LABEL_12;
    }
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(v19, (__int64)&v58, v21, &v55[3]);
    if ( ThreadPreferredUILanguages < 0 )
    {
      v11 = ThreadPreferredUILanguages;
      goto LABEL_66;
    }
    v23 = v58;
    v56[0] = v58;
    goto LABEL_28;
  }
  v11 = -1073741675;
LABEL_12:
  if ( v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  return v11;
}
