/*
 * XREFs of SmPageRead @ 0x140109CEC
 * Callers:
 *     MiIssueHardFaultIo @ 0x14003A3B8 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x1403F70AC (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140109D44 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14010E9D0 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 */

__int64 __fastcall SmPageRead(union _MM_STORE_KEY *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // r11d
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  SmKeyConvert(a1, (union _SM_PAGE_KEY *)v7);
  v3 = 2LL * (unsigned int)dword_140305530;
  ++*((_DWORD *)&SmGlobals + 2 * v3 + 2860);
  *((_QWORD *)&SmGlobals + v3 + 1429) += 4096LL;
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead((unsigned int)&SmGlobals, (unsigned int)v7, a2, v5, v4);
}
