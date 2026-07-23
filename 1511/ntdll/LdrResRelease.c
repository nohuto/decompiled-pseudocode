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

__int64 __fastcall LdrResRelease(PVOID InitModule, PCWSTR SourceString, ULONG Flags)
{
  unsigned __int64 v6; // rbx
  unsigned __int32 v7; // ebx
  NTSTATUS v9; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-20h]
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF
  PVOID DllHandle; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)&DestinationString.Length = 2621478;
  DestinationString.Buffer = L"LdrResRelease Enter";
  v11 = 2490404;
  v12 = L"LdrResRelease Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&DestinationString, MEMORY[0x7FFE0384]);
  if ( !InitModule )
    return 3221225485LL;
  DllHandle = 0LL;
  if ( (Flags & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return 3221225485LL;
    }
    else
    {
      Lcid = 0;
    }
    LOWORD(SourceString) = Lcid;
  }
  if ( (Flags & 0xC00) == 0 )
  {
    DllHandle = InitModule;
LABEL_8:
    v6 = (unsigned __int64)DllHandle;
    LdrUnloadAlternateResourceModuleEx(DllHandle, (unsigned __int16)SourceString);
    if ( (Flags & 0xC00) != 0 && v6 )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(v6 & 0xFFFFFFFFFFFFFFFCuLL));
    goto LABEL_9;
  }
  v9 = LdrRemoveLoadAsDataTable(InitModule, &DllHandle, 0LL, Flags);
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
