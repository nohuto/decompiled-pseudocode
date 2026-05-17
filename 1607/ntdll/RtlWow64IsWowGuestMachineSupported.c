/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x180083E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A8DD0 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800AADB0 (_alloca_probe.c)
 */

__int64 __fastcall RtlWow64IsWowGuestMachineSupported(unsigned __int16 a1, char *a2)
{
  char v2; // bl
  int v5; // r8d
  int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  _DWORD v15[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v16; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 0;
  if ( a1 == 0x8664 )
  {
LABEL_10:
    *a2 = v2;
    return (unsigned int)v5;
  }
  v16 = 0LL;
  v6 = NtQuerySystemInformationEx(181LL, &v16, 8LL, 0LL, 0, v15);
  v5 = v6;
  if ( v6 == -1073741789 )
  {
    v7 = v15[0] + 15LL;
    if ( v7 <= v15[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v5 = NtQuerySystemInformationEx(181LL, &v16, 8LL, v15, v15[0], v15);
    if ( v5 >= 0 )
    {
      v11 = v15[0];
      LODWORD(v12) = 0;
      v13 = LOWORD(v15[0]);
      if ( LOWORD(v15[0]) )
      {
        while ( v13 != a1 || (v11 & 0x60000) != 0x20000 )
        {
          v12 = (unsigned int)(v12 + 1);
          v11 = v15[v12];
          v13 = (unsigned __int16)v11;
          if ( !(_WORD)v11 )
            goto LABEL_10;
        }
        v2 = 1;
      }
      goto LABEL_10;
    }
  }
  else if ( v6 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
