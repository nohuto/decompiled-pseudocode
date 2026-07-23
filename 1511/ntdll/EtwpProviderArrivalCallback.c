/*
 * XREFs of EtwpProviderArrivalCallback @ 0x1800034E4
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x18000345C (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     EtwpAddWinRtProviderToSession @ 0x1800035B8 (EtwpAddWinRtProviderToSession.c)
 *     RtlPcToFileHeader @ 0x180037810 (RtlPcToFileHeader.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     LdrGetDllFullName @ 0x180078250 (LdrGetDllFullName.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     EtwpAddProviderToSession @ 0x1800F48A0 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x1800F4984 (EtwpFindDebugId.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  unsigned int DebugId; // ebx
  int DllFullName; // eax
  PVOID BaseOfImage; // [rsp+20h] [rbp-248h] BYREF
  _UNICODE_STRING FullDllName; // [rsp+28h] [rbp-240h] BYREF
  char v10; // [rsp+40h] [rbp-228h] BYREF

  DebugId = 0;
  RtlPcToFileHeader(*(PVOID *)(a2 + 48), &BaseOfImage);
  if ( !BaseOfImage )
    return 87;
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) == 2 )
  {
    DebugId = EtwpFindDebugId(BaseOfImage, 0x3FFFLL, &FullDllName, &BaseOfImage);
    if ( DebugId )
      return DebugId;
    return (unsigned int)EtwpAddProviderToSession(a1, *(_QWORD *)&FullDllName.Length, (unsigned int)BaseOfImage);
  }
  if ( *(__int16 *)(a2 + 98) < 0 )
  {
    FullDllName.Buffer = (unsigned __int16 *)&v10;
    FullDllName.MaximumLength = 260;
    DllFullName = LdrGetDllFullName(BaseOfImage, &FullDllName);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpAddWinRtProviderToSession(a1, &FullDllName, a2 + 32);
  }
  return DebugId;
}
