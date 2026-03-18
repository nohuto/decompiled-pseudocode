/*
 * XREFs of SmIssueIo @ 0x140259C70
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1402537EC (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14025653C (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmKmIssueIo @ 0x1402578DC (SmKmIssueIo.c)
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
  int v9; // r15d
  unsigned int v11; // ebp
  int v12; // r14d
  int v13; // r12d
  unsigned int v14; // ebp
  struct _EX_RUNDOWN_REF *v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rsi
  unsigned __int64 v17; // rtt
  struct _EX_RUNDOWN_REF v18; // rax
  unsigned __int64 v19; // rtt
  int v20; // edi
  bool v21; // zf
  unsigned __int64 v22; // rax
  void (__stdcall *v23)(PVOID, PIO_STATUS_BLOCK, ULONG); // r8
  struct _EX_RUNDOWN_REF *v24; // rcx
  unsigned __int64 v25; // rtt
  _QWORD v27[13]; // [rsp+30h] [rbp-68h] BYREF

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
    goto LABEL_16;
  }
  v14 = *(_DWORD *)(a1 + 4480);
  v15 = (struct _EX_RUNDOWN_REF *)&SmGlobals[22 * (v14 & 0x1F)];
  v16 = v15 + 1;
  _m_prefetchw(&v15[1]);
  v17 = v15[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&v15[1], v17 + 2, v17)
    && !ExfAcquireRundownProtection(v15 + 1) )
  {
    goto LABEL_11;
  }
  if ( (v15[3].Count & 0x7FF) != v14 >> 5 )
  {
    _m_prefetchw(v16);
    v19 = v16->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v19 - 2, v19) )
      ExfReleaseRundownProtection(v15 + 1);
LABEL_11:
    v18.Count = 0LL;
    goto LABEL_12;
  }
  v18.Count = v15->Count;
LABEL_12:
  if ( !v18.Count )
    return (unsigned int)-1073741058;
  v11 = a3;
  v12 = a2;
  v7 = 1;
LABEL_16:
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 4568), 1u);
    v9 = 1;
  }
  memset(v27, 0, 0x28uLL);
  HIDWORD(v27[3]) = *(_DWORD *)(a1 + 4672);
  v27[1] = a5;
  LODWORD(v27[3]) = v12;
  v21 = (*(_DWORD *)a1 & 0x2000) == 0;
  v27[2] = __PAIR64__(v11, a4);
  LODWORD(v27[4]) ^= (LOBYTE(v27[4]) ^ (v13 != 0)) & 1;
  if ( v21 )
  {
    v22 = v6 + 48;
    *(_QWORD *)(v6 + 40) = a1;
    *(_DWORD *)(v6 + 32) = a4;
    v23 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))SmpDeviceIoCompletion;
  }
  else
  {
    v22 = v6 + 32;
    v6 = a1;
    v23 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))SmpIoCompletionApc;
  }
  v27[0] = v22;
  v20 = SmKmIssueIo(a1 + 4680, (__int64)v27, v23, (void *)v6, (*(_DWORD *)a1 >> 13) & 1);
  if ( v20 >= 0 )
  {
    v7 = 0;
    v9 = 0;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4568));
  if ( v7 )
  {
    v24 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (*(_DWORD *)(a1 + 4480) & 0x1F));
    _m_prefetchw(v24);
    v25 = v24->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v25 != _InterlockedCompareExchange64((volatile signed __int64 *)v24, v25 - 2, v25) )
      ExfReleaseRundownProtection(v24);
  }
  return (unsigned int)v20;
}
