/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0088FD0
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00881A0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C014F530 (DxgkRender.c)
 * Callees:
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0001750 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // esi
  __int64 hAllocation; // r14
  __int64 v17; // rdx
  struct _EX_RUNDOWN_REF *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+28h] [rbp-60h]
  _BYTE v26[80]; // [rsp+38h] [rbp-50h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v11 = *(_QWORD *)(ProcessWin32Process + 248);
    v12 = 0;
  }
  else
  {
    v22 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v22 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v22);
    v12 = 0;
    v11 = 0LL;
  }
  v25 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26, (struct DXGPROCESS *)v11);
  v15 = *a1;
  while ( v12 < v15 )
  {
    hAllocation = a2->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v17 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *(_DWORD *)(v11 + 232)
        && (v14 = *(_QWORD *)(v11 + 216),
            v13 = *(unsigned int *)(v14 + 16LL * (unsigned int)v17 + 8),
            (((unsigned int)hAllocation >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * (unsigned int)v17 + 8) & 0x30))
        && (v13 & 0x1000) == 0
        && (v13 & 0xF) != 0
        && (*(_BYTE *)(v14 + 16LL * (unsigned int)v17 + 8) & 0xF) == 5 )
      {
        v18 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v17);
      }
      else
      {
        v18 = 0LL;
      }
      a3[v12] = (struct DXGALLOCATION *)v18;
      if ( !v18 )
      {
        v23 = WdLogNewEntry5_WdWarning(a3, v17, v13, v14);
        *(_QWORD *)(v23 + 24) = hAllocation;
        WdLogEvent5_WdWarning(v23);
        v25 = -1071775468;
        break;
      }
      if ( !ExAcquireRundownProtection(v18 + 11) )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v13);
        v24[3] = 275LL;
        v24[4] = 25LL;
        v24[5] = v18;
        v24[6] = 0LL;
        v24[7] = 0LL;
        WdLogEvent5_WdCriticalError(v24);
      }
    }
    ++a2;
    ++v12;
  }
  *a1 = v12;
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26);
  return v25;
}
