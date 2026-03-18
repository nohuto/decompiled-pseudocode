/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C017BE34
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01826F0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  __int64 v4; // rbp
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rdx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // rcx
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v28; // [rsp+20h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v10 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 2451LL;
    WdLogEvent5_WdError(v11);
    return -1073741811LL;
  }
  v13 = ProcessDxgProcess + 184;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v14 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 < *(_DWORD *)(v10 + 224)
    && (v15 = *(_QWORD *)(v10 + 208),
        v16 = *(_DWORD *)(v15 + 16LL * (unsigned int)v14 + 8),
        (((unsigned int)v4 >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * (unsigned int)v14 + 8) & 0x30))
    && (v16 & 0x1000) == 0
    && (v16 & 0xF) != 0
    && (v17 = 2 * v14, (*(_BYTE *)(v15 + 8 * v17 + 8) & 0xF) == 5) )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v15 + 8 * v17);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29, v18);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( !v29 )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = v4;
LABEL_16:
    WdLogEvent5_WdError(v20);
    v24 = -1073741823;
    goto LABEL_18;
  }
  v21 = *((_QWORD *)a1 + 2);
  v22 = *(_QWORD *)(v29[1].Count + 16);
  if ( *(_QWORD *)(v22 + 16) == *(_QWORD *)(v21 + 16) )
  {
    memset(&v28, 0, sizeof(v28));
    v28.hAllocation = *(HANDLE *)(v29[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v21 + 16) + 2136LL), &v28, v25) >= 0 )
    {
      Width = v28.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      v24 = 0;
      a3->bottom = v28.Height;
      goto LABEL_18;
    }
    v20 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v20 + 24) = v28.hAllocation;
    *(_QWORD *)(v20 + 32) = a1;
    goto LABEL_16;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
  v24 = -1073741811;
  v23[3] = a1;
  v23[4] = v29;
  v23[5] = -1073741811LL;
  WdLogEvent5_WdError(v23);
LABEL_18:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
  return v24;
}
