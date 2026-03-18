/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00C69B4
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00C6908 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0154748 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A4828 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(__int64 a1, __int64 a2, char a3, void **a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // bx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int16 v14; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v14) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v7 = 8;
  v14 = 8;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)a4, v7, v5, v6) >= v7 )
  {
    v10 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)a4, 1, 0, 1, &v14);
    if ( v10 != -1073741789 )
      goto LABEL_4;
    v7 = v14;
  }
  v12 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v12 + 24) = v7;
  WdLogEvent5_WdError(v12);
  v10 = -1073741801;
LABEL_4:
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = v10;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v10;
}
