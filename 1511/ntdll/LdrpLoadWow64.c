/*
 * XREFs of LdrpLoadWow64 @ 0x18004ED50
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     LdrGetProcedureAddress @ 0x18004EE30 (LdrGetProcedureAddress.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  NTSTATUS v1; // ebx
  int v2; // edi
  PANSI_STRING *i; // rbx
  NTSTATUS ProcedureAddress; // esi
  char v6; // cl
  char v7; // al
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-248h] BYREF
  char v9; // [rsp+50h] [rbp-238h] BYREF

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (unsigned __int16 *)&v9;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  v1 = LdrLoadDll(0LL, 0LL, &Destination, &Wow64Handle);
  if ( v1 < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2924,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n");
      v6 = LdrpDebugFlags;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)v1;
  }
  else
  {
    v2 = 0;
    for ( i = (PANSI_STRING *)&off_180106F90; ; i += 2 )
    {
      ProcedureAddress = LdrGetProcedureAddress(Wow64Handle, *i, 0, (PVOID *)i[1]);
      if ( ProcedureAddress < 0 )
        break;
      if ( (unsigned int)++v2 >= 5 )
        return (unsigned int)ProcedureAddress;
    }
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2945,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n");
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)ProcedureAddress;
  }
}
