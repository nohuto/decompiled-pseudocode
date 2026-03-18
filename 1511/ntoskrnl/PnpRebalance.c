/*
 * XREFs of PnpRebalance @ 0x140606198
 * Callers:
 *     PnpProcessRebalance @ 0x1401BFE4C (PnpProcessRebalance.c)
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14001A954 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400EFAFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopCommitConfiguration @ 0x1405298B8 (IopCommitConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x140529948 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x140529B2C (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140529EB4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpCancelStopDeviceSubtree @ 0x140605DCC (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x140605DF8 (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x14060642C (PnpStopDeviceSubtree.c)
 *     PnpTraceRebalanceResult @ 0x1406148CC (PnpTraceRebalanceResult.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, char a4)
{
  __int64 v5; // rsi
  int BestConfiguration; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // r14d
  int v12; // r15d
  unsigned int v13; // ecx
  unsigned int v15; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-35h]
  unsigned __int16 *v17; // [rsp+40h] [rbp-31h]
  _QWORD *v18[2]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v19[14]; // [rsp+58h] [rbp-19h] BYREF

  v5 = a3;
  memset(v19, 0, 0x38uLL);
  v19[4] = IopRootDeviceNode;
  v19[2] = IopRootDeviceNode;
  v19[6] = MEMORY[0xFFFFF78000000008];
  LOBYTE(v19[5]) = a4;
  v17 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_Rebalance_Start, (unsigned __int16 *)(a1 + 40));
  if ( PnpDisableRebalance )
  {
    LODWORD(v19[1]) = 1;
    BestConfiguration = -1073741637;
    goto LABEL_17;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)IopNumberDeviceNodes << 6, 0x30706E50u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v19[1]) = 2;
    BestConfiguration = -1073741670;
    goto LABEL_17;
  }
  if ( (_DWORD)v5 )
    memmove(PoolWithTag, a2, v5 << 6);
  v11 = 0;
  BestConfiguration = 0;
  v12 = 0;
  v15 = 0;
  while ( 1 )
  {
    v16 = v11;
    PnpFindRebalanceCandidates(v12, a1, (_DWORD)v10 + ((_DWORD)v5 << 6), &v15, a4, (__int64)v19);
    v11 = v15;
    if ( !(_DWORD)v5 && !a4 )
    {
      v13 = 0;
      if ( !v15 )
      {
LABEL_13:
        BestConfiguration = -1073741823;
        if ( *(_DWORD *)(a1 + 300) == 777 )
          LODWORD(v19[1]) = 4;
        else
          LODWORD(v19[1]) = 3;
LABEL_15:
        PnpCancelStopDeviceSubtree(IopRootDeviceNode);
        goto LABEL_16;
      }
      while ( v10[8 * (unsigned __int64)v13] != *(_QWORD *)(a1 + 32) )
      {
        if ( ++v13 >= v15 )
          goto LABEL_13;
      }
    }
    if ( v16 == v15 )
    {
      LODWORD(v19[1]) = 5;
      if ( BestConfiguration != -1073739512 )
        BestConfiguration = -1073741823;
      goto LABEL_23;
    }
    BestConfiguration = PnpFindBestConfiguration((__int64)v10, v15 + (unsigned int)v5, (__int64)v18);
    if ( BestConfiguration >= 0 )
      break;
    LODWORD(v19[1]) = 6;
LABEL_23:
    if ( (unsigned int)++v12 >= 2 )
      goto LABEL_15;
  }
  PnpStopDeviceSubtree(IopRootDeviceNode);
  IopCommitConfiguration(v18);
  if ( (_DWORD)v5 )
    PnpBuildCmResourceLists((unsigned __int64)v10, (unsigned __int64)&v10[8 * v5], 0);
  PnpBuildCmResourceLists(
    (unsigned __int64)&v10[8 * v5],
    (unsigned __int64)&v10[8 * (unsigned __int64)(v11 + (unsigned int)v5)],
    1);
  if ( (_DWORD)v5 )
    memmove(a2, v10, v5 << 6);
LABEL_16:
  PnpFreeResourceRequirementsForAssignTable(
    (unsigned __int64)&v10[8 * v5],
    (unsigned __int64)&v10[8 * (unsigned __int64)(v11 + (unsigned int)v5)]);
  ExFreePoolWithTag(v10, 0x30706E50u);
LABEL_17:
  PnpTraceRebalanceResult(v19);
  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_Rebalance_Stop, v17, BestConfiguration);
  return (unsigned int)BestConfiguration;
}
