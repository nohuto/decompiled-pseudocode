/*
 * XREFs of NtGdiGetPerBandInfo @ 0x1C02681D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C0265C04 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 */

__int64 __fastcall NtGdiGetPerBandInfo(HDC a1, _PERBANDINFO *a2)
{
  unsigned int PerBandInfo; // r8d
  _BYTE *v4; // rdx
  _PERBANDINFO v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *a2;
  }
  PerBandInfo = GreGetPerBandInfo(a1, &v6);
  if ( PerBandInfo - 1 <= 0xFFFFFFFD )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v4 = (_BYTE *)W32UserProbeAddress;
    *v4 = *v4;
    v4[19] = v4[19];
    *a2 = v6;
  }
  return PerBandInfo;
}
