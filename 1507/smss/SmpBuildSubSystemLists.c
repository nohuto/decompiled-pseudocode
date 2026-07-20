/*
 * XREFs of SmpBuildSubSystemLists @ 0x140009D40
 * Callers:
 *     <none>
 * Callees:
 *     SmpFindRegistryValueEx @ 0x14000A644 (SmpFindRegistryValueEx.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000A874 (SmpDeallocSavedRegistryEntry.c)
 */

__int64 __fastcall SmpBuildSubSystemLists(
        const wchar_t *a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  bool v7; // r12
  UNICODE_STRING *RegistryValue; // rax
  UNICODE_STRING *v9; // rbx
  __int64 v10; // rcx
  UNICODE_STRING **Buffer; // rax
  USHORT Length; // bp
  __int64 **v13; // rax
  __int64 **v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  v7 = _wcsicmp(a1, L"Required") == 0;
  while ( *a3 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    RegistryValue = (UNICODE_STRING *)SmpFindRegistryValueEx(a6 + 2, &DestinationString);
    v9 = RegistryValue;
    if ( RegistryValue )
    {
      v10 = *(_QWORD *)&RegistryValue->Length;
      Buffer = (UNICODE_STRING **)RegistryValue->Buffer;
      if ( *(UNICODE_STRING **)(v10 + 8) != v9 || *Buffer != v9 )
        __fastfail(3u);
      *Buffer = (UNICODE_STRING *)v10;
      *(_QWORD *)(v10 + 8) = Buffer;
      Length = v9[1].Length;
      if ( !v9[2].Length || (RtlInitUnicodeString(&String2, L"Posix"), RtlEqualUnicodeString(v9 + 1, &String2, 0)) )
      {
        SmpDeallocSavedRegistryEntry(v9);
      }
      else if ( v7 )
      {
        v13 = (__int64 **)qword_140023998;
        *(_QWORD *)&v9->Length = &SmpSubSystemsRequired;
        v9->Buffer = (PWSTR)v13;
        if ( *v13 != &SmpSubSystemsRequired )
          __fastfail(3u);
        *v13 = (__int64 *)v9;
        qword_140023998 = (__int64)v9;
        *a6 += 2;
        a6[1] += v9[2].Length + v9[1].Length + 4;
      }
      else
      {
        v15 = (__int64 **)qword_1400239A8;
        *(_QWORD *)&v9->Length = &SmpSubSystemsToDefer;
        v9->Buffer = (PWSTR)v15;
        if ( *v15 != &SmpSubSystemsToDefer )
          __fastfail(3u);
        *v15 = (__int64 *)v9;
        qword_1400239A8 = (__int64)v9;
      }
      a3 = (const WCHAR *)((char *)a3 + Length + 2);
    }
    else
    {
      while ( *a3++ )
        ;
    }
  }
  return 0LL;
}
