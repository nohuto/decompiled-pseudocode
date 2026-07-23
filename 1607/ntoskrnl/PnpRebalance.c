/*
 * XREFs of PnpRebalance @ 0x140630484
 * Callers:
 *     PnpProcessRebalance @ 0x1401CE42C (PnpProcessRebalance.c)
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14000805C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400AF2C8 (PnpDiagnosticTraceObjectWithStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopCommitConfiguration @ 0x140555E7C (IopCommitConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x140556118 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x1405562FC (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140556624 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpCancelStopDeviceSubtree @ 0x140630060 (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x14063008C (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x1406307DC (PnpStopDeviceSubtree.c)
 *     PnpTraceRebalanceResult @ 0x14064940C (PnpTraceRebalanceResult.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, char a4)
{
  __int64 v5; // r14
  void *v6; // rcx
  unsigned __int16 *v9; // rdi
  int BestConfiguration; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // r12d
  _DWORD *v14; // r15
  __int64 v15; // r13
  int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  void *v20; // rcx
  unsigned int v23; // [rsp+34h] [rbp-A5h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-A1h]
  unsigned int v25; // [rsp+40h] [rbp-99h]
  size_t Size; // [rsp+48h] [rbp-91h]
  void *v27; // [rsp+50h] [rbp-89h]
  _QWORD *v28[3]; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v29[7]; // [rsp+70h] [rbp-69h] BYREF

  v5 = a3;
  v6 = *(void **)(a1 + 712);
  v27 = a2;
  if ( v6 )
    memset(v6, 0, 0x58uLL);
  memset(v29, 0, sizeof(v29));
  v9 = (unsigned __int16 *)(a1 + 40);
  *((_QWORD *)&v29[2] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v29[1] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v29[3] + 1) = MEMORY[0xFFFFF78000000008];
  LOBYTE(v29[3]) = a4;
  PnpDiagnosticTraceObject(&KMPnPEvt_Rebalance_Start, (unsigned __int16 *)(a1 + 40));
  if ( PnpDisableRebalance )
  {
    LODWORD(v29[1]) = 1;
    BestConfiguration = -1073741637;
    goto LABEL_20;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)IopNumberDeviceNodes << 6, 0x30706E50u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v29[1]) = 2;
    BestConfiguration = -1073741670;
    goto LABEL_19;
  }
  if ( (_DWORD)v5 )
    memmove(PoolWithTag, a2, v5 << 6);
  v13 = 0;
  v14 = &v29[1];
  v23 = 0;
  BestConfiguration = 0;
  v15 = 0LL;
  Size = v5 << 6;
  v16 = (_DWORD)v12 + ((_DWORD)v5 << 6);
  for ( i = &v12[8 * v5]; ; v16 = (int)i )
  {
    ++DWORD1(v29[0]);
    v25 = v13;
    PnpFindRebalanceCandidates(v15, a1, v16, &v23, a4, (__int64)v29);
    v13 = v23;
    if ( !(_DWORD)v5 && !a4 )
    {
      v17 = 0;
      if ( !v23 )
      {
LABEL_15:
        BestConfiguration = -1073741823;
        if ( *(_DWORD *)(a1 + 300) == 777 )
          *((_DWORD *)&v29[1] + v15) = 4;
        else
          *((_DWORD *)&v29[1] + v15) = 3;
LABEL_17:
        PnpCancelStopDeviceSubtree(IopRootDeviceNode);
        v18 = (unsigned __int64)i;
        goto LABEL_18;
      }
      while ( v12[8 * (unsigned __int64)v17] != *(_QWORD *)(a1 + 32) )
      {
        if ( ++v17 >= v23 )
          goto LABEL_15;
      }
    }
    if ( v25 != v23 )
      break;
    if ( !*v14 )
      *v14 = 5;
    if ( BestConfiguration != -1073739512 )
      BestConfiguration = -1073741823;
LABEL_31:
    v15 = (unsigned int)(v15 + 1);
    ++v14;
    if ( (unsigned int)v15 >= 2 )
      goto LABEL_17;
  }
  BestConfiguration = PnpFindBestConfiguration((__int64)v12, (unsigned int)v5 + v23, (__int64)v28);
  if ( BestConfiguration < 0 )
  {
    if ( !*v14 )
      *v14 = 6;
    goto LABEL_31;
  }
  PnpStopDeviceSubtree(IopRootDeviceNode);
  IopCommitConfiguration(v28);
  v18 = (unsigned __int64)i;
  if ( (_DWORD)v5 )
    PnpBuildCmResourceLists((unsigned __int64)v12, (unsigned __int64)i, 0);
  PnpBuildCmResourceLists(v18, (unsigned __int64)&v12[8 * (unsigned __int64)((unsigned int)v5 + v13)], 1);
  if ( (_DWORD)v5 )
    memmove(v27, v12, Size);
LABEL_18:
  PnpFreeResourceRequirementsForAssignTable(v18, (unsigned __int64)&v12[8 * (unsigned __int64)((unsigned int)v5 + v13)]);
  ExFreePoolWithTag(v12, 0x30706E50u);
LABEL_19:
  v9 = (unsigned __int16 *)(a1 + 40);
LABEL_20:
  PnpTraceRebalanceResult(v29);
  if ( BestConfiguration >= 0 )
  {
    v20 = *(void **)(a1 + 712);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0x62655250u);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 712);
    if ( v19 )
    {
      *(_OWORD *)v19 = v29[0];
      *(_OWORD *)(v19 + 16) = v29[1];
      *(_OWORD *)(v19 + 32) = v29[2];
      *(_OWORD *)(v19 + 48) = v29[3];
      *(_OWORD *)(v19 + 64) = v29[4];
      *(_QWORD *)(v19 + 80) = *(_QWORD *)&v29[5];
    }
  }
  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_Rebalance_Stop, v9, BestConfiguration);
  return (unsigned int)BestConfiguration;
}
