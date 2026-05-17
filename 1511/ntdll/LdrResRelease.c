/*
 * XREFs of LdrResRelease @ 0x180003E40
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180005CB0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     LdrRemoveLoadAsDataTable @ 0x180076F50 (LdrRemoveLoadAsDataTable.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, __int16 a3)
{
  wchar_t *v6; // rbx
  unsigned int v7; // ebx
  int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  wchar_t *v14; // [rsp+78h] [rbp+20h]

  *(_DWORD *)&DestinationString.Length = 2621478;
  DestinationString.Buffer = L"LdrResRelease Enter";
  v11 = 2490404;
  v12 = L"LdrResRelease Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&DestinationString, MEMORY[0x7FFE0384]);
  if ( !String2 )
    return 3221225485LL;
  v14 = 0LL;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v13) )
        return 3221225485LL;
    }
    else
    {
      v13 = 0;
    }
    LOWORD(SourceString) = v13;
  }
  if ( (a3 & 0xC00) == 0 )
  {
    v14 = String2;
LABEL_8:
    v6 = v14;
    LdrUnloadAlternateResourceModuleEx(v14, (unsigned __int16)SourceString);
    if ( (a3 & 0xC00) != 0 && v6 )
      NtUnmapViewOfSection(-1LL, (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_9;
  }
  v9 = LdrRemoveLoadAsDataTable(String2);
  v7 = v9;
  if ( v9 >= 0 )
    goto LABEL_8;
  if ( v9 == -1073740024 || v9 == -1073741511 )
LABEL_9:
    v7 = 0;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v11, MEMORY[0x7FFE0384]);
  return v7;
}
