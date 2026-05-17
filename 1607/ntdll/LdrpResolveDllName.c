/*
 * XREFs of LdrpResolveDllName @ 0x18000FA94
 * Callers:
 *     LdrpAppCompatRedirect @ 0x18000E064 (LdrpAppCompatRedirect.c)
 *     LdrpMapDllFullPath @ 0x18000E3A0 (LdrpMapDllFullPath.c)
 *     LdrpSearchPath @ 0x18000EBF0 (LdrpSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123F8 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     LdrpFreeUnicodeString @ 0x18000E8FC (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000EF04 (LdrpGetFullPath.c)
 *     LdrpAllocateUnicodeString @ 0x18000FD28 (LdrpAllocateUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A6BC0 (ZwQueryAttributesFile.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpResolveDllName(__int128 *a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, int a6)
{
  __int128 *v9; // r14
  int FullPath; // eax
  __int128 v11; // xmm0
  int UnicodeString; // ebx
  __int64 v13; // rsi
  const void *v14; // r14
  int v15; // eax
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // xmm1_8
  _WORD *i; // rdx
  _WORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int128 v23; // xmm0
  void *Src[2]; // [rsp+40h] [rbp-89h] BYREF
  __int128 *v25; // [rsp+50h] [rbp-79h] BYREF
  __int128 v26; // [rsp+58h] [rbp-71h] BYREF
  int v27; // [rsp+68h] [rbp-61h] BYREF
  __int64 v28; // [rsp+70h] [rbp-59h]
  __int64 v29; // [rsp+78h] [rbp-51h]
  int v30; // [rsp+80h] [rbp-49h]
  __int128 v31; // [rsp+88h] [rbp-41h]
  _BYTE v32[40]; // [rsp+98h] [rbp-31h] BYREF

  v9 = a1;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1671,
      (unsigned int)"LdrpResolveDllName",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  FullPath = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v11 = *v9;
  }
  else
  {
    FullPath = LdrpGetFullPath((__int64)v9, a2);
    v11 = *(_OWORD *)a2;
  }
  UnicodeString = FullPath;
  *(_OWORD *)Src = v11;
  if ( FullPath >= 0 )
  {
    if ( !a5
      || (UnicodeString = LdrpFindLoadedDllByName(0, (unsigned int)Src, a6, a5, 0LL), UnicodeString == -1073741515) )
    {
      if ( (a6 & 0x200) != 0 || (v20 = (_WORD *)(a2 + 16), a2 + 16 == *(_QWORD *)(a2 + 8)) )
      {
        v13 = LOWORD(Src[0]);
        v14 = Src[1];
        UnicodeString = LdrpAllocateUnicodeString(Src, LOWORD(Src[0]));
        if ( UnicodeString >= 0 )
        {
          memmove(Src[1], v14, v13 + 2);
          LOWORD(Src[0]) = v13;
        }
        *(_WORD *)a2 = 0;
        if ( UnicodeString < 0 )
          goto LABEL_24;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = v20;
        *(_DWORD *)a2 = 0x1000000;
        *v20 = 0;
      }
      LOBYTE(a1) = 1;
      UnicodeString = RtlDosPathNameToRelativeNtPathName(
                        (_DWORD)a1,
                        0,
                        (unsigned int)Src,
                        a2,
                        (__int64)&v26,
                        (__int64)&v25,
                        0LL,
                        0LL);
      if ( UnicodeString < 0 )
        goto LABEL_40;
      if ( v25 == &v26 )
      {
        v22 = *(_QWORD *)(a2 + 8);
        if ( a2 + 16 != v22 )
          NtdllpFreeStringRoutine(v22);
        v23 = v26;
        *(_DWORD *)a2 = 0x1000000;
        *(_WORD *)(a2 + 16) = 0;
        *(_OWORD *)a2 = v23;
      }
      v15 = 64;
      v27 = 48;
      v28 = 0LL;
      if ( !LdrpUseImpersonatedDeviceMap )
        v15 = 2112;
      v29 = a2;
      v30 = v15;
      v31 = 0LL;
      UnicodeString = ZwQueryAttributesFile(&v27, v32);
      if ( UnicodeString < 0 )
      {
LABEL_40:
        if ( (unsigned int)(UnicodeString + 1073741809) <= 0x2C
          && (v21 = 0x1C3000000011LL, _bittest64(&v21, UnicodeString + 1073741809))
          || UnicodeString == -2147483632
          || UnicodeString == -1073741661 )
        {
          UnicodeString = -1073741515;
        }
        LdrpFreeUnicodeString((__int64)Src);
      }
      else
      {
        v16 = _mm_cvtsi128_si32(*(__m128i *)Src);
        v17 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
        *a4 = *(_OWORD *)Src;
        for ( i = (_WORD *)(v16 + v17 - 2); (unsigned __int64)i >= v17; --i )
        {
          if ( *i == 92 || *i == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx(a3, i);
      }
    }
  }
LABEL_24:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1837,
      (unsigned int)"LdrpResolveDllName",
      4,
      (__int64)"Status: 0x%08lx\n",
      UnicodeString);
  return (unsigned int)UnicodeString;
}
