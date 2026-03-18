/*
 * XREFs of MiCheckForConflictingVad @ 0x140010030
 * Callers:
 *     MiCheckForConflictingVadExistence @ 0x140010018 (MiCheckForConflictingVadExistence.c)
 *     MmGetImageBase @ 0x140466584 (MmGetImageBase.c)
 *     MiUpdateVadBits @ 0x140468060 (MiUpdateVadBits.c)
 * Callees:
 *     MiVadCompareVpnRange @ 0x1400100A4 (MiVadCompareVpnRange.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiCheckForConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD **)(a1 + 1544);
  v6[0] = a2 >> 12;
  v6[1] = a3 >> 12;
  if ( !v3 )
    return 0LL;
  do
  {
    v4 = MiVadCompareVpnRange(v6, v3);
    if ( v4 < 0 )
    {
      v3 = (_QWORD *)*v3;
    }
    else
    {
      if ( v4 <= 0 )
        break;
      v3 = (_QWORD *)v3[1];
    }
  }
  while ( v3 );
  if ( v3 )
    return v3;
  else
    return 0LL;
}
