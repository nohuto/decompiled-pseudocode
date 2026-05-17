/*
 * XREFs of RtlWow64GetProcessMachines @ 0x18006E1D0
 * Callers:
 *     LdrpGetModuleName @ 0x18006D714 (LdrpGetModuleName.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A8DD0 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800AADB0 (_alloca_probe.c)
 */

__int64 __fastcall RtlWow64GetProcessMachines(__int64 a1, _WORD *a2, _WORD *a3)
{
  int v5; // r9d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  int v10; // ecx
  __int16 v11; // r10
  __int16 v12; // r8
  __int64 v13; // r11
  _DWORD *v14; // rdx
  _DWORD v16[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF

  v17 = a1;
  v5 = NtQuerySystemInformationEx(181LL, &v17, 8LL, 0LL, 0, v16);
  if ( v5 == -1073741789 )
  {
    v6 = v16[0] + 15LL;
    if ( v6 <= v16[0] )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = alloca(v7);
    v9 = alloca(v7);
    v5 = NtQuerySystemInformationEx(181LL, &v17, 8LL, v16, v16[0], v16);
    if ( v5 >= 0 )
    {
      v10 = v16[0];
      v11 = 0;
      v12 = 0;
      LODWORD(v13) = 0;
      if ( LOWORD(v16[0]) )
      {
        v14 = v16;
        do
        {
          if ( (v10 & 0xC0000) == 0x80000 )
            v11 = *(_WORD *)v14;
          if ( (v10 & 0x40000) != 0 )
            v12 = *(_WORD *)v14;
          v13 = (unsigned int)(v13 + 1);
          v14 = &v16[v13];
          v10 = *v14;
        }
        while ( (unsigned __int16)*v14 );
      }
      *a2 = v11;
      if ( a3 )
        *a3 = v12;
    }
  }
  return (unsigned int)v5;
}
