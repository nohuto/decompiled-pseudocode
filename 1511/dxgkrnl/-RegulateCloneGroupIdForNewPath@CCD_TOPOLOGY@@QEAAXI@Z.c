/*
 * XREFs of ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C0182038
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00C6908 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C0184A48 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C000A2D4 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(
        const struct _D3DKMT_GETPATHSMODALITY **this,
        unsigned int a2)
{
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_GETPATHSMODALITY *v5; // rax
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v9; // r14
  __int64 v10; // rax
  int PrimaryPathInCloneGroup; // eax

  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)this, a2) + 50) = -1;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)this, a2);
  *(_DWORD *)PathDescriptor |= 0x40000u;
  v5 = this[8];
  if ( v5 )
    LOWORD(v5) = *((_WORD *)v5 + 10);
  v6 = (unsigned __int16)v5;
  if ( (_WORD)v5 )
  {
    v7 = (unsigned __int16)v5 - 1;
    do
    {
      v9 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)this, v7);
      if ( (*(_DWORD *)v9 & 0x40000) == 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v10 + 24) = 6254LL;
        WdLogEvent5_WdAssertion(v10);
      }
      PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup(this[8], v7--);
      *((_DWORD *)v9 + 50) = PrimaryPathInCloneGroup | 0xFE558000;
      --v6;
    }
    while ( v6 );
  }
}
