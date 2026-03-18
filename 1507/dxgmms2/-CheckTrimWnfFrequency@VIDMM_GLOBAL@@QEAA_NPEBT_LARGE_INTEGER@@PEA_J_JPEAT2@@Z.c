/*
 * XREFs of ?CheckTrimWnfFrequency@VIDMM_GLOBAL@@QEAA_NPEBT_LARGE_INTEGER@@PEA_J_JPEAT2@@Z @ 0x1C0033648
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0033278 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::CheckTrimWnfFrequency(
        VIDMM_GLOBAL *this,
        const union _LARGE_INTEGER *a2,
        __int64 *a3,
        LONGLONG a4,
        union _LARGE_INTEGER *a5)
{
  LONGLONG v5; // rcx
  LONGLONG v6; // r9
  LONGLONG QuadPart; // rcx

  if ( *a3 && (v5 = a2->QuadPart - *a3, a4 > v5) )
  {
    if ( a5 )
    {
      QuadPart = v5 - a4;
      if ( a5->QuadPart > QuadPart )
        QuadPart = a5->QuadPart;
      a5->QuadPart = QuadPart;
    }
    return 0;
  }
  else
  {
    *a3 = a2->QuadPart;
    if ( a5 )
    {
      v6 = -a4;
      if ( a5->QuadPart > v6 )
        v6 = a5->QuadPart;
      a5->QuadPart = v6;
    }
    return 1;
  }
}
