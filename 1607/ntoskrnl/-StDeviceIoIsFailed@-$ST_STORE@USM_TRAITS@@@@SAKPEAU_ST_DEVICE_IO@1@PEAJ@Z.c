/*
 * XREFs of ?StDeviceIoIsFailed@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z @ 0x14021DA78
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(int *a1, _DWORD *a2)
{
  __int64 v3; // rax
  int v4; // eax

  if ( (a1[5] & 1) == 0 )
    return 0LL;
  if ( a2 )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 4);
    else
      v4 = *a1;
    *a2 = v4;
  }
  return 1LL;
}
