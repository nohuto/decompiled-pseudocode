/*
 * XREFs of SmIssueIo @ 0x14020A768
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140204540 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x1402072E0 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SmKmIssueIo @ 0x140208648 (SmKmIssueIo.c)
 */

__int64 __fastcall SmIssueIo(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  int v7; // esi
  int v9; // r14d
  unsigned int v11; // ebp
  int v12; // r12d
  int v13; // r15d
  unsigned int v14; // ebp
  struct _EX_RUNDOWN_REF *v15; // rsi
  unsigned __int64 Count; // rax
  int v17; // edi
  bool v18; // zf
  unsigned __int64 v19; // rax
  void (__stdcall *v20)(PVOID, PIO_STATUS_BLOCK, ULONG); // r8
  _QWORD v22[13]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a6;
  v7 = 0;
  v9 = 0;
  v11 = a3;
  v12 = a2;
  if ( (a6 & 1) != 0 )
  {
    v6 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( (*(_DWORD *)(v6 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 4485) & 1) != 0 )
      return (unsigned int)-1073741058;
    goto LABEL_14;
  }
  v14 = *(_DWORD *)(a1 + 4480);
  v15 = (struct _EX_RUNDOWN_REF *)((char *)&SmGlobals + 176 * (v14 & 0x1F));
  if ( !ExAcquireRundownProtection(v15 + 1) )
    goto LABEL_9;
  if ( (v15[3].Count & 0x7FF) != v14 >> 5 )
  {
    ExReleaseRundownProtection_0(v15 + 1);
LABEL_9:
    Count = 0LL;
    goto LABEL_10;
  }
  Count = v15->Count;
LABEL_10:
  if ( !Count )
    return (unsigned int)-1073741058;
  v11 = a3;
  v12 = a2;
  v7 = 1;
LABEL_14:
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 4568), 1u);
    v9 = 1;
  }
  memset(v22, 0, 0x28uLL);
  HIDWORD(v22[3]) = *(_DWORD *)(a1 + 4672);
  v22[1] = a5;
  LODWORD(v22[3]) = v12;
  v18 = (*(_DWORD *)a1 & 0x2000) == 0;
  v22[2] = __PAIR64__(v11, a4);
  LODWORD(v22[4]) ^= (LOBYTE(v22[4]) ^ (v13 != 0)) & 1;
  if ( v18 )
  {
    v19 = v6 + 48;
    *(_QWORD *)(v6 + 40) = a1;
    *(_DWORD *)(v6 + 32) = a4;
    v20 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))SmpDeviceIoCompletion;
  }
  else
  {
    v19 = v6 + 32;
    v6 = a1;
    v20 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))SmpIoCompletionApc;
  }
  v22[0] = v19;
  v17 = SmKmIssueIo(a1 + 4680, (__int64)v22, v20, (void *)v6, (*(_DWORD *)a1 >> 13) & 1);
  if ( v17 >= 0 )
  {
    v7 = 0;
    v9 = 0;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4568));
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_1403027C8 + 22 * (*(_DWORD *)(a1 + 4480) & 0x1F));
  return (unsigned int)v17;
}
