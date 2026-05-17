/*
 * XREFs of ResCOpenRegistryKey @ 0x18000EC0C
 * Callers:
 *     _ResCGetRegistryFlags @ 0x18000EB40 (_ResCGetRegistryFlags.c)
 *     ResCGetRegistryLatestIndex @ 0x1800F8FB0 (ResCGetRegistryLatestIndex.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000F3AC (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall ResCOpenRegistryKey(_QWORD *a1, _DWORD *a2, const unsigned __int16 *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h]
  _BYTE *v11; // [rsp+30h] [rbp-D0h]
  int v12; // [rsp+38h] [rbp-C8h]
  __int128 v13; // [rsp+40h] [rbp-C0h]
  _BYTE v14[16]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v15[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+80h] [rbp-80h]
  wchar_t v18; // [rsp+84h] [rbp-7Ch]
  _BYTE v19[484]; // [rsp+86h] [rbp-7Ah] BYREF

  v17 = *(_DWORD *)L"e\\";
  *(_OWORD *)v15 = *(_OWORD *)L"\\Registry\\Machine\\";
  v16 = *(_OWORD *)L"y\\Machine\\";
  v18 = aRegistryMachin_11[18];
  v6 = 0;
  memset(v19, 0, sizeof(v19));
  if ( a1 && a2 && a3 && StringCchCatW(v15, 0x105uLL, a3) >= 0 && (int)RtlInitUnicodeStringEx(v14, v15) >= 0 )
  {
    v9 = 48;
    v11 = v14;
    v10 = 0LL;
    v12 = 64;
    *a1 = 0LL;
    v13 = 0LL;
    v7 = NtOpenKey(a1, 131097LL, &v9);
    *a2 = 2;
    return v7 >= 0;
  }
  return v6;
}
