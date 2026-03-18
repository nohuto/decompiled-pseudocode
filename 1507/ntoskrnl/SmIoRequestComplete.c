/*
 * XREFs of SmIoRequestComplete @ 0x14013F03C
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     <none>
 */

LONG __fastcall SmIoRequestComplete(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a4 + 8);
  v5 = *a2 & 7;
  if ( !v5 )
  {
    v6 = 0LL;
    if ( *(int *)a4 < 0 )
      *(_DWORD *)a4 = -1073741670;
    if ( (v4 & 1) != 0 )
      v6 = 1LL;
    goto LABEL_6;
  }
  if ( v5 == 2 )
  {
    v6 = (unsigned __int16)v4;
LABEL_6:
    *(_QWORD *)(a4 + 8) = v6;
  }
  if ( a3 < 0 )
    return KeSetEvent((PRKEVENT)a3, 1, 0);
  else
    return MmStoreAsyncWriteComplete(a3 | 0x8000000000000000uLL, 1LL);
}
