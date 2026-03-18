/*
 * XREFs of PnpRebalance @ 0x140680EDC
 * Callers:
 *     PnpProcessRebalance @ 0x1401FBA84 (PnpProcessRebalance.c)
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopCommitConfiguration @ 0x14059C184 (IopCommitConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x14059C214 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x14059C42C (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14059C7B4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpCancelStopDeviceSubtree @ 0x140680B70 (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x140680B9C (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x1406811D4 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, char a4)
{
  REGHANDLE v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // r8d
  int BestConfiguration; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  int v12; // r14d
  int v13; // r15d
  unsigned int v14; // ecx
  __int64 v15; // r9
  int v16; // ecx
  unsigned int v19; // [rsp+34h] [rbp-45h] BYREF
  int v20; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+40h] [rbp-39h]
  void *v22; // [rsp+48h] [rbp-31h]
  _QWORD *v23[2]; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]
  int *v28; // [rsp+80h] [rbp+7h]
  int v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+8Ch] [rbp+13h]

  v4 = PnpEtwHandle;
  v6 = a1;
  v7 = a3;
  v22 = a2;
  v21 = a1;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_Rebalance_Start) )
  {
    v8 = *(unsigned __int16 *)(v6 + 40);
    UserData.Reserved = 0;
    v27 = 0;
    LOWORD(v19) = (unsigned __int16)v8 >> 1;
    UserData.Ptr = (ULONGLONG)&v19;
    v25 = *(_QWORD *)(v6 + 48);
    v26 = v8;
    UserData.Size = 2;
    EtwWrite(v4, &KMPnPEvt_Rebalance_Start, 0LL, 2u, &UserData);
    v4 = PnpEtwHandle;
  }
  if ( PnpDisableRebalance )
  {
    BestConfiguration = -1073741637;
    goto LABEL_30;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)IopNumberDeviceNodes << 6, 0x30706E50u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    BestConfiguration = -1073741670;
    goto LABEL_29;
  }
  if ( (_DWORD)v7 )
    memmove(PoolWithTag, a2, v7 << 6);
  v12 = 0;
  BestConfiguration = 0;
  v13 = 0;
  v19 = 0;
  while ( 1 )
  {
    v20 = v12;
    PnpFindRebalanceCandidates(v13, v21, ((_DWORD)v7 << 6) + (_DWORD)v11, (int)&v19, a4);
    v12 = v19;
    if ( !(_DWORD)v7 && !a4 )
    {
      v14 = 0;
      if ( !v19 )
      {
LABEL_16:
        BestConfiguration = -1073741823;
LABEL_27:
        PnpCancelStopDeviceSubtree(IopRootDeviceNode);
        goto LABEL_28;
      }
      while ( v11[8 * (unsigned __int64)v14] != *(_QWORD *)(v21 + 32) )
      {
        if ( ++v14 >= v19 )
          goto LABEL_16;
      }
    }
    if ( v20 == v19 )
    {
      if ( BestConfiguration != -1073739512 )
        BestConfiguration = -1073741823;
      goto LABEL_26;
    }
    BestConfiguration = PnpFindBestConfiguration((__int64)v11, (unsigned int)v7 + v19, (__int64)v23);
    if ( BestConfiguration >= 0 )
      break;
LABEL_26:
    if ( (unsigned int)++v13 >= 2 )
      goto LABEL_27;
  }
  PnpStopDeviceSubtree(IopRootDeviceNode);
  IopCommitConfiguration(v23);
  if ( (_DWORD)v7 )
    PnpBuildCmResourceLists((unsigned __int64)v11, (unsigned __int64)&v11[8 * v7], 0, v15);
  PnpBuildCmResourceLists(
    (unsigned __int64)&v11[8 * v7],
    (unsigned __int64)&v11[8 * (unsigned __int64)(unsigned int)(v7 + v12)],
    1,
    v15);
  if ( (_DWORD)v7 )
    memmove(v22, v11, v7 << 6);
LABEL_28:
  PnpFreeResourceRequirementsForAssignTable(
    (unsigned __int64)&v11[8 * v7],
    (unsigned __int64)&v11[8 * (unsigned __int64)(unsigned int)(v7 + v12)]);
  ExFreePoolWithTag(v11, 0x30706E50u);
  v6 = v21;
LABEL_29:
  v4 = PnpEtwHandle;
LABEL_30:
  v20 = BestConfiguration;
  if ( v4 && EtwEventEnabled(v4, &KMPnPEvt_Rebalance_Stop) )
  {
    v16 = *(unsigned __int16 *)(v6 + 40);
    UserData.Reserved = 0;
    v27 = 0;
    v30 = 0;
    LOWORD(v19) = (unsigned __int16)v16 >> 1;
    UserData.Ptr = (ULONGLONG)&v19;
    v25 = *(_QWORD *)(v6 + 48);
    v28 = &v20;
    v26 = v16;
    UserData.Size = 2;
    v29 = 4;
    EtwWrite(v4, &KMPnPEvt_Rebalance_Stop, 0LL, 3u, &UserData);
  }
  return (unsigned int)BestConfiguration;
}
