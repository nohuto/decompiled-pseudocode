/*
 * XREFs of EtwpProviderArrivalCallback @ 0x180079848
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x1800797C0 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     EtwpFindDebugId @ 0x180002004 (EtwpFindDebugId.c)
 *     EtwpAddProviderToSession @ 0x180002188 (EtwpAddProviderToSession.c)
 *     RtlPcToFileHeader @ 0x180037660 (RtlPcToFileHeader.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     EtwpAddWinRtProviderToSession @ 0x180079944 (EtwpAddWinRtProviderToSession.c)
 *     LdrGetDllFullName @ 0x180079B20 (LdrGetDllFullName.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
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
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) != 2 )
  {
    if ( *(__int16 *)(a2 + 98) >= 0 )
      return DebugId;
    FullDllName.Buffer = (wchar_t *)&v10;
    FullDllName.MaximumLength = 260;
    DllFullName = LdrGetDllFullName(BaseOfImage, &FullDllName);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpAddWinRtProviderToSession(a1, &FullDllName, a2 + 32);
  }
  DebugId = EtwpFindDebugId((char *)BaseOfImage, 0x3FFFLL, (char **)&FullDllName, (unsigned int *)&BaseOfImage);
  if ( !DebugId )
    return (unsigned int)EtwpAddProviderToSession(a1, *(const void **)&FullDllName.Length, (unsigned int)BaseOfImage);
  return DebugId;
}
