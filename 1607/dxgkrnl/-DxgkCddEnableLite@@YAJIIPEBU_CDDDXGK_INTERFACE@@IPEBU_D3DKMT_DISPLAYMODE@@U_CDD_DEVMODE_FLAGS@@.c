/*
 * XREFs of ?DxgkCddEnableLite@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@U_CDD_DEVMODE_FLAGS@@E@Z @ 0x1C01554E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DxgkCddEnableLite(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = qword_1C0056840;
  if ( (qword_1C0056840 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      Template_q(qword_1C0056840, &EventProfilerEnter, a3, 3040);
      v3 = qword_1C0056840;
    }
    if ( (v3 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v3, &EventProfilerExit, a3, 3040);
  }
  return 0LL;
}
