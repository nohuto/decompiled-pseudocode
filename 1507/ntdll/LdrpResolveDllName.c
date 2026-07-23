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

__int64 __fastcall LdrpResolveDllName(
        _UNICODE_STRING *a1,
        _UNICODE_STRING *a2,
        _UNICODE_STRING *a3,
        _OWORD *a4,
        __int64 a5,
        __int16 a6)
{
  int FullPath; // eax
  _UNICODE_STRING v11; // xmm0
  int UnicodeString; // ebx
  _UNICODE_STRING *v13; // rax
  __int64 v14; // rsi
  const void *v15; // r14
  ULONG v16; // eax
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // xmm1_8
  const WCHAR *i; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _UNICODE_STRING *Buffer; // rcx
  _UNICODE_STRING v24; // xmm0
  void *Src[2]; // [rsp+40h] [rbp-89h] BYREF
  _UNICODE_STRING *v26; // [rsp+50h] [rbp-79h] BYREF
  _UNICODE_STRING v27; // [rsp+58h] [rbp-71h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-61h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+98h] [rbp-31h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1660,
      (unsigned int)"LdrpResolveDllName",
      3,
      (__int64)"DLL name: %wZ\n",
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
  *(_UNICODE_STRING *)Src = v11;
  if ( FullPath >= 0 )
  {
    if ( !a5
      || (UnicodeString = LdrpFindLoadedDllByName(0LL, (PUNICODE_STRING)Src, a6, a5, 0LL), UnicodeString == -1073741515) )
    {
      if ( (a6 & 0x200) != 0 || (v13 = a2 + 1, &a2[1] == (_UNICODE_STRING *)a2->Buffer) )
      {
        v14 = LOWORD(Src[0]);
        v15 = Src[1];
        UnicodeString = LdrpAllocateUnicodeString(Src, LOWORD(Src[0]));
        if ( UnicodeString >= 0 )
        {
          memmove(Src[1], v15, v14 + 2);
          LOWORD(Src[0]) = v14;
        }
        a2->Length = 0;
        if ( UnicodeString < 0 )
          goto LABEL_25;
      }
      else
      {
        a2->Buffer = &v13->Length;
        *(_DWORD *)&a2->Length = 0x1000000;
        v13->Length = 0;
      }
      UnicodeString = RtlDosPathNameToRelativeNtPathName(
                        1,
                        0,
                        (_UNICODE_STRING *)Src,
                        &a2->Length,
                        &v27.Length,
                        &v26,
                        0LL,
                        0LL);
      if ( UnicodeString < 0 )
        goto LABEL_29;
      if ( v26 == &v27 )
      {
        Buffer = (_UNICODE_STRING *)a2->Buffer;
        if ( &a2[1] != Buffer )
          NtdllpFreeStringRoutine(Buffer);
        v24 = v27;
        *(_DWORD *)&a2->Length = 0x1000000;
        a2[1].Length = 0;
        *a2 = v24;
      }
      v16 = 64;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      if ( !LdrpUseImpersonatedDeviceMap )
        v16 = 2112;
      ObjectAttributes.ObjectName = a2;
      ObjectAttributes.Attributes = v16;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      UnicodeString = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
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
        for ( i = (const WCHAR *)(v17 + v18 - 2); (unsigned __int64)i >= v18; --i )
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
LABEL_25:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1826,
      (unsigned int)"LdrpResolveDllName",
      4,
      (__int64)"Status: 0x%08lx\n",
      UnicodeString);
  return (unsigned int)UnicodeString;
}
