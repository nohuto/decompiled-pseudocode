/*
 * XREFs of ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C001C24C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall DXGPROCESS::CommitResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v2; // rsi
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax

  v2 = (char *)this + 192;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 192));
  v5 = *((_DWORD *)a2 + 4);
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)this + 58) )
  {
    v7 = *((_QWORD *)this + 27);
    if ( ((v5 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x30) && (*(_DWORD *)(v7 + 16 * v6 + 8) & 0xF) != 0 )
    {
      v8 = 2LL * ((v5 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v7 + 16LL * ((v5 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v9 + 24) = 194LL;
        WdLogEvent5_WdAssertion(v9);
      }
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v8 + 8) &= ~0x1000u;
    }
  }
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2082252089_58022145_FeatureDescriptorDetails) )
  {
    v10 = (*((_DWORD *)a2 + 4) >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)this + 58) )
      *(_DWORD *)(*((_QWORD *)this + 27) + 16LL * v10 + 8) &= ~0x2000u;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
