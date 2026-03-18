/*
 * XREFs of ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00B6B84
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6A44 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6BA8 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01AAD64 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B6CAC (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveConnectivitySetId(CCD_BTL *this, struct CCD_SET_STRING_ID *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = a2;
  v3[1] = 0LL;
  v3[2] = 0LL;
  return CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v3);
}
