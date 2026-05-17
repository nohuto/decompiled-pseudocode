/*
 * XREFs of EtwpProviderArrivalCallback @ 0x180079858
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x1800797D0 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     EtwpFindDebugId @ 0x180002004 (EtwpFindDebugId.c)
 *     EtwpAddProviderToSession @ 0x180002188 (EtwpAddProviderToSession.c)
 *     RtlPcToFileHeader @ 0x180037670 (RtlPcToFileHeader.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     EtwpAddWinRtProviderToSession @ 0x180079954 (EtwpAddWinRtProviderToSession.c)
 *     LdrGetDllFullName @ 0x180079B30 (LdrGetDllFullName.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  unsigned int DebugId; // ebx
  NTSTATUS DllFullName; // eax
  PVOID BaseOfImage; // [rsp+20h] [rbp-248h] BYREF
  const void *v9[3]; // [rsp+28h] [rbp-240h] BYREF
  char v10; // [rsp+40h] [rbp-228h] BYREF

  DebugId = 0;
  RtlPcToFileHeader(*(PVOID *)(a2 + 48), &BaseOfImage);
  if ( !BaseOfImage )
    return 87;
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) != 2 )
  {
    if ( *(__int16 *)(a2 + 98) >= 0 )
      return DebugId;
    v9[1] = &v10;
    WORD1(v9[0]) = 260;
    DllFullName = LdrGetDllFullName(BaseOfImage, v9);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpAddWinRtProviderToSession(a1, v9, a2 + 32);
  }
  DebugId = EtwpFindDebugId((__int64)BaseOfImage, 0x3FFFLL, v9, (unsigned int *)&BaseOfImage);
  if ( !DebugId )
    return (unsigned int)EtwpAddProviderToSession(a1, v9[0], (unsigned int)BaseOfImage);
  return DebugId;
}
