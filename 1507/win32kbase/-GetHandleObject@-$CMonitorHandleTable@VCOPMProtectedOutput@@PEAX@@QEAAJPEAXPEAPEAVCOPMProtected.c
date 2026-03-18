/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00681F0
 * Callers:
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0067AC0 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0067C44 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0067CB0 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0067D28 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C01AC (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C0234 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 * Callees:
 *     ?DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@@QEBAEXZ @ 0x1C0068440 (-DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@@QEBAEXZ.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00686D0 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 */

__int64 __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(
        __int64 a1,
        unsigned __int64 a2,
        CMonitorPDO **a3)
{
  CMonitorPDO *v5; // rdi
  CMonitorPDO *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 >= 0x100000000LL )
    return *(unsigned int *)(a1 + 16);
  if ( (int)CList<COPMProtectedOutput>::GetElement(a1, a2, &v7) < 0 )
    return *(unsigned int *)(a1 + 16);
  v5 = v7;
  if ( !CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(v7) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v5;
  return 0LL;
}
