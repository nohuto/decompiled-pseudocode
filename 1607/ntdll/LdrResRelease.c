/*
 * XREFs of LdrResRelease @ 0x180089970
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C360 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CE00 (LdrRemoveLoadAsDataTable.c)
 *     RtlCultureNameToLCID @ 0x180043F70 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, int a3)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebx
  int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  wchar_t *v14; // [rsp+78h] [rbp+20h] BYREF

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
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v13) )
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
    v6 = (unsigned __int64)v14;
    LdrUnloadAlternateResourceModuleEx((__int64)v14, (__int16)SourceString);
    if ( (a3 & 0xC00) != 0 && v6 )
      NtUnmapViewOfSection(-1LL, v6 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_9;
  }
  v9 = LdrRemoveLoadAsDataTable(String2, &v14, 0LL, a3);
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
