/*
 * XREFs of StEtaIoComplete @ 0x14021FDE4
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall StEtaIoComplete(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  LARGE_INTEGER result; // rax
  __int64 i; // rbx
  __int64 v7; // rcx

  result.QuadPart = a3;
  for ( i = *(_QWORD *)(a1 + 8LL * a3 + 16); *(_DWORD *)i < a2; i += 32LL )
    ;
  if ( a4 == *(_QWORD *)(i + 24) )
  {
    result = KeQueryPerformanceCounter(0LL);
    v7 = 7LL * *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 24) |= 1uLL;
    *(_QWORD *)(i + 8) = (unsigned __int64)(result.QuadPart + v7 - *(_QWORD *)(i + 16)) >> 3;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
