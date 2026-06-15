/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14000A7A8
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140006800 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x14000A6E0 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 */

_QWORD *__fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *v5; // r8
  __int64 v6; // rcx
  _QWORD *result; // rax

  v2 = *a1;
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)a1);
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  if ( v5 )
    v5[2] = *a2;
  a1[4] = v6;
  v5[1] = 0LL;
  *v5 = v2;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8LL) = v5;
  else
    a1[1] = v5;
  result = v5;
  *a1 = v5;
  return result;
}
