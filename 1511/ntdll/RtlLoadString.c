/*
 * XREFs of RtlLoadString @ 0x1800700A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLocaleNameToLcid @ 0x18001C1C0 (RtlLocaleNameToLcid.c)
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrpAccessResourceData @ 0x18007031C (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlLoadString(
        PVOID DllHandle,
        ULONG StringId,
        PCWSTR StringLanguage,
        ULONG Flags,
        PCWSTR *ReturnString,
        PUSHORT ReturnStringLen,
        PWSTR ReturnLanguageName,
        PULONG ReturnLanguageLen)
{
  unsigned int v8; // r10d
  unsigned __int16 v9; // r12
  bool v11; // di
  NTSTATUS v13; // edx
  unsigned __int16 v14; // cx
  int v15; // ebx
  USHORT v16; // r8
  DWORD lcid[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  PCWSTR *v20; // [rsp+58h] [rbp-60h]
  _QWORD Src[4]; // [rsp+60h] [rbp-58h] BYREF

  v8 = (unsigned int)StringLanguage;
  v9 = StringId;
  v20 = ReturnString;
  v18 = 0LL;
  v11 = (Flags & 1) == 0;
  if ( DllHandle && ReturnString && (Flags & 0xFFFFFFFE) == 0 )
  {
    if ( (Flags & 1) != 0 && (ReturnLanguageName || ReturnLanguageLen) )
      return -1073741637;
    if ( (unsigned int)StringLanguage > 0xFFFF )
    {
      if ( *StringLanguage )
      {
        if ( RtlLocaleNameToLcid(StringLanguage, lcid, 3u) < 0 )
          return -1073741811;
        v8 = LOWORD(lcid[0]);
        lcid[0] = LOWORD(lcid[0]);
      }
      else
      {
        v8 = 0;
        lcid[0] = 0;
      }
    }
    Src[0] = 6LL;
    Src[1] = (v9 >> 4) + 1;
    Src[2] = v8;
    Src[3] = v9;
    *(_QWORD *)lcid = 0LL;
    if ( v11 )
    {
      v13 = LdrResSearchResource(
              (WCHAR *)DllHandle,
              Src,
              4u,
              1u,
              (__int64)&v18,
              (SIZE_T *)lcid,
              ReturnLanguageName,
              (__int64)ReturnLanguageLen);
      if ( v13 >= 0 && *(_QWORD *)lcid > 0xFFFFuLL )
        v13 = -1073741701;
    }
    else
    {
      v13 = LdrpSearchResourceSection_U(DllHandle, (__int64)Src, 4LL, 1u, (__int64)&v19);
      if ( v13 < 0 )
        return v13;
      v13 = LdrpAccessResourceData(DllHandle);
    }
    if ( v13 >= 0 && v18 )
    {
      v14 = 0;
      v15 = v9 & 0xF;
      *(_QWORD *)lcid >>= 1;
      do
      {
        v16 = *(_WORD *)(v18 + 2LL * v14);
        v14 += v16 + 1;
        if ( v11 && (unsigned __int64)v14 > *(_QWORD *)lcid )
          return -1073741701;
        --v15;
      }
      while ( v15 >= 0 );
      if ( v14 && v16 )
        v14 -= v16;
      *v20 = (PCWSTR)(v18 + 2LL * v14);
      if ( ReturnStringLen )
        *ReturnStringLen = v16;
    }
    return v13;
  }
  return -1073741811;
}
