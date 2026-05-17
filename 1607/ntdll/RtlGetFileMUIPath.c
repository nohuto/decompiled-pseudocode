/*
 * XREFs of RtlGetFileMUIPath @ 0x180069AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     RtlIntegerToUnicode @ 0x180014BB0 (RtlIntegerToUnicode.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4B4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetFullPathName_U @ 0x18006A930 (RtlGetFullPathName_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlUnicodeStringToInteger @ 0x18006AEB0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098360 (_wcsicmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800E75F0 (RtlpMUIGetAllInstalledLang.c)
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
  unsigned __int64 v20; // r8
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
  unsigned __int64 v31; // rcx
  const WCHAR *k; // rbx
  __int64 v33; // rax
  int v34; // r12d
  char v35; // r13
  int v36; // eax
  wchar_t *v37; // rbx
  unsigned __int64 j; // rcx
  __int64 v39; // rax
  int v40; // r14d
  __int64 v41; // rax
  wchar_t *v42; // rax
  unsigned __int64 v43; // r8
  WCHAR *v44; // rax
  PCWSTR v45; // rcx
  char v46; // bl
  __int64 v47; // r10
  unsigned __int16 v48; // r8
  unsigned __int64 v49; // rax
  unsigned __int64 i; // r9
  __int64 v51; // rax
  char v52; // al
  __int64 v53; // rax
  char v54; // [rsp+40h] [rbp-C0h]
  _BYTE v55[15]; // [rsp+41h] [rbp-BFh] BYREF
  _QWORD v56[2]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-90h] BYREF
  int v59[2]; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v61; // [rsp+88h] [rbp-78h] BYREF
  int v62[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-50h] BYREF
  int v68[2]; // [rsp+B8h] [rbp-48h]
  int *v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  PCWSTR SourceString; // [rsp+D0h] [rbp-30h]
  wchar_t *v72; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v73; // [rsp+E0h] [rbp-20h]
  char v74[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v75[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v76[4]; // [rsp+100h] [rbp+0h] BYREF
  int v77[4]; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v78; // [rsp+120h] [rbp+20h] BYREF
  int v79[4]; // [rsp+130h] [rbp+30h] BYREF
  WCHAR v80; // [rsp+140h] [rbp+40h] BYREF
  __int64 v81; // [rsp+142h] [rbp+42h]

  v63 = a5;
  v8 = 0LL;
  v9 = 0LL;
  *(_QWORD *)v68 = a6;
  v69 = a4;
  SourceString = a3;
  v10 = a1;
  v73 = a7;
  v56[0] = 0LL;
  v70 = 0LL;
  v64 = 0LL;
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
    goto LABEL_63;
  }
  v65 = RtlpCreateProcessRegistryInfo(&v67);
  v11 = v65;
  if ( v65 < 0 )
    return v11;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
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
    v47 = *a7 & 0xF;
    v70 = v47;
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
          v56[0] = v23;
        }
        else if ( i == 3 )
        {
          v8 = v49 & 0xFFF;
        }
      }
      else
      {
        v64 = v49 & 0xFFF;
      }
      v49 >>= 12;
    }
    v11 = v65;
    if ( (((unsigned __int16)v49 ^ v48) & 0xFFF) != 0 )
    {
      v11 = -1073741776;
    }
    else
    {
      if ( v8 <= v23 )
      {
        if ( (v64 & 0x20) != 0 )
          v17 = 2;
        else
          v17 = (unsigned __int64)(v64 & 0x40 | 0x20) >> 5;
        v9 = *(const WCHAR **)&v55[7];
        v55[1] = (v64 & 4) == 0;
        v54 = v47 & 1;
LABEL_32:
        if ( v17 != 1 )
        {
          if ( v17 != 2 )
          {
            if ( !String1 && !(unsigned __int8)RtlpMUIEnumerateFolder(*(_QWORD *)v59, v75, &String1) )
              v8 = v23;
            v35 = 0;
            if ( !v8 )
            {
              v36 = *v69;
              if ( *v69 )
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
                    if ( v55[1] )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      if ( RtlCultureNameToLCID(&DestinationString.Length, (int *)&v61) )
                        v35 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&v78, SourceString);
                      if ( (int)RtlUnicodeStringToInteger(&v78, 16LL, &v61) >= 0 )
                      {
                        v42 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        v72 = v42;
                        if ( !v42 )
                        {
LABEL_102:
                          v9 = *(const WCHAR **)&v55[7];
                          goto LABEL_103;
                        }
                        DestinationString.Buffer = v42;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v52 = RtlLCIDToCultureName(v61, (__int64)&DestinationString);
                        v23 = v56[0];
                        v9 = *(const WCHAR **)&v55[7];
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
              v40 = v62[0];
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
                  *(UNICODE_STRING *)v79 = DestinationString;
                  if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath(
                                          (int)v79,
                                          v59[0],
                                          v40,
                                          v68[0],
                                          v54,
                                          v63,
                                          (__int64)v55) )
                  {
LABEL_99:
                    v9 = *(const WCHAR **)&v55[7];
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
            RtlpMUIGetAllInstalledLang(v67, &v55[7], v74);
            v9 = *(const WCHAR **)&v55[7];
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
          v34 = v62[0];
          do
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            RtlInitUnicodeString(&DestinationString, k);
            *(UNICODE_STRING *)v77 = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath((int)v77, v59[0], v34, v68[0], v54, v63, (__int64)v55) )
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
            v28 = v69;
            if ( SourceString || v69 )
            {
              if ( v55[1] )
                goto LABEL_42;
              v46 = RtlCultureNameToLCID(&DestinationString.Length, &v66);
              if ( v46 )
                v46 = (int)RtlIntegerToUnicode((unsigned __int16)v66, 0x10u, -4, (char *)&v80) >= 0;
              RtlInitUnicodeString(&DestinationString, &v80);
              if ( v46 )
              {
LABEL_42:
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
            if ( !v63 || !v27 && v28 )
            {
              v11 = 0;
              goto LABEL_63;
            }
            if ( v55[0] )
            {
              v11 = -1073741789;
              goto LABEL_63;
            }
            v11 = 0;
LABEL_50:
            *v73 = v70 | (((v8 + 1) ^ v23 ^ v70 ^ v64) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v64 | ((v23 | ((v8 + 1) << 12)) << 24) | 0xCB7000));
LABEL_63:
            if ( !v72 )
              goto LABEL_103;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v72);
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
          v26 = v62[0];
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            *(UNICODE_STRING *)v76 = DestinationString;
            if ( (unsigned __int8)RtlpGetMUIRedirectedFilePath((int)v76, v59[0], v26, v68[0], v54, v63, (__int64)v55) )
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
        *(_DWORD *)&v55[3] = 0;
        RtlGetThreadPreferredUILanguages(48, (__int64)&v58, 0LL, &v55[3]);
        if ( *(_DWORD *)&v55[3] )
        {
          v43 = 0LL;
          if ( is_mul_ok(2uLL, *(unsigned int *)&v55[3]) )
            v43 = 2LL * *(unsigned int *)&v55[3];
          if ( !v43 )
          {
            v11 = -1073741675;
LABEL_105:
            if ( String1 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String1);
            goto LABEL_107;
          }
          v44 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v43);
          *(_QWORD *)&v55[7] = v44;
          v9 = v44;
          if ( v44 && (int)RtlGetThreadPreferredUILanguages(48, (__int64)&v58, v44, &v55[3]) >= 0 )
          {
            v23 = v56[0];
            goto LABEL_34;
          }
          v23 = v56[0];
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
  v64 = v10;
  if ( (v10 & 0x20) != 0 )
    v17 = 2;
  else
    v17 = (unsigned __int64)(v10 & 0x40 | 0x20) >> 5;
  v55[1] = (v16 & 4) == 0;
  if ( (v16 & 0x200) == 0 && ((v16 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(a2)) )
  {
    v54 = 1;
    v70 = 1LL;
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
LABEL_31:
        v8 = 0LL;
        goto LABEL_32;
      }
      v56[0] = 0LL;
      RtlpMUIEnumerateFolder(v13, v56, &String1);
    }
    v23 = v56[0];
    v9 = *(const WCHAR **)&v55[7];
    goto LABEL_31;
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
LABEL_107:
      v13 = *(_QWORD *)v59;
      goto LABEL_12;
    }
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(v19, (__int64)&v58, v21, &v55[3]);
    if ( ThreadPreferredUILanguages < 0 )
    {
      v11 = ThreadPreferredUILanguages;
LABEL_103:
      if ( v9 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int64 *)&v55[7]);
      goto LABEL_105;
    }
    v23 = v58;
    v56[0] = v58;
    goto LABEL_31;
  }
  v11 = -1073741675;
LABEL_12:
  if ( v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  return v11;
}
