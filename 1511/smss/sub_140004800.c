/*
 * XREFs of sub_140004800 @ 0x140004800
 * Callers:
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 *     sub_140003D54 @ 0x140003D54 (sub_140003D54.c)
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_140004D90 @ 0x140004D90 (sub_140004D90.c)
 * Callees:
 *     sub_1400031C0 @ 0x1400031C0 (sub_1400031C0.c)
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140004C90 @ 0x140004C90 (sub_140004C90.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140012B6C @ 0x140012B6C (sub_140012B6C.c)
 */

__int64 __fastcall sub_140004800(HANDLE *BaseAddress, int a2)
{
  unsigned int v2; // esi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)BaseAddress & 2) == 0 )
  {
    _m_prefetchw(BaseAddress);
    v5 = *(_DWORD *)BaseAddress;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)BaseAddress, v5 | 2, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 2) == 0 )
    {
      v7 = *((unsigned int *)BaseAddress + 2);
      sub_140004890(BaseAddress);
      if ( a2 )
      {
        if ( (unsigned int)sub_1400031C0(v7) != -1
          && !*(_DWORD *)(qword_14001FCC8 + 40LL * (unsigned int)sub_1400031C0(v7) + 4) )
        {
          v9 = (unsigned __int64)BaseAddress[2];
          RtlInitUnicodeString(&DestinationString, L"initial session process or");
          Parameters[0] = (unsigned __int64)&DestinationString;
          Parameters[1] = *(int *)(v9 + 4);
          Parameters[2] = v7;
          Parameters[3] = v9;
          sub_140012B6C(Parameters, 1u, 4u);
          __debugbreak();
        }
        NtTerminateProcess(BaseAddress[6], -1073741823);
        v2 = sub_140004C90((unsigned int)v7);
      }
    }
  }
  NtWaitForSingleObject(BaseAddress[6], 0, 0LL);
  return v2;
}
