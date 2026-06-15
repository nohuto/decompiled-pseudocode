/*
 * XREFs of ?reset@?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAXXZ @ 0x180005D98
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009920 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CPdcTimerActivation>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
