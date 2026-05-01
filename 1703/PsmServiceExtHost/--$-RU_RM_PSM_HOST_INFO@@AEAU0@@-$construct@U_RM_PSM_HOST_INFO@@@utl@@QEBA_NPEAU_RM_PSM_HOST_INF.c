/*
 * XREFs of ??$?RU_RM_PSM_HOST_INFO@@AEAU0@@?$construct@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NPEAU_RM_PSM_HOST_INFO@@AEAU2@@Z @ 0x180016194
 * Callers:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000ABDC (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ??$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x180017FDC (--$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@-$_.c)
 * Callees:
 *     <none>
 */

char __fastcall utl::construct<_RM_PSM_HOST_INFO>::operator()<_RM_PSM_HOST_INFO,_RM_PSM_HOST_INFO &>(
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
