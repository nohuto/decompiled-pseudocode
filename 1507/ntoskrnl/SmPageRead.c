/*
 * XREFs of SmPageRead @ 0x14013C58C
 * Callers:
 *     MiIssueHardFaultIo @ 0x140085C00 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x1404B2C24 (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14013C608 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 */

__int64 __fastcall SmPageRead(_QWORD *a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a1 >> 60;
  if ( v5 != 15 && (*a1 & 0xFFFFFFFFFFFFFFFuLL) <= 0xFFFFFFF )
    v8 = ((_DWORD)v5 << 28) | *(_DWORD *)a1 & 0xFFFFFFF;
  v6 = 2LL * (unsigned int)dword_140353290;
  ++*((_DWORD *)&SmGlobals + 2 * v6 + 2852);
  *((_QWORD *)&SmGlobals + v6 + 1425) += 4096LL;
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead((unsigned int)&SmGlobals, (unsigned int)&v8, a2, a3, a4);
}
