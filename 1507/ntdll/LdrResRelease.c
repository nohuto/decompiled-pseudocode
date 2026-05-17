/*
 * XREFs of LdrResRelease @ 0x180081140
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180043500 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, __int64 a3, __int64 a4)
{
  int v4; // r14d
  wchar_t *v7; // rbx
  unsigned int v8; // ebx
  int v10; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+60h] [rbp+8h] BYREF
  wchar_t *v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = a3;
  *(_DWORD *)&DestinationString.Length = 2621478;
  DestinationString.Buffer = L"LdrResRelease Enter";
  v12 = 2490404;
  v13 = L"LdrResRelease Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&DestinationString, MEMORY[0x7FFE0384]);
  if ( !String2 )
    return 3221225485LL;
  v15 = 0LL;
  if ( (v4 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v14) )
        return 3221225485LL;
    }
    else
    {
      v14 = 0;
    }
    LOWORD(SourceString) = v14;
  }
  if ( (v4 & 0xC00) == 0 )
  {
    v15 = String2;
LABEL_8:
    v7 = v15;
    LdrUnloadAlternateResourceModuleEx((__int64)v15, (char *)(unsigned __int16)SourceString, a3, a4);
    if ( (v4 & 0xC00) != 0 && v7 )
      NtUnmapViewOfSection(-1LL);
    goto LABEL_9;
  }
  v10 = LdrRemoveLoadAsDataTable(String2, &v15, 0LL, v4);
  v8 = v10;
  if ( v10 >= 0 )
    goto LABEL_8;
  if ( v10 == -1073740024 || v10 == -1073741511 )
LABEL_9:
    v8 = 0;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v12, MEMORY[0x7FFE0384]);
  return v8;
}
