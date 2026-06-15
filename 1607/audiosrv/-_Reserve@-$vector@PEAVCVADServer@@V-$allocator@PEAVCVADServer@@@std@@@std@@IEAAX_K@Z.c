/*
 * XREFs of ?_Reserve@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z @ 0x180004E88
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180004F8C (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     ?_Reallocate@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z @ 0x180004DE8 (-_Reallocate@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<CVADServer *>::_Reserve(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  v1 = a1[1];
  result = (a1[2] - v1) >> 3;
  if ( !result )
  {
    v3 = (v1 - *a1) >> 3;
    if ( v3 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = v3 + 1;
    v5 = (__int64)(a1[2] - *a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v5 >> 1) < v5 )
      v6 = 0LL;
    else
      v6 = (v5 >> 1) + v5;
    if ( v6 < v4 )
      v6 = v4;
    return (__int64)std::vector<CVADServer *>::_Reallocate((__int64)a1, v6, v4);
  }
  return result;
}
