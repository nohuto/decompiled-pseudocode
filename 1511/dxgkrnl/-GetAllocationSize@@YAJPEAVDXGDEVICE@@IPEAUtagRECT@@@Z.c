/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C01572C0
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C015CE30 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  __int64 v4; // rbp
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  struct DXGPROCESS *v9; // rbx
  __int64 v10; // rax
  char *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rdx
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  struct _DXGKARG_DESCRIBEALLOCATION v23; // [rsp+20h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent();
  v8 = 0;
  v9 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = 2380LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v12 = (char *)Current + 192;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v13 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *((_DWORD *)v9 + 58)
    && (v14 = *((_QWORD *)v9 + 27),
        v15 = *(_DWORD *)(v14 + 16LL * (unsigned int)v13 + 8),
        (((unsigned int)v4 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * (unsigned int)v13 + 8) & 0x30))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (v16 = 2 * v13, (*(_BYTE *)(v14 + 8 * v16 + 8) & 0xF) == 5) )
  {
    v17 = *(struct _EX_RUNDOWN_REF **)(v14 + 8 * v16);
  }
  else
  {
    v17 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24, v17);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( v24 )
  {
    memset(&v23, 0, sizeof(v23));
    v21 = *((_QWORD *)a1 + 2);
    v23.hAllocation = *(HANDLE *)(v24[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v21 + 16) + 1992LL), &v23, v19) >= 0 )
    {
      a3->right = v23.Width;
      a3->bottom = v23.Height;
      *(_QWORD *)&a3->left = 0LL;
      goto LABEL_16;
    }
    v20 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v20 + 24) = v23.hAllocation;
    *(_QWORD *)(v20 + 32) = a1;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = v4;
  }
  WdLogEvent5_WdError(v20);
  v8 = -1073741823;
LABEL_16:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24);
  return v8;
}
