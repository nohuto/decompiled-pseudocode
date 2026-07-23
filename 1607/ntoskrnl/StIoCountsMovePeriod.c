/*
 * XREFs of StIoCountsMovePeriod @ 0x14021FF34
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401189D0 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StIoCountsMovePeriod(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2 - v2;
  if ( v3 >= 0x23C34600 )
  {
    v4 = (v3 + 599999999) / 0x23C34600;
    *(_QWORD *)(a1 + 16) = v2 + 600000000LL * (unsigned int)v4;
  }
  else
  {
    LODWORD(v4) = 1;
    *(_QWORD *)(a1 + 16) = v2 + 600000000;
  }
  *(_DWORD *)(a1 + 8) += v4;
  result = a1 + 4 * (5LL * (*(_DWORD *)(a1 + 8) & 0x3F) + 6);
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)a1 = result;
  return result;
}
