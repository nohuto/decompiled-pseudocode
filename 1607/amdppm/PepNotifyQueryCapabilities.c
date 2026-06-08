/*
 * XREFs of PepNotifyQueryCapabilities @ 0x1C001CB04
 * Callers:
 *     InitPep @ 0x1C001C8C8 (InitPep.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4, _BYTE *a5)
{
  int v9; // edx
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+28h] [rbp-40h]

  v12 = 0;
  v11 = 0LL;
  BYTE2(v12) = *(_BYTE *)(a1 + 66);
  v9 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1064), 1LL, &v11);
  if ( v9 >= 0 )
  {
    *a2 = HIDWORD(v11);
    *a3 = v11;
    *a4 = v12;
    *a5 = BYTE1(v12);
    *a2 &= -((*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0);
    if ( (*(_QWORD *)(a1 + 248) & 0x1000000000LL) == 0 )
    {
      *a3 = 0;
      *a4 = 0;
    }
    *a5 &= -((*(_DWORD *)(a1 + 248) & 0x400) != 0LL);
  }
  return (unsigned int)v9;
}
