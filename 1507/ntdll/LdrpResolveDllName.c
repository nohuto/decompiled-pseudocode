/*
 * XREFs of LdrpResolveDllName @ 0x18003F930
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800187EC (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180042CB4 (LdrpMapDllFullPath.c)
 *     LdrpAppCompatRedirect @ 0x180042DFC (LdrpAppCompatRedirect.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     LdrpAllocateUnicodeString @ 0x18003FBC4 (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18003FC30 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x180093CD0 (ZwQueryAttributesFile.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpResolveDllName(__int128 *a1, __int128 *a2, __int64 a3, _OWORD *a4, __int64 a5, __int16 a6)
{
  int FullPath; // eax
  __int128 v11; // xmm0
  int UnicodeString; // ebx
  _WORD *v13; // rax
  __int64 v14; // rsi
  const void *v15; // r14
  int v16; // eax
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // xmm1_8
  _WORD *i; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  void *Src[2]; // [rsp+40h] [rbp-89h] BYREF
  __int128 *v26; // [rsp+50h] [rbp-79h] BYREF
  __int128 v27; // [rsp+58h] [rbp-71h] BYREF
  int v28; // [rsp+68h] [rbp-61h] BYREF
  __int64 v29; // [rsp+70h] [rbp-59h]
  __int128 *v30; // [rsp+78h] [rbp-51h]
  int v31; // [rsp+80h] [rbp-49h]
  __int128 v32; // [rsp+88h] [rbp-41h]
  _BYTE v33[40]; // [rsp+98h] [rbp-31h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1660,
      (unsigned int)"LdrpResolveDllName",
      3,
      "DLL name: %wZ\n",
      a1);
  FullPath = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v11 = *a1;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    v11 = *a2;
  }
  UnicodeString = FullPath;
  *(_OWORD *)Src = v11;
  if ( FullPath >= 0 )
  {
    if ( !a5
      || (UnicodeString = LdrpFindLoadedDllByName(0LL, (unsigned __int16 *)Src, a6, a5, 0LL),
          UnicodeString == -1073741515) )
    {
      if ( (a6 & 0x200) != 0 || (v13 = a2 + 1, a2 + 1 == *((__int128 **)a2 + 1)) )
      {
        v14 = LOWORD(Src[0]);
        v15 = Src[1];
        UnicodeString = LdrpAllocateUnicodeString(Src, LOWORD(Src[0]));
        if ( UnicodeString >= 0 )
        {
          memmove(Src[1], v15, v14 + 2);
          LOWORD(Src[0]) = v14;
        }
        *(_WORD *)a2 = 0;
        if ( UnicodeString < 0 )
          goto LABEL_25;
      }
      else
      {
        *((_QWORD *)a2 + 1) = v13;
        *(_DWORD *)a2 = 0x1000000;
        *v13 = 0;
      }
      UnicodeString = RtlDosPathNameToRelativeNtPathName(
                        1,
                        0,
                        (__int128 *)Src,
                        (unsigned __int16 *)a2,
                        (unsigned __int16 *)&v27,
                        &v26,
                        0LL,
                        0LL);
      if ( UnicodeString < 0 )
        goto LABEL_29;
      if ( v26 == &v27 )
      {
        v23 = *((_QWORD *)a2 + 1);
        if ( a2 + 1 != (__int128 *)v23 )
          NtdllpFreeStringRoutine(v23);
        v24 = v27;
        *(_DWORD *)a2 = 0x1000000;
        *((_WORD *)a2 + 8) = 0;
        *a2 = v24;
      }
      v16 = 64;
      v28 = 48;
      v29 = 0LL;
      if ( !LdrpUseImpersonatedDeviceMap )
        v16 = 2112;
      v30 = a2;
      v31 = v16;
      v32 = 0LL;
      UnicodeString = ZwQueryAttributesFile(&v28, v33);
      if ( UnicodeString < 0 )
      {
LABEL_29:
        v21 = (unsigned int)(UnicodeString + 1073741809);
        if ( (unsigned int)v21 <= 0x2C && (v22 = 0x1C3000000011LL, _bittest64(&v22, v21))
          || UnicodeString == -2147483632
          || UnicodeString == -1073741661 )
        {
          UnicodeString = -1073741515;
        }
        LdrpFreeUnicodeString(Src);
      }
      else
      {
        v17 = _mm_cvtsi128_si32(*(__m128i *)Src);
        v18 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
        *a4 = *(_OWORD *)Src;
        for ( i = (_WORD *)(v17 + v18 - 2); (unsigned __int64)i >= v18; --i )
        {
          if ( *i == 92 || *i == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx(a3, (__int64)i);
      }
    }
  }
LABEL_25:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1826,
      (unsigned int)"LdrpResolveDllName",
      4,
      "Status: 0x%08lx\n",
      UnicodeString);
  return (unsigned int)UnicodeString;
}
