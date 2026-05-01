/*
 * XREFs of ??$?RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@?$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_PSM_APP_INSTANCE_ID@@AEAU2@@Z @ 0x18001AC4C
 * Callers:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800172F8 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x180017AD0 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 *     ??$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18001E2C0 (--$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel.c)
 * Callees:
 *     <none>
 */

char __fastcall utl::construct<_RM_PSM_APP_INSTANCE_ID>::operator()<_RM_PSM_APP_INSTANCE_ID,_RM_PSM_APP_INSTANCE_ID &>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3)
{
  __int64 v3; // rax
  __int128 v4; // xmm1

  v3 = 4LL;
  do
  {
    *a2 = *a3;
    a2[1] = a3[1];
    a2[2] = a3[2];
    a2[3] = a3[3];
    a2[4] = a3[4];
    a2[5] = a3[5];
    a2[6] = a3[6];
    a2 += 8;
    v4 = a3[7];
    a3 += 8;
    *(a2 - 1) = v4;
    --v3;
  }
  while ( v3 );
  *a2 = *a3;
  a2[1] = a3[1];
  *((_QWORD *)a2 + 4) = *((_QWORD *)a3 + 4);
  return 1;
}
